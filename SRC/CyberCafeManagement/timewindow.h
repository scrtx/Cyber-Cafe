#ifndef TIMEWINDOW_H
#define TIMEWINDOW_H

#include <QMainWindow>

namespace Ui {
class TimeWindow;
}

class TimeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TimeWindow(QWidget *parent = nullptr);
    ~TimeWindow();

private:
    Ui::TimeWindow *ui;
};

#endif // TIMEWINDOW_H
