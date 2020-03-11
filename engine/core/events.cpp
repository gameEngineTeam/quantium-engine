#include <QKeyEvent>
#include <QDebug>
#include <QWidget>

namespace quantum_engine {
    class eventlistener {
	private:
	    bool enabled = false;
	public:
	    class key_input : public QWidget {
		void keyPressEvent( QKeyEvent *key_event ) override {
		    if( key_event->key() == Qt::Key_Space ) {
			qInfo() << "Space yes";
		    }
		}
	    };
    };
}
