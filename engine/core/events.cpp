#include "events.h"

using namespace quantum_engine::Event;


// Keypress

void KeyPress::enableFocus() {
    qInfo() << "Keyboard focus";
	this->setFocus();

	qInfo() << "Focus widget: " << focusWidget();
	qInfo() << "this: " << this;
}

void KeyPress::keyPressEvent( QKeyEvent * event ) {
	qInfo() << "Keypress: " << event->key();
}