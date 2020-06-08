#include "string.h"
using namespace std;

int main() {

// string 有四种初始化方法
    string s1;          //调用string对象的默认构造函数
    string s2("hello"); //调用string对象的构造函数
    string s3(s2);      //
    string s4(10, 'a');

//不建议使用下边的方法
// 先调用了构造函数将s1进行初始化，又调用了赋值操作
    // string s1 = "Hello";

    cout << "第一种：" << s1 << endl;
    cout << "第二种：" << s2 << endl;
    cout << "第三种：" << s3 << endl;
    cout << "第四种：" << s4 << endl;

//如下代码 输出均是hello，但是hello是字符数组，其结尾有\0，而s2是string类型
    cout << s2 << endl;
    cout << "hello" << endl;

//下面代码  当我们输入 hello world时，只会将hello赋值给name(其见到空白字符就会停止) 如需要完整的打印hello world，则还需要定义一个string 来接收world
//cin读取前面非空白字符的字符 读取字符直到再次遇到空白字符
    string name;
    cout << "请输入名字：" << endl;
    cin >> name;
    cout << name << endl;

//如
    string name1, name2;
    cout << "请输入名字：" << endl;
    cin >> name1 >> name2;
    cout << name1 << ' ' << name2 << endl;

//完整的读取
    string name3;
    cout << "请输入你的名字：" << endl;
    getline(cin, name3);                //把完整的一行都读取出来，以换行符为结束字符
    cout << name << endl;

//常用的字符操作
    string str("hello");
    cout << "str中字符的个数为(字符串的大小)：" << str.size() << endl;
    //接收字符串大小不能用int来接收 而是要用string的size_type
    // int size = str.size();
    string::size_type size = str.size();
    cout << size << endl;

    string first("hello");
    string second("world\n");
    string str1 = first + second;
    cout << str1 << endl;

    // string ss = "hello" + ", "; C++中不可以这样使用，不可以都是字符串字面值

    return 0;
}