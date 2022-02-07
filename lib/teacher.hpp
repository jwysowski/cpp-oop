#pragma once

#include <iostream>
#include "employee.hpp"

class Teacher:public Employee {
	std::string _subject;

	public:
	Teacher(std::string name, std::string company, int age, std::string subject)
	:Employee(name, company, age) {
		_subject = subject;
	}

	void prepare_lesson();
	void work();
};