#ifndef VULKANWINDOW_H
#define VULKANWINDOW_H

#include <QVulkanWindow>
#include <QVulkanDeviceFunctions>

namespace Ui {
class VulkanWindow;
}

class VulkanRenderer : public QVulkanWindowRenderer
{
public:
    VulkanRenderer(QVulkanWindow *w);

    void initResources() override;
    // void initSwapChainResources() override;
    // void releaseSwapChainResources() override;
    // void releaseResources() override;

    void startNextFrame() override;

private:
    QVulkanWindow *m_window;
    QVulkanDeviceFunctions *m_devFuncs;
    float m_brightness = 0;
};

class VulkanWindow : public QVulkanWindow
{
public:
    QVulkanWindowRenderer *createRenderer() override;

protected: // input
    void keyPressEvent( QKeyEvent * );
    void mouseMoveEvent( QMouseEvent * );
};





#endif // VULKANWINDOW_H
