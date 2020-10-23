/*************************************************************************
	> File Name: parent_childv1.h
	> Author: 
	> Mail: 
	> Created Time: 2020年10月23日 星期五 13时05分19秒
 ************************************************************************/

#ifndef _PARENT_CHILDV1_H
#define _PARENT_CHILDV1_H
#include <boost/core/noncopyable.hpp>
class chaid;
class parent : boost::noncopyable
{
private:
    chaid* my_child;
};

class chaid: boost::noncopyable
{
private:
    parent* my_parent;
};
#endif
