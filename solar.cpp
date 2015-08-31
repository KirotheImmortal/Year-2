#include "Solar.h"
#include <iostream>

bool Solar::make(Solar self)
{
	/*	glm::vec3 pos = glm::vec3(0);
	enum name	{mer, ven, ear, mar, jup, sat, ura, plu};
	std::list<Planet> planitlist;*/

	for (int i = 0; i < 9; i++)
	{
		self.planets.push_back(new Planet(static_cast<Planet::name>(i)));
		self.planets.back()->pos = glm::vec3(1 + i, 1, 1);
	}
	return true;
}

bool Solar::draw()
{
	if (planets.size() == 0)
		return false;

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	Gizmos::clear();
	/*
	static void		addSphere(const glm::vec3& a_center, float a_radius, int a_rows, int a_columns, const glm::vec4& a_fillColour,
	const glm::mat4* a_transform = nullptr, float a_longMin = 0.f, float a_longMax = 360,
	float a_latMin = -90, float a_latMax = 90 );


	vec3 center
	float radius
	int rows
	int columns
	vec4 fillColour
	const mat4 transform
	float longMin
	float longMax
	float latMin 
	float latMax

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	Gizmos::clear();
	Gizmos::addTransform(glm::mat4(1));

	*/
	Gizmos::addTransform(glm::mat4(1));
	for each (auto p in planets)
	{
		p->update(*p);
		p->draw();
	}


	Gizmos::draw(projection * view);

	return true;

}