#include "eazystatswindow.hpp"

EazyStatsWindow::EazyStatsWindow(QWidget *parent, Qt::WindowFlags flags) 
    : QMainWindow(parent, flags) {
    setWindowTitle("EazyStats24");
    setMinimumSize(400, 400);
}

EazyStatsWindow::~EazyStatsWindow() {
}