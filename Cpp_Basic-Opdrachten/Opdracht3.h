#pragma once
#include <iostream>
#include <string>

void MainMenu();
 
class Person {
public:
	Person() ;
	virtual std::string getName() ;
	virtual void setName(std::string _name) ;
	virtual int getAge() ;
	virtual void setAge(int _age) ;
protected:
	std::string name;
	int age;
};

class Teacher : public Person {
public:
	Teacher() ;
	virtual std::string getName() ;
	virtual void setName(std::string _name) ;
	virtual int getAge() ;
	virtual void setAge(int _age) ;
	int getSalary() ;
	void setSalary(int _salary) ;
protected:
	std::string name;
	int age;
private:
	int salary;
};

class Student : public Person {
public:
	virtual std::string getName() ;
	virtual void setName(std::string _name) ;
	virtual int getAge() ;
	virtual void setAge(int _age) ;
	int getStudentNumber() ;
	void setStudentNumber(int _studentNumber) ;
protected:
	std::string name;
	int age;
private:
	int studentNumber;
};

class Opdracht3 {
public:
	Teacher t1;
	Student s1;

	void start() ;
private:
	void setInfo() ;
	void writeInfo() ;
	void deleteEntities() ;
};
