#pragma once

#include "MyApplication.h"
#include "Planet.h"

#include <list>
#include <iostream>
class Solar
{
public:

	Solar() {}
	/*: planets(std::list<*>()) */
	bool make();
	bool draw(float dt);
	std::list<Planet*> planets;
    //std::list<Planet*> planets;
	~Solar() 
	{	
		
		while (!planets.empty())
		{
			delete planets.front();
			planets.pop_front();
		}
	}

};