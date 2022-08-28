#include <Bestir.h>

class Sandbox : public Bestir::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Bestir::Application* Bestir::CreateApplication()
{
	return new Sandbox(); 
}