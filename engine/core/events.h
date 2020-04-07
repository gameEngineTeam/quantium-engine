#include <QKeyEvent>
#include <QWidget>
#include <QDebug>

namespace quantum_engine {
    namespace Event {
        class KeyPress : public QWidget { 
            // Q_OBJECT
            public:
                KeyPress(QWidget * parent = 0) : QWidget( parent ) {
                    setFocusPolicy( Qt::StrongFocus );
                    setEnabled( true );
                }
                void enableFocus();
            protected:
                void keyPressEvent( QKeyEvent * );
        };
    }
}
