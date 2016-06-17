#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QDialog>

#include "Interface/IViewComponent.h"

namespace Ui {
    class Dialog;
}

class LoginMediator;

class Dialog : public QDialog, public IViewComponent {
    Q_OBJECT
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();
    void update(IUpdateData *updateData);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Dialog *ui;
    LoginMediator *loginMediator;

private slots:
    void on_loginButton_clicked();
};

#endif // LOGINFORM_H
