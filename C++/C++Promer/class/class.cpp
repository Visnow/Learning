#include <iostream>
#include <string>

struct Student1
{
    int num;
    std::string name;
    void getNum();
};

// struct 与 class区别
// struct 默认的成员类型时 public，而 class 的默认的成员类型是 private

class Student{
    //类成员:数据成员、成员函数
    //成员分为私有的和公有的
private:
    //私有的数据成员，在这里不可以进行初始化，如果想要初始化，必须要在构造函数中进行初始化
    int num;
    std::string name/* = "张三"; 错误 */;

public:
    void getNum();

};

int main() {

    Student stu;
    Student1 stu1;

    return 0;
}