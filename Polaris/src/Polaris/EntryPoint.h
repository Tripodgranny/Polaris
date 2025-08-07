#pragma once

#ifdef POL_PLATFORM_WINDOWS

extern Polaris::Application* Polaris::CreateApplication();

int main(int argc, char** argv) {
	auto app = Polaris::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif

