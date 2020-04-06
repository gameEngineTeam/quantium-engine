// #include <QKeyEvent>
// #include <QWidget>
#include <QDebug>

#include <curses.h>

namespace quantum_engine {
    namespace Event {
        // class keypress : public QWidget { 
        //     Q_OBJECT
        //     public:
        //     explicit keypress(QWidget * parent = 0) : QWidget(parent) {} 
        //     void keyPressEvent( QKeyEvent * event );
        // };

        class KeyPress {
            public:
                bool active = false;

                char key = getch();
                int keyValue = key;

                KeyPress( bool enable = false ) {
                    active = enable;

                    while( active ) { // only listen for keyboard input if active
                        switch (keyValue) {
                            default:
                                qInfo() << "Keypress";
                                break;
                        }

                        key = getch(); // get next input
                        keyValue = key;
                    }
                }
        };
    }
}
