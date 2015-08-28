#include "MyApplication.h"

Application::Application() {}
Application::~Application() {}

bool Application::startup()
{
	if (glfwInit() == false) //Initializes GLFW
		return false;//If glfwInit() fails it returns false. If this happens this will be hit and Application will return false and not be made.

	window = glfwCreateWindow(1280, 800, "Computer Graphics", nullptr, nullptr); //Creates Window

	if (window == nullptr) // Checks to see if window was created.
	{
		glfwTerminate();
		return false; //If it wasnt created App will return false.
	}

	glfwMakeContextCurrent(window);

	if (ogl_LoadFunctions() == ogl_LOAD_FAILED)
	{
		glfwDestroyWindow(window);
		glfwTerminate();
		return false;
	}
	view = glm::lookAt(vec3(10, 10, 10), vec3(0), vec3(0, 1, 0));
	projection = glm::perspective(glm::pi<float>() * 0.25f, 16 / 9.f, 0.1f, 1000.f);

	Gizmos::create();


	glClearColor(0.25f, .25f, .25f, 1);
	glEnable(GL_DEPTH_TEST);

	return true;
}
bool Application::update()
{
	if (glfwWindowShouldClose(window) == false && glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS)
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
		return true;
	}
	else return false;
}
bool Application::shutdown()
{
	Gizmos::destroy();
	glfwDestroyWindow(window);
	glfwTerminate();
	return true;
}
bool Application::draw()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	Gizmos::clear();
	Gizmos::addTransform(glm::mat4(1));
	vec4 white(1);
	vec4 black(0, 0, 0, 1);
	for (int i = 0; i < 21; ++i)
	{
		Gizmos::addLine(vec3(-10 + i, 0, 10), vec3(-10 + i, 0, -10), i == 10 ? white : black);
		Gizmos::addLine(vec3(10, 0, -10 + i), vec3(-10, 0, -10 + i), i == 10 ? white : black);
	}
	Gizmos::draw(projection * view);


	return true;
}