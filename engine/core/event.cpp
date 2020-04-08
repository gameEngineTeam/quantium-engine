#include "event.h"

using namespace quantum_engine::Event;

// KeyPressListener

void Input::OnKeyPress( QKeyEvent * event ) {
    qInfo() << "Keypress: " << event->key();
}

void Input::OnMouseMove( QMouseEvent * event ) {

}