#pragma once

#include "MyApplication.h"
#include "Planet.h"

class Solar : public Application
{
public:
	Solar() {}
	bool make(Solar self);
	bool draw();
	Planet planets[9];
	~Solar() {}

};