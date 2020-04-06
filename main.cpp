#include <QApplication>
#include <QDebug>
#include <QVulkanWindow>
#include "qt/vulkanwindow.h"

#include "engine/core/events.h"

class Engine {
    private:
	unsigned int width = 1600;
	unsigned int height = 900;
	bool isRunning = false;

    public:
	int exitcode = 0;

	Engine( unsigned int windowWidth, unsigned int windowHeight, bool runOnStart ) {
	    width = windowWidth;
	    height = windowHeight;

	    isRunning = runOnStart;
	    qInfo() << "Engine Instance Created";
	}

	~ Engine() {
	    qInfo() << "Engine Instance Deinitialization";
	}	

	int Initalize( int argc, char * argv[] ) {
	    QApplication qtApp(argc, argv); 
	    qInfo() << "Initializing";

	    QVulkanInstance vulkanInstance;
	    vulkanInstance.setLayers(QByteArrayList() << "VK_LAYER_LUNARG_standard_validation");

	    if ( !vulkanInstance.create() )
		qFatal("Failed to create Vulkan instance: %d", vulkanInstance.errorCode());

	    VulkanWindow vulkanWindow; 
	    vulkanWindow.setVulkanInstance( &vulkanInstance );

	    vulkanWindow.resize( width, height );
	    vulkanWindow.show();

        // Keypress-event object
        quantum_engine::Event::KeyPress * keypressHandler = new quantum_engine::Event::KeyPress();
        keypressHandler->enableFocus();

	    exitcode = qtApp.exec();
	    return exitcode;
	}
};

int main(int argc, char *argv[]) {
    Engine game( 640, 480, false ); // Holy Resolution
    game.Initalize( argc, argv ); // initalize the window

    return game.exitcode;
}
