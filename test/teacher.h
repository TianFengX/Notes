#ifndef __TEACHER_H__
#define __TEACHER_H__
#include "person.h"

class Teacher : public Person {
public:
	Teacher(const char *name = "no name"
		, int age = 1
		, char sex = 'M'
		, int grade = 1
		, int num = 0
		, string password = ""
		);
	void printInfo();
private:
	string m_strPassword;
	int m_Number;
	int m_Grade;
};


#endif /* __TEACHER_H__ */