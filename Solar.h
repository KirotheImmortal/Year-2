#pragma once

#include "MyApplication.h"
#include "Planet.h"

#include <list>

class Solar : public Application
{
public:

	Solar() {}
	/*: planets(std::list<*>()) */
	bool make();
	bool draw(float dt);
	std::list<Planet*> planets;
    //std::list<Planet*> planets;
	~Solar() {}

};