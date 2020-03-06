#include <iostream>

namespace quantum_engine {

class Window {
public:
    Window();
    void show();
    void resize(unsigned short width, unsigned short height);
    void setTitle(std::string title);
    void hide();
    bool isVisible();
};

}  // namespace quantum_engine