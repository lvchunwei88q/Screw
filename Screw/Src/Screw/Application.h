#pragma once
#include "Core.h"

namespace Screw {
	class SCREW_APT Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}
