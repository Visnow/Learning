#include <iostream>

//定义常量  当常量较多时 可以定义成枚举
// const int input = 0;
// const int output = 1;
// const int append = 2;
enum open_modes {
    input,      // 0
    output,     // 1
    append      // 2
};

int main() {

    open_modes op;
    //op只能从open_modes中取
    op = input;
    std::cout << op << std::endl;
    op = output;
    std::cout << op << std::endl;
    op = append;
    std::cout << op << std::endl;

    return 0;
}