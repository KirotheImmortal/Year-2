#pragma once
#include <gl_core_4_4.h>  
#include <glfw\glfw3.h>


#include "Gizmos.h"	
#include <glm\glm.hpp>
#include <glm\ext.hpp>

#include <math.h>

class Entity
{
public:
	glm::vec3 pos = glm::vec3(0);
	glm::mat4 Model;

	virtual bool draw() = 0;
	virtual bool update(float dt) = 0;
protected:




};