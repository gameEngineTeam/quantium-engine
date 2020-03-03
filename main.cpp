#include <QApplication>
#include <QDebug>
#include <QVulkanWindow>
#include "qt/vulkanwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    qInfo() << "Game Engine Init";
    // w.show();


    QVulkanInstance inst;
    inst.setLayers(QByteArrayList() << "VK_LAYER_LUNARG_standard_validation");


    if (!inst.create())
        qFatal("Failed to create Vulkan instance: %d", inst.errorCode());

    VulkanWindow w;
    w.setVulkanInstance(&inst);

    w.resize(1024, 768);
    w.show();
    return a.exec();
}
