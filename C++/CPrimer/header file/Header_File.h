//头文件保护符 防止多重包含
#ifndef _HEADER_FILE_ 
#define _HEADER_FILE_

#include <iostream>
#include <string>

//class 声明
//外部变量的声明
//函数的声明
class  Student 
{
private:
    /* data */
public:
     Student (/* args */);
    ~ Student ();
};




//只能写声明  不能写定义
extern int ival;
// int ival = 10; 不能这样写，这样就变成了定义了 类的定义除外

//const 常量的定义  可以写
const std::string str= "Hello";

//一般头文件不要太大


#endif // !_HEADER_FILE_