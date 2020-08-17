#ifndef TOKENWINDOW_H
#define TOKENWINDOW_H

#include <QMainWindow>

namespace Ui {
class TokenWindow;
}

class TokenWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TokenWindow(QWidget *parent = nullptr);
    ~TokenWindow();

private:
    Ui::TokenWindow *ui;
};

#endif // TOKENWINDOW_H
