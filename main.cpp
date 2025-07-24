#include <QApplication>
#include "loginwindow.h"
#include "bank_system.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // ایجاد یک ادمین پیش‌فرض
    users.push_back(new Admin("احسان", "مهدوی", "1234567890", 40, "admin", "admin"));

    // ---------------------- مشتری اول: علی ----------------------
    Customer* c1 = new Customer("علی", "رضایی", "1111111111", 25, "ali", "1234");

    BankAccount* aliAcc1 = new SepordeAccount("1234123412341234", "IR123", "AC123", "123", 100000000, "07/27", "1111", "2222");

    c1->addAccount(aliAcc1);
    users.push_back(c1);

    // ---------------------- مشتری دوم: مینا ----------------------
    Customer* c2 = new Customer("مینا", "محمدی", "2222222222", 30, "mina", "1234");

    BankAccount* minaAcc1 = new SepordeAccount("5555444433332222", "IR567", "AC567", "456", 1200000, "08/27", "9999", "8888");

    c2->addAccount(minaAcc1);
    users.push_back(c2);

    // ---------------------- اجرای فرم ورود ----------------------
    LoginWindow w;
    w.show();

    return app.exec();
}
