#ifndef __DATA_TIME_H__
#define __DATA_TIME_H__
class Date {
public:
	Date(int y = 0, int m = 0, int d = 0);
	void showDate();
protected:
	int m_Year;
	int m_Month;
	int m_Date;
};

class Time {
public:
	Time(int h = 0, int m = 0, int s = 0);
	void showTime();
protected:
	int m_Hours;
	int m_Munite;
	int m_Second;
};

class DateTime : public Date, public Time {
public:
	DateTime(int y = 0, int mon = 0, int d = 0, int h = 0, int m = 0, int s = 0);
	void showDateTime();
};
#endif /* __DATA_TIME_H__ */