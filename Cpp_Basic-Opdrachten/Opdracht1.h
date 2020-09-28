#pragma once
#include <list>
#include <string>

class Opdracht1
{
};

class Person {
public:
	std::string GetName() {}
protected:
	std::string name;
};

class Teacher : public Person {
public:
	void AddModule() {}

private:
	std::list<Module> modules;
};

class Student : public Person {
public:
	int GetStudentNumber() {}
private:
	int studentNumber;
	std::list<Group> groups;
};

class Group {
public:
	void AddModule() {}
	std::list<Module> GetModules() {}
private:
	std::list<Module> modules;
	std::list<Student> students;
};

class Module {
public:
	Module(Teacher teacher) {}
	void AddLesson() {};

private:
	std::string moduleCode;
	Teacher teacher;
	std::list<Student> students;
	std::list<Group> groups;
	std::list<Lesson> Lessons;
};

class Lesson {
public:
	Lesson(std::list<Group> groups,
			std::string nameTeacher,
			TimeSlot timeslot,
			std::string Location) {}
private:
	std::list<Group> groups;
	std::string nameTeacher;
	TimeSlot timeslot;
	std::string Location;
};

struct TimeSlot {
	int day, month, year, hour, minute, duration;
};