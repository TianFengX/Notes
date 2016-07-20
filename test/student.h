#ifndef __STUDENT_H__
#define __STUDENT_H__
#include "person.h"

class Student : public Person {
public:
	Student(const char *name = "no name"
		, int age = 1
		, char sex = 'M'
		, int grade = 1
		, int num = 0
		, int c_score = 0
		, int math_score = 0
		, int chinese_score = 0
		);
	void printInfo();
private:
	string m_strPassword;
	int m_Number;
	int m_Grade;

	int m_CScore;
	int m_MathScore;
	int m_ChineseScore;
	int m_Rank;
};


#endif /* __STUDENT_H__ */