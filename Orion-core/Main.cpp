#include "src\graphics\Window.h"

int main()
{
	using namespace orion;
	using namespace graphics;

	Window window("Orion", 960, 540);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	while (!window.closed())
	{
		std::cout << window.getWidth() << ", " << window.getHeight() << std::endl;
		window.clear();

		glBegin(GL_QUADS);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(-0.5f,  0.5f);
		glVertex2f( 0.5f,  0.5f);
		glVertex2f( 0.5f, -0.5f);
		glEnd();

		window.update();
	}

	return 0;
}