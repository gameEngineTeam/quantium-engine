#include <QApplication>
#include <QDebug>
#include <QVulkanWindow>
#include "qt/vulkanwindow.h"

class Engine {
    private:
	unsigned int width = 1600;
	unsigned int height = 900;

    public:
	Engine( unsigned int windowWidth, unsigned int windowHeight ) {
	    width = windowWidth;
	    height = windowHeight;

	    qInfo() << "Engine Object Created";
	}

	int exitcode = 0;	

	int InitalizeWindow( int argc, char * argv[]) {
	    QApplication qtApp(argc, argv); // give it the args
	    qInfo() << "Initializing Window";
	    
	    QVulkanInstance vulkanInstance;
	    vulkanInstance.setLayers(QByteArrayList() << "VK_LAYER_LUNARG_standard_validation");

	    if (!vulkanInstance.create())
		qFatal("Failed to create Vulkan instance: %d", vulkanInstance.errorCode());
	    
	    VulkanWindow vulkanWindow; 
	    vulkanWindow.setVulkanInstance( &vulkanInstance );

	    vulkanWindow.resize( width, height );
	    vulkanWindow.show();

	    exitcode = qtApp.exec();
	    return exitcode;
	}
};

int main(int argc, char *argv[]) {
    Engine game(500,500);
    game.InitalizeWindow( argc, argv ); // initalize the window
    return game.exitcode;
}
