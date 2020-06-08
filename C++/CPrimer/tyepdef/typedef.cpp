#include <iostream>

int main() {

    //typedef 是用来给现有的数据类型定义同义词的

    typedef int scord;
    typedef int num;
    scord sc = 100;
    num number = 1;

    //可以把复杂的类型隐藏起来
    //简化复杂类型的定义
    //便于理解
    typedef int KeyVal;
    typedef int KeyType;
    typedef struct
    {
        KeyType keyType;
        KeyVal keyVal;
    }DataType;

    return 0;
}