#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "person.h"
using namespace std;

Person::Person(const char *name = "no name", int age = 1, char s = 'M') : m_strName(name), m_Age(age), m_Sex(s) {
}

Person::~Person() {
}

void Person::setName(const char *name) {
    m_strName = name;
}

void Person::setAge(int a) {
    m_Age = a;	
}

void Person::printInfo() {
    cout << "name=" << m_strName;
	cout << " m_Age=" << m_Age;
	cout <<" sex=" << m_Sex <<endl;
}

//class CPerson {
//public:
//	int m_Age;
//	int count;
//	CPerson() {
//		count=1;
//	}
//	void getCount() {
//		cout << "count = " << count <<endl;
//	}
//
//	CPerson operator ++() {
//		this->count ++;
//		CPerson person = *this;
//		return person;
//	}
//
//	CPerson operator ++(int) {//back ++
//		CPerson person = *this;
//		this->count ++;
//		return person;
//	}
//
//};