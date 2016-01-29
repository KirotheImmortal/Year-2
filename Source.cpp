#include "MyApplication.h"
#include "Solar.h"
#include <iostream>
#include <time.h>
#include <ctime>

#include "tiny_obj_loader.h"

int main()
{
	float deltatime = .0f;
	
	std::vector<tinyobj::shape_t> shapes;
	std::vector<tinyobj::material_t> materials;
	/*std::string err = tinyobj::LoadObj(shapes, materials,
		"./models/stanford/bunny.obj");*/
	std::string err;
	tinyobj::LoadObj(shapes, materials, err, "Dragon.obj", "./models/dragon.obj");



	//Instantiates a new Solar wich will be the system of planets
	Solar* solarsystem = new Solar();

	//Instantiates the Application singleton
	Application *app = Application::Instantiate();

	if (app->startup())
	{ solarsystem->make();
		while (app->update())
		{ 
				app->draw();	
				solarsystem->draw(app->GetDeltaTime());
			
				
				
		}
		delete app;
		solarsystem->~Solar();
		//delete solarsystem;
     }
	return 0;
}