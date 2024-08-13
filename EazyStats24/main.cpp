#include <QApplication>
#include <iostream>

#include "framework/eazystatswindow.hpp"

using namespace framework;

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);

    EazyStatsWindow window;
    window.show();

	return app.exec();
}
