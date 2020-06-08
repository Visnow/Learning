#include "string.h"

using namespace std;

int main() {

    //C++中string类型不是C语言中的字符数组，但是还是可以像操作字符数组那样来操作string类型
    string s1("hello");
    for (string::size_type i = 0; i < s1.size(); i++) {
        cout << s1[i] << endl;
    }

    //下表操作用做左值
    for (string::size_type x = 0; x < s1.size(); x += 2) {
        s1[x] = '*';
    }
    cout << s1 << endl;

    //对string中的字符进行处理
    string s("Hello World !!!");
    string::size_type punct_cnt = 0;
    for (string::size_type index = 0; index != s.size(); index++) {
        if (ispunct(s[index])) {
            punct_cnt ++;
            cout << s[index] << " is a punct" << endl;
        }
    }
    cout << "字符串s中共有" << punct_cnt << "个标点符号" << endl;
/*
    isalnum(s[index])   //检查是不是字母或数字
    isalpha(s[index])   //检查是不是字母
    iscntrl(s[index])   //检查是不是控制字符
    isdigit(s[index])   //检查是不是数字
    islower(s[index])   //检查是不是小写字母
    ispunct(s[index])   //检查是不是标点符号
    isspace(s[index])   //检查是不是空格
    isupper(s[index])   //检查是不是大写字母
    isxdigit(s[index])  //检查是不是十六进制数
    tolower(s[index])   //变成小写
    toupper(s[index])   //变成大写
*/

    return 0;
}