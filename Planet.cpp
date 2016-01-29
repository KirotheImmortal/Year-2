#include "Planet.h"
#include <iostream>

;

bool Planet::draw()
{
	
	//Gizmos::addSphere(glm::vec3(1, 1, 1), .5f, 10, 10, glm::vec4(0,0,0,1), new glm::mat4(1));
	Gizmos::addSphere(pos, 1.f, 2, 2, glm::vec4(0, 0, 0, 1), &Model);

	return true;
}
bool Planet::update(float dt)
{

	/*
	float two_pi=6.283f;

	float angle_inc=1.0f/radius;
	for(float angle=0.0f; angle<= two_pi;angle+=angle_inc){
	xpos=centrex+radius*cos(angle);
	ypos=centrey+radius*sin(angle);
	putpixel(x,pos,ypos,surface);
	*/
	if (m_AutoOrbit == false)
		return true;

	glm::vec3 center;
	if (parent != NULL)
		center = parent->pos; /// Center of the orbit
	else
		center = glm::vec3(0);
	
	Model = glm::rotate(Model, -m_RotationSpeed*dt, glm::vec3(0, 1, 0));
	pos.x = pos.x - center.x; /// relitive to centre
	pos.z = pos.z - center.y; /// same as upper statement

	//glm::vec2 vec = glm::vec2(pos.x, pos.y);

	

	float radien = m_AngleofOrbit * (3.14 / 180);

		pos.x = (center.x + dis * cos(radien));
		pos.z = (center.z + dis * sin(radien));


		m_AngleofOrbit += m_OrbitSpeed * dt;
		
	

	return true;
}