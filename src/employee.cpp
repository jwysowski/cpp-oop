#include <iostream>
#include "employee.hpp"

void Employee::set_age(int age) {
	_age = age;
}

void Employee::set_name(std::string name) {
	_name = name;
}

void Employee::set_company(std::string company) {
	_company = company;
}

int Employee::get_age() {
	return _age;
}

std::string Employee::get_name() {
	return _name;
}

std::string Employee::get_company() {
	return _company;
}

void Employee::say_hi() {
	std::cout << "Hi! I am " + _name + ". I am "
	+ std::to_string(_age) + ". I work at "
	+ _company + ".\n";
}

void Employee::ask_for_promotion() {
	if (_age > 30)
		std::cout << _name + " just got promoted!\n";
	else
		std::cout << _name + " too young for promotion ;(\n";
}

void Employee::work() {
	std::cout << _name + " doing his work...\n";
}