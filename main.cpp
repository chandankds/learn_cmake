#include <iostream>
#include <add.h>
#include <GLFW/glfw3.h>

int add(int a, int b);

int main(){
	printf("Hello hell!!! \n");
	int res = add(234,6);
	std::cout << res  << std::endl;

	GLFWwindow* window;
	if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }
	window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }
	while( !glfwWindowShouldClose(window) )
    {

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();
	return 0;
}
