#include <iostream>
#include "../qt/vulkanwindow.h"
#include <QApplication>

namespace quantum_engine {

class Window {
    bool visible;
    QApplication qtApplication;
    std::string title;
    VulkanWindow qtWindow;
public:
    Window(unsigned short width, unsigned short height, int argc, char* argv[]);
    void setVisible(bool visible);
    void show();
    void resize(unsigned short width, unsigned short height);
    void setTitle(std::string title);
    void setMinimumSize(unsigned short width, unsigned short height);
    void setMaximumSize(unsigned short width, unsigned short height);
    std::string getTitle();
    void hide();
    bool isVisible();
};

}  // namespace quantum_engine