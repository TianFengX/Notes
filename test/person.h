#ifndef __PERSON_H__
#define __PERSON_H__

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person(const char *name, int age, char s);
	~Person();
private:
protected:
    int m_Age;
	string m_strName;
	char m_Sex;
public:
    void setName(const char * n);
	void setAge(int a);
    void printInfo();
};

#endif /* __PERSON_H__ */

