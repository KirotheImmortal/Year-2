#pragma once

#include "MyApplication.h"

class Solar : public Application
{
private:

	glm::vec3 pos[9];


public:
	Solar() {}

	bool draw();
	bool orbit();

	~Solar() {}

};