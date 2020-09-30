#include "Opdracht3.h"


void Opdracht3::start() {
	Teacher t1 =  Teacher();
	Student s1 =  Student();

	setInfo();
	writeInfo();

	std::cout << "\npress enter to go back...\n";
	std::cin.ignore(INT_MAX, '\n');
	std::cin.get();
	system("CLS");
	MainMenu();
}

void Opdracht3::setInfo() {
	t1.setName(std::string("Edwin"));
	t1.setAge(30);
	t1.setSalary(3000000);
	s1.setName(std::string("Inger"));
	s1.setAge(21);
	s1.setStudentNumber(3037652);
}

void Opdracht3::writeInfo() {
	std::cout << t1.getName() << ", " << t1.getAge() << ", " << t1.getSalary() << "\n";
	std::cout << s1.getName() << ", " << s1.getAge() << ", " << s1.getStudentNumber() << "\n";
}

Person::Person() {

}

std::string Person::getName() {
	return name;
}

void Person::setName(std::string _name) {
	name = _name;
}

int Person::getAge() {
	return age;
}

void Person::setAge(int _age) {
	age = _age;
}


std::string Teacher::getName() {
	return name;
}

void Teacher::setName(std::string _name) {
	name = _name;
}

int Teacher::getAge() {
	return age;
}

void Teacher::setAge(int _age) {
	age = _age;
}

std::string Student::getName() {
	return name;
}

void Student::setName(std::string _name) {
	name = _name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int _age) {
	age = _age;
}

Teacher::Teacher() {

}

int Teacher::getSalary() {
	return salary;
}

void Teacher::setSalary(int _salary) {
	salary = _salary;
}


int Student::getStudentNumber() {
	return studentNumber;
}

void Student::setStudentNumber(int _studentNumber) {
	studentNumber = _studentNumber;
}