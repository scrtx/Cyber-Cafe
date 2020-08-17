#ifndef SERVICEWINDOW_H
#define SERVICEWINDOW_H

#include <QMainWindow>

namespace Ui {
class ServiceWindow;
}

class ServiceWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ServiceWindow(QWidget *parent = nullptr);
    ~ServiceWindow();

private:
    Ui::ServiceWindow *ui;
};

#endif // SERVICEWINDOW_H
