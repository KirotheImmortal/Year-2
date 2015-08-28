#include "Solar.h"
#include <iostream>

bool Solar::draw()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	Gizmos::clear();
	/*
	Okay so.. What i need is planets and a sun..

	first i should make a center. This be the sun. Then planets that outlay it.

	how many planets and a son: 9
	
	For loop that loops 9 times and makes 9 spheres. Initial will be all the same time. 

	static void		addSphere(const glm::vec3& a_center, float a_radius, int a_rows, int a_columns, const glm::vec4& a_fillColour,
	const glm::mat4* a_transform = nullptr, float a_longMin = 0.f, float a_longMax = 360,
	float a_latMin = -90, float a_latMax = 90 );

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	Gizmos::clear();
	Gizmos::addTransform(glm::mat4(1));

	*/
	Gizmos::addTransform(glm::mat4(1));
	Gizmos::draw(projection * view);

	return true;

}