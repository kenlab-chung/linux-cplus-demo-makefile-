/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年10月23日 星期五 11时44分35秒
 ************************************************************************/
#include<boost/thread/thread.hpp>
#include<iostream>
#include<iostream>
#include "things.h"
#include "lib/lib.h"
using namespace std;
volatile bool isRuning = true;

void func1()
{
    static int cnt1 = 0;
    while(isRuning)
    {
        cout <<"func1:"<<cnt1<<endl;
        sleep(1);
    }
}

void func2()
{
    static int cnt2 = 0;
    while(isRuning)
    {
        cout <<"func2:"<<cnt2<<endl;
        sleep(1);
    }
}

int main()
{
    boost::thread thread1(&func1);
    boost::thread thread2(&func2);

    system("read");
    isRuning = false;
    thread1.join();
    thread2.join();
    cout<<"exit"<<endl;
    things a;
    string nm="book1";
    int result = a.CompareTo(nm); //构造函数隐式转换
    lib b;
    getchar();
    return 0;
}
