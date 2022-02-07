#include "teacher.hpp"

void Teacher::prepare_lesson() {
	std::cout << _name + " prepares lesson on subject: " + _subject + "\n";
}

void Teacher::work() {
	std::cout << _name + " reading scientific papers...\n";
}