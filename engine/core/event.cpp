#include "event.h"

using namespace quantum_engine::Event;

// Input Events

void Input::OnKeyPress( QKeyEvent * event ) { // called whenever the vulkan window is focused and a key is pressed.
    qInfo() << "Keypress: " << event->key();

    // Call binded function
}

void Input::OnMouseMove( QMouseEvent * event ) { // called when the mouse moves

}