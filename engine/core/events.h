#include <QKeyEvent>
#include <QWidget>
#include <QDebug>

namespace quantum_engine {
    namespace Event {
        class KeyPress : public QWidget { 
            //Q_OBJECT
            public:
                KeyPress(QWidget * parent = 0);
                void enableFocus();
            protected:
                void keyPressEvent( QKeyEvent * );
        };
    }
}
