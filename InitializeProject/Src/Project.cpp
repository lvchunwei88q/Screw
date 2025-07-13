#include "Screw.h"

class Project : public Screw::Application 
{
public:
	Project() {

	}

	~Project() {

	}
};

Screw::Application* Screw::CreateApplication()
{
	return new Project();
}