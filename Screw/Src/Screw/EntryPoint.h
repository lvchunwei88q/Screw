#pragma once

#ifdef SR_PLATFORM_WINDOWS
extern Screw::Application* Screw::CreateApplication();

int main(int argc, char** argv) {
	//Project* project = new Project();
	auto app = Screw::CreateApplication();
	app->Run();
	delete app;
}
#else
#error Screw only support Windows!
#endif // SR_PLATFORM_WINDOWS
