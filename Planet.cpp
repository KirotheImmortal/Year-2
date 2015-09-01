#include "Planet.h"
#include <iostream>

bool Planet::draw()
{
	//Gizmos::addSphere(glm::vec3(1, 1, 1), .5f, 10, 10, glm::vec4(0,0,0,1), new glm::mat4(1));
	Gizmos::addSphere(pos, .5f, 10, 10, glm::vec4(0, 0, 0, 1), new glm::mat4(1));

	return true;
}
bool Planet::update(float dt)
{
	if (pn == sun)
		return false;
	/*
	convert to fps f beeing float
	mercury: 30 mps 
	venus 20 mps
	earth 17 mps
	mars 15 mps
	jupiter 8 mps
	saturn 6 mps
	uranus 4 mps
	pluto 3 mps
	int centrex=100,centrey=100;// centre of circle in pixel coords
	int radius=50;

	float two_pi=6.283f;

	float angle_inc=1.0f/radius;
	for(float angle=0.0f; angle<= two_pi;angle+=angle_inc){
	xpos=centrex+radius*cos(angle);
	ypos=centrey+radius*sin(angle);
	putpixel(x,pos,ypos,surface);
	*/



	glm::vec3 center = glm::vec3(1);
	pos.x = pos.x - center.x;
	pos.z = pos.z - center.y;
	glm::vec2 vec = glm::vec2(pos.x, pos.y);

	float hyp = sqrt((pos.z*pos.z) + (pos.x*pos.x));
	float radien = angleoforbit * (3.14 / 180);
		pos.x = (center.x + dis * sin(radien));
		pos.z = (center.z + dis * cos(radien));
		/*pos.x += pos.x / hyp * static_cast<float>(pn);
		pos.z += pos.z / hyp * static_cast<float>(pn);*/
		elaps = .0f;
	//	std::cout << pos.x<< ',' << pos.z << std::endl;

		angleoforbit++;
	

	return true;
}
bool Planet::setName(name n)
{
	pn = n;
	return true;
}