#pragma once

#include "MyApplication.h"
#include "Planet.h"

#include <list>

class Solar : public Application
{
public:

	Solar() {}
	bool make(Solar self);
	bool draw();
    std::list<Planet*> planets;
	~Solar() {}

};