#include "event.h"
#include "inputmap.cpp"

using namespace quantum_engine;

// Input Events

void Event::Input::OnKeyPress( QKeyEvent * event ) { // called whenever the vulkan window is focused and a key is pressed.
    qInfo() << "Keypress: " << event->key();

    // Call binded function
    quantum_engine::Input::runInputFunc( quantum_engine::Input::Config::InputFuncMap[event->key] );
}

void Event::Input::OnMouseMove( QMouseEvent * event ) { // called when the mouse moves

}