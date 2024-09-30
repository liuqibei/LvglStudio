#include "application.h"

#include <QTranslator>

#include "editor/mainwindow.h"

Application::Application(int& argc, char** argv)
    : QApplication(argc, argv)
    , mainWindow_(new MainWindow(nullptr))
{
}

Application::~Application()
{
    delete mainWindow_;
}

int Application::run()
{
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();

    for (const QString& locale : uiLanguages) {
        const QString baseName = "LvglStudio_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            installTranslator(&translator);
            break;
        }
    }

    return QApplication::exec();
}

void Application::setMainWindow(QMainWindow* mainWindow)
{
    mainWindow_ = mainWindow;
}

QMainWindow* Application::mainWindow() const
{
    return mainWindow_;
}
