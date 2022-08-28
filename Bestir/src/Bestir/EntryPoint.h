#pragma once

#ifdef BR_PLATFORM_WINDOWS

extern Bestir::Application* Bestir::CreateApplication();

int main(int argc, char** argv)
{
	printf("Bestir Engine \n");
	auto app = Bestir::CreateApplication();
	app->Run();
	delete app;
}

#endif