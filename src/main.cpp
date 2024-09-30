#include "framework/application.h"

int main(int argc, char* argv[])
{
    Application app(argc, argv);

    app.mainWindow()->show();

    return app.run();
}
