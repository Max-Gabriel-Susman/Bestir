#pragma once

#include "Core.h"

namespace Bestir {
	class BESTIR_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}

