#include <QApplication>
#include <iostream>

#include "framework/eazystatswindow.hpp"

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);

    EazyStatsWindow window;
    window.show();

	return app.exec();
}
