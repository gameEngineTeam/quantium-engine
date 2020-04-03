#include <QKeyEvent>
#include <QDebug>
#include <QWidget>

namespace quantum_engine {
    namespace event {
	class keypress : public QWidget {
	    Q_OBJECT
	    public:
		explicit keypress(QWidget * par = 0) : QWidget(par) {}
	    protected:
		void keyPressEvent( QKeyEvent * keyEvent ) override {
			qInfo() << "Keypress";
		}
	};
    }
}
