#include "../engine_core.h"
#include <QSize>
namespace quantum_engine {

// QT Vulkan window wrapper
Window::Window(unsigned short width, unsigned short height, int argc, char* argv[]) {
    this->visible = false;
    this->setTitle("Quantum Application");
    this->qtWindow;
    this->qtApplication(argc, argv);
}

void Window::setMinimumSize(unsigned short width, unsigned short height) {
    this->qtWindow.setMinimumSize(QSize(width,height));
}

void Window::setMaximumSize(unsigned short width, unsigned short height) {
    this->qtWindow.setMaximumSize(QSize(width,height));
}

void Window::show() {
    this->setVisible(true);
}

void Window::setVisible(bool visible) {
    this->visible = visible;
    if (visible) this->qtWindow.show();
    else this->qtWindow.hide();
}

void Window::resize(unsigned short width, unsigned short height) {
    this->qtWindow.resize(width, height);
}

void Window::hide() {
    this->setVisible(false);
}

bool Window::isVisible() {
    return this->visible;
}

void Window::setTitle(std::string title) {
    this->title = title;
}
}  // namespace quantum_engine