#pragma once

#include <QApplication>
#include <QMainWindow>

class Application : public QApplication {
    Q_OBJECT

    Q_PROPERTY(QMainWindow* mainWindow_ READ mainWindow WRITE setMainWindow)
public:
    Application(int& argc, char** argv);
    ~Application() override;

    int run();

    void setMainWindow(QMainWindow* mainWindow);

    QMainWindow* mainWindow() const;

private:
    QMainWindow* mainWindow_;
};
