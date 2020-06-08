#include <iostream>

int main(){
    //定义的时候必须进行初始化
    const int bufSize = 512;
    const std::string Hi = "Hi!";
    for (int index = 0 ; index != bufSize; ++index){
        std::cout << index << std::endl;
    }

    return 0;
}