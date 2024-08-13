#include <QDebug>
#include <QScopedPointer>
#include <QSharedPointer>

#include "frameworkwidgets/windowtabwidget/windowtabwidget.hpp"

#include "eazystatswindow.hpp"

namespace framework {

EazyStatsWindow::EazyStatsWindow(QWidget *parent, Qt::WindowFlags flags) : QMainWindow(parent, flags) {
    setWindowTitle("EazyStats24");
    setMinimumSize(400, 400);

    auto *const TabWidget = new widgets::WindowTabWidget;

    setCentralWidget(TabWidget);
}

EazyStatsWindow::~EazyStatsWindow() {
}

}