#pragma once

#include "abstract_employee.hpp"

class Employee:Abstract_Employee {
	protected:
	std::string _name;
	std::string _company;
	int _age;

	public:
	Employee(std::string name, std::string company, int age) {
		_name = name;
		_company = company;
		_age = age;
	}

	void set_age(int age);
	void set_name(std::string name);
	void set_company(std::string company);
	int get_age();
	std::string get_name();
	std::string get_company();
	void say_hi();
	void ask_for_promotion();
	virtual void work();

	~Employee() {
		std::cout << _name + " is gone.\n";
	}
};