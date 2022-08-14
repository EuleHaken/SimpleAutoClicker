#pragma once

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

namespace EuleHaken {

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow* ui;
};

}  // namespace EuleHaken
