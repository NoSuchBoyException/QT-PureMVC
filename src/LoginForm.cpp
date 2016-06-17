#include "LoginForm.h"
#include "ui_login_dialog.h"
#include "Patterns/Facade.h"
#include "LoginMediator.h"
#include "LoginInfo.h"
#include "LoginResult.h"

#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    Facade *facade = Facade::getInstance();
    loginMediator = (LoginMediator *)facade->retrieveMediator("LoginMediator");
    loginMediator->registerViewComponent(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::update(IUpdateData *updateData)
{
    if (updateData->getName() == "LoginResult")
    {
        LoginResult *loginResult = (LoginResult *)updateData;

        if (loginResult->result)
        {
            qDebug() << "Success";
        }
        else
        {
            qDebug() << "Fail";
        }
    }
}

void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog::on_loginButton_clicked()
{
    LoginInfo *loginInfo = new LoginInfo();

    loginInfo->name = "AndroiderNWeber";
    loginInfo->password = "123456";

    loginMediator->doLogin(loginInfo);
}
