#pragma once

#ifdef POL_PLATFORM_WINDOWS

extern Polaris::Application* Polaris::CreateApplication();

int main(int argc, char** argv) {
	Polaris::Log::Init();
	POLARIS_CORE_WARN("Initialized Log!");
	POLARIS_APP_INFO("Initialized Log!");
	auto app = Polaris::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#endif

