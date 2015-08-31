#pragma once
#include "Solar.h"
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
	Planet();
	Planet(name n) { pn = n; }

	bool draw();
	bool update(Planet p);
	~Planet();
private:
	
	name pn;



};