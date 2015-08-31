#include "Planet.h"

bool Planet::draw()
{
	//Gizmos::addSphere(glm::vec3(1, 1, 1), .5f, 10, 10, glm::vec4(0,0,0,1), new glm::mat4(1));
	Gizmos::addSphere(Planet::pos, .5f, 10, 10, glm::vec4(0, 0, 0, 1), new glm::mat4(1));

	return true;
}
bool Planet::update(Planet p)
{
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

	glm::vec3 center = p.pos;
	pos.x = center.x + dis * cos((pos.z / sqrtf((pos.z*pos.z) + (pos.x*pos.x))));
	pos.z = center.x + dis * sin((pos.z / sqrtf((pos.z*pos.z) + (pos.x*pos.x))));

	return true;
}