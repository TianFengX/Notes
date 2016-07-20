#include <iostream>
#include<stdio.h>
#include<windows.h>
#include <WinBase.h>
#include <ctime>
using namespace std;

#define MY_X1 860
#define MY_X2 1347
#define MY_Y1 183
#define MY_Y2 670
#define Alpha 10
#define MAX_COUNT_NUMBER 235
#define STANDAR_COUNT 40
#define Delta(INDEX) ((MY_Y2-MY_Y1-Alpha*(INDEX -1))/(INDEX*2))

struct myPoint {
	int x;
	int y;
} ;
myPoint clickPoint(int j1,int i1, int index) {
	myPoint p1;
	p1.x = Delta(index)*(2*j1 + 1) + Alpha * (j1 - 0) + MY_X1;
	p1.y = Delta(index)*(2*i1 + 1) + Alpha * (i1 - 0) + MY_Y1;
	return p1;
}
int main() {
	DWORD dwStart = GetTickCount();
	//POINT my_point;
	//while(1){
	//   GetCursorPos(&my_point); //to get mouns
	//   cout << "point at (" << my_point.x << ", " << my_point.y <<")\n";
	////mouse_event (MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, my_point.x, my_point.y, 0, 0 );
	//}
    myPoint p[MAX_COUNT_NUMBER][MAX_COUNT_NUMBER];
	int x = 0;
	int y = 0;
	int count = 2;
	int i = 0;
	int j = 0;
	char str_time[19]; 

    for(; count < STANDAR_COUNT; count ++)
    {
        //GetCursorPos(&p); //to get mouns
		cout<< "Index = " << count << endl;

		//initial point array
		for(j = 0; j < count; j++) {
			for(i = 0; i < count; i++) {
				p[j][i] = clickPoint(j, i, count);
				cout << "point at (" << p[j][i].x << ", " << p[j][i].y <<")\n";
				SetCursorPos(p[j][i].x, p[j][i].y);
				//Sleep(3000);
				mouse_event (MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, p[j][i].x, p[j][i].y, 0, 0 );
				DWORD dwUsed = GetTickCount() - dwStart;
				if(dwUsed > 50*1000){
					return 0;
				}
			}
		}
    }
	system("pause");
    return 0;
}

