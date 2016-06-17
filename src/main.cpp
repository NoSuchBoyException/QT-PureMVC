#include <QApplication>
#include "ApplicationFacade.h"
#include "LoginForm.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    ApplicationFacade *af = new ApplicationFacade();
    af->startUp();

    Dialog *dlg = new Dialog();
    dlg->show();

    return app.exec();
}
