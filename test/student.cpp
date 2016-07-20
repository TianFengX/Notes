#include "student.h"

Student::Student(const char *name
		, int age
		, char sex
		, int grade
		, int num
		, int c_score
		, int math_score
		, int chinese_score
		) : Person(name, age, sex)
		, m_Grade(grade),m_Number(num) 
		, m_CScore(c_score)
		, m_MathScore(math_score)
		, m_ChineseScore(chinese_score) {
			m_strPassword = "1234";
			m_Rank = 0;
}

void Student::printInfo() {
	cout << "Student name: " << m_strName;
	cout << "| age:" << m_Age;
	cout << "| sex:" << m_Sex;
	cout << "| NO.:" << m_Number;
	cout << "| grade:" << m_Grade;
	cout << "| c score:" << m_CScore;
	cout << "| match score:" <<m_MathScore;
	cout << "| chinese score:" << m_ChineseScore;
	cout << "| rank:" << m_Rank;
	cout << endl;
}
	