#pragma once

#include "Core.h"

namespace Polaris {
	class POLARIS_API Application {
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// Defined By Client...
	Application* CreateApplication();
}

