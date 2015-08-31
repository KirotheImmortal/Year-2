#pragma once
#include "stdio.h"
#include <gl_core_4_4.h>  
#include <glfw\glfw3.h>


#include "Gizmos.h"	
#include <glm\glm.hpp>
#include <glm\ext.hpp>

#include <math.h>


using glm::vec3;
using glm::vec4;
using glm::mat4;


class Application
{
protected:
	 GLFWwindow* window;
	 mat4 view;
	 mat4 projection;
	
public:

	Application();
	virtual bool startup();
	virtual bool draw();
	virtual bool update();
	virtual bool shutdown();
	~Application();



};