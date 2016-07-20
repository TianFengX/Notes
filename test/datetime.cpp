#include <iostream>
#include "datetime.h"
using namespace std;

Date::Date(int y, int m, int d) : m_Year(y), m_Month(m), m_Date(d) {

}
void Date::showDate() {
	cout << m_Year << "-"<<m_Month<<"-"<<m_Date;
}

Time::Time(int h, int m, int s) : m_Hours(h), m_Munite(m),m_Second(s) {
	 
}
void Time::showTime(){
	cout << m_Hours <<":" << m_Munite <<":"<<m_Second;
}

DateTime::DateTime(int y, int mon, int d, int h, int m, int s) : Date(y, mon, d), Time(h, m, s) {

}

void DateTime::showDateTime() {
	showDate();
	cout << " ";
	showTime();
	cout << endl;
}

