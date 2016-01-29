#include "Solar.h"
#include <iostream>

bool Solar::make()
{
	/*	glm::vec3 pos = glm::vec3(0);
	enum name	{mer, ven, ear, mar, jup, sat, ura, plu};
	std::list<Planet> planitlist;*/

	//for each (Planet::name p in name)
	//{

	//}



	Planet* sun = new Planet();
	sun->m_OrbitSpeed = 0.f;
	sun->pos = glm::vec3(0,0,0);
	sun->size = 1;
	//sun->m_AutoOrbit = false;
	Planet* mer = new Planet();
	mer->m_OrbitSpeed = 47.87f;
	mer->pos = glm::vec3(2,0,0);
	mer->parent = sun;
	mer->dis = 1;
	Planet* ven = new Planet();
	ven->m_OrbitSpeed = 35.02f;
	ven->pos = glm::vec3(3, 0, 0);
	ven->parent = sun;
	ven->dis = 2;
	Planet* ear = new Planet();
	ear->m_OrbitSpeed = 29.78f;
	ear->pos = glm::vec3(4, 0, 0);
	ear->parent = sun;
	ear->dis = 3;
	Planet* mar = new Planet();
	mar->m_OrbitSpeed = 24.077f;
	mar->pos = glm::vec3(5, 0, 0);
	mar->parent = sun;
	mar->dis = 4;
	Planet* jup = new Planet();
	jup->m_OrbitSpeed = 13.07f;
	jup->pos = glm::vec3(6, 0, 0);
	jup->parent = sun;
	jup->dis = 5;
	Planet* sat = new Planet();
	sat->m_OrbitSpeed = 9.69f;
	sat->pos = glm::vec3(7, 0, 0);
	sat->parent = sun;
	sat->dis = 6;
	Planet* ura = new Planet();
	ura->m_OrbitSpeed = 6.81f;
	ura->pos = glm::vec3(8, 0, 0);
	ura->parent = sun;
	ura->dis = 7;
	Planet* nep = new Planet();
	nep->m_OrbitSpeed = 5.43f;
	nep->pos = glm::vec3(9, 0, 0);
	nep->parent = sun;
	nep->dis = 8;

	planets.push_back(sun);
	planets.push_back(mer);
	planets.push_back(ven);
	planets.push_back(ear);
	planets.push_back(mar);
	planets.push_back(jup);
	planets.push_back(sat);
	planets.push_back(ura);
	planets.push_back(nep);



	return true;
}

bool Solar::draw(float dt)
{
	//if (planets.size() == 0)
	//	return false;


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
		p->update(dt);
		p->draw();

	}
	//	test->update(test);
		//test->draw(test);
	Application *a = Application::Instantiate();


	Gizmos::draw(a->GetProjection() * a->GetView());

	return true;

}