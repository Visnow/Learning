#include <iostream>

int main() {

//非const 引用：
    int number = 100;
    //引用在定义的时候必须对其进行初始化
    int &num = number;
    //引用不可以引用直接量，必须是变量
    //int &test = 10 ;

    std::cout << "number = " << number << std::endl;
    std::cout << "num = " << num << std::endl;

// const 引用：
    const int ival = 111;
    const int &refVal = ival;
    //非const引用不能初始化为一个const常量
    //int &ref = ival;  错误
    //const 引用可以初始化为一个直接量（常量）
    const int &a =21;
    int b = 50;
    const int &c = b + 20;

//const 引用可以初始化为不同类型的对象，而非const引用只可以引用同类型的对象
    const double &dou = ival;
    //double &dou2 = ival;  错误
    return 0;

}