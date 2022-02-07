#pragma once

#include <iostream>
#include "employee.hpp"

class Developer:public Employee {
	std::string _favourite_prg_lang;

	public:
	Developer(std::string name, std::string company, int age, std::string lang)
	:Employee(name, company, age) {
		_favourite_prg_lang = lang;
	}

	void work();
};