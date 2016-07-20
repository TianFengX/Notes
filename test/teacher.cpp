#include "teacher.h"

Teacher::Teacher(const char *name
		, int age
		, char sex
		, int grade
		, int num
		, string password
		) : Person(name, age, sex)
		, m_Grade(grade),m_Number(num) 
{
	m_strPassword = "1234";
}
void Teacher::printInfo() {
	cout << "Teacher name: " << m_strName;
	cout << "| age:" << m_Age;
	cout << "| sex:" << m_Sex;
	cout << "| NO.:" << m_Number;
	cout << "| grade:" << m_Grade;
	cout << endl;
}