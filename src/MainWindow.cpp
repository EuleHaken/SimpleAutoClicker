#include "MainWindow.hpp"
#include "ui_MainWindow.h"

namespace EuleHaken {

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

}  // namespace EuleHaken
