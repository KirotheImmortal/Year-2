#pragma once
#include "MyApplication.h"
#include <list>

class Planet : public Application
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
	enum name{sun, mer, ven , ear, mar, jup, sat, ura, plu};
	glm::vec3 pos = glm::vec3(0);
	float dis;
	Planet() {}
	bool setName(name n);
	bool draw();
	bool update(float dt);
	~Planet() {}
private:
	float angle;
	name pn;
	float elaps = .0f;
	float angleoforbit = 1.0f;



};