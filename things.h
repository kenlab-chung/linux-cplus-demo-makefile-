/*************************************************************************
	> File Name: things.h
	> Author: 
	> Mail: 
	> Created Time: 2020年10月23日 星期五 12时36分16秒
 ************************************************************************/

#ifndef _THINGS_H
#define _THINGS_H
#include<string>
using namespace std;

class things{
public:
    /*
    explicit things(const string &name = ""): //加explicit后，表示防止构造函数定义的隐式转换.
    m_name(name),height(0),weight(10){}
     */
    things(const string &name = ""): 
    m_name(name),height(0),weight(10){}
    int CompareTo(const things & other);
    string m_name;
    int height;
    int weight;
};
#endif
