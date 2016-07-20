//#include <iostream>
//#include <string.h>
//#include <stdio.h>
//#include "template_class.h"
//
//using namespace std;
//
//template <class T>
//MyArray<T>::MyArray() : data(NULL), max_ele_count(5), count(0) {
//	data = new T[max_ele_count];
//	if(data == NULL) {
//		cout << "malloc FAIL" << endl;
//    }
//}
//
//template <class T>
//MyArray<T>::~MyArray() {
//	if(data) {
//		delete [] data;
//		data = NULL;
//	}
//}
//
//template <class T>
//void MyArray<T>::add(T Value) {
//    if(count >= max_ele_count) {
//        T *newData = new T[max_ele_count + 5];
//        int i = 0;
//        for(i=0; i < count;i++) {
//            newData[i] = data[i];
//        }
//        max_ele_count += 5;
//        delete data;
//        data = newData;
//    }
//    data[count] = Value;
//    count ++;
//}
//
//template <class T>
//bool MyArray<T>::del(int index) {
//    if((index < 0) || (index >= count))
//        return false;
//    int i;
//    for(i=index; i< count-1; i++) {
//        data[i] = data[i+1];
//    }
//    count--;
//    return true;
//}
//
//template <class T>
//int MyArray<T>::getCount() {
//    return count;
//}
//
//template <class T>
//T MyArray<T>::getValue(int index) {
//    if((index < 0) || (index >= count)) {
//        cout << "get value error!" << endl; 
//        return -1;
//    }
//    return data[index];
//}
