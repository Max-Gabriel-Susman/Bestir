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

void main() 
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}