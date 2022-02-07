#include <iostream>
#include "employee.hpp"
#include "developer.hpp"
#include "teacher.hpp"

int main() {
	Teacher wysek("Wysek", "Geotronics", 23, "Physics");

	// employee.set_age(23);
	// employee.set_name("Wysek");
	// employee.set_company("Geotronics");

	wysek.say_hi();
	wysek.prepare_lesson();
	wysek.work();
	wysek.ask_for_promotion();

	Employee *e = &wysek;
	std::cout << "pointer check\n";
	e->work();

	return 0;
}
