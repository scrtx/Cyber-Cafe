#ifndef GUESTWINDOW_H
#define GUESTWINDOW_H

#include <QMainWindow>

namespace Ui {
class GuestWindow;
}

class GuestWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GuestWindow(QWidget *parent = nullptr);
    ~GuestWindow();

private:
    Ui::GuestWindow *ui;
};

#endif // GUESTWINDOW_H
