#pragma once
#include "stdio.h"
#include <gl_core_4_4.h>  
#include <glfw\glfw3.h>


#include "Gizmos.h"	
#include <glm\glm.hpp>
#include <glm\ext.hpp>

#include <math.h>

#include <time.h>

#include "tiny_obj_loader.h"

using glm::vec3;
using glm::vec4;
using glm::mat4;

struct OpenGLInfo
{
	unsigned int m_VAO;
	unsigned int m_VBO;
	unsigned int m_IBO;
	unsigned int m_index_count;
};

class Application
{
private:
	GLFWwindow* window;
	mat4 view;
	mat4 projection;
	static Application *s_instance;

	float m_deltaTime, m_totalTime;

	Application();
public:

	std::vector<OpenGLInfo> m_gl_info;
	bool startup();
	bool draw();
	bool update();
	bool shutdown();
	
	void CreateOpenGLBuffers(std::vector<tinyobj::shape_t>& shapes);

	float GetDeltaTime()
	{
		return m_deltaTime;
	}

	mat4 GetView()
	{
		return view;
	}
	mat4 GetProjection()
	{
		return projection;
	}

	static Application *Instantiate()
	{

		if (s_instance == nullptr)
			s_instance = new Application();

		return s_instance;
	}
	~Application();



};

//soh cah toa