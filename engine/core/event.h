#ifndef EVENT_H
#define EVENT_H

#include <QKeyEvent>
#include <QDebug>

namespace quantum_engine :: Event { 
    namespace Input {
        void OnKeyPress( QKeyEvent * );
        void OnMouseMove( QMouseEvent * );
    };
}

#endif // EVENT_H