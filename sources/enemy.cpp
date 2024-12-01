#include "enemy.h"
#include <QPushButton>

enemy::enemy(QWidget *parent) : QPushButton(parent), dx(0), dy(-5), currentDirection(UP) {
    // تنظیم مکان و اندازه اولیه
    setGeometry(35, 280, 30, 30);
    setStyleSheet("background-color: red; border-radius: 10px;");

    // ایجاد تایمر برای حرکت
    movementTimer = new QTimer(this);
    connect(movementTimer, &QTimer::timeout, this, &enemy::moveEnemy);

    // شروع تایمر (هر 50 میلی‌ثانیه یک بار)
    movementTimer->start(50);
}

void enemy::moveEnemy() {
    // دریافت موقعیت فعلی
    int x = geometry().x();
    int y = geometry().y();

    // محاسبه موقعیت جدید
    x += dx;
    y += dy;

    switch (currentDirection) {
    case UP:
        if (y <= 33) { // اگر به بالای مسیر رسید
            currentDirection = RIGHT; // تغییر جهت به راست
            dx = 5; // حرکت افقی به راست
            dy = 0;
        }
        break;

    case RIGHT:
        if (x >= 570) { // اگر به انتهای راست رسید
            currentDirection = DOWN; // تغییر جهت به پایین
            dx = 0;
            dy = 5; // حرکت عمودی به پایین
        }
        break;

    case DOWN:
        if (y >= 300) { // اگر به انتهای پایین رسید
            currentDirection = HIDDEN; // تغییر به حالت مخفی
            hide(); // مخفی کردن ویجت
            movementTimer->stop(); // متوقف کردن تایمر
        }
        break;

    case HIDDEN:
        return; // اگر مخفی است، دیگر حرکتی انجام ندهد
    }

    // به‌روزرسانی موقعیت
    setGeometry(x, y, width(), height());
}

