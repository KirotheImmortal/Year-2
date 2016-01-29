#pragma once
#include "Entity.h"
#include <list>

class Planet : public Entity
{
	/*
	mercury: 30 mps
	venus 20 mps
	earth 17 mps
	mars 15 mps
	jupiter 8 mps
	saturn 6 mps
	uranus 4 mps
	pluto 3 mps
	*/


public:
	glm::mat4 Model = glm::mat4(.1f);
	Entity* parent = NULL;
	float dis = 5;
	float size = .5;
	//Manual set Speed to 1 and AutoOrbit to false
	Planet() {}

    bool draw();
	bool update(float dt);

	~Planet() { }
	
	float m_Angle;
	bool m_AutoOrbit = true;
	float m_OrbitSpeed;
	float m_RotationSpeed;
private:
	float m_AngleofOrbit = 1.0f;

	

};