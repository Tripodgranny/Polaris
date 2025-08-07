#include <Polaris.h>

class Sandbox : public Polaris::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Polaris::Application* Polaris::CreateApplication() {
	return new Sandbox();
}