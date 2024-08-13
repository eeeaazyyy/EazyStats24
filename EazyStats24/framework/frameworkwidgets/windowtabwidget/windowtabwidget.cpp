#include <QDebug>

#include "windowtabwidget.hpp"

namespace framework { namespace widgets {

WindowTabWidget::WindowTabWidget(QWidget *parent) : QTabWidget(parent) {
}

WindowTabWidget::~WindowTabWidget() {
    qInfo() << "WindowTabWidget::~WindowTabWidget()";
}

}}

