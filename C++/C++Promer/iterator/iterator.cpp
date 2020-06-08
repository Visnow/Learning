#include "iterator.h"

using namespace std;

int main() {

    vector<int> v(10, 8);
    vector<int>::iterator iter = v.begin(); //begin()操作返回一个迭代器
    //迭代器实际上就是指向第一个数据的指针
    *iter = 9;
    iter++; //指向第二个数据
    *iter += 10;    //第二个数据+10
    //使用下标的方式for循环 (有些容器是没有下标的，但是都有迭代器)
    for (vector<int>::size_type i = 0; i != v.size(); i++) {
        cout << v[i] << endl;
    }

    //迭代器的方式for循环
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
        // i 是个指针所以不能用下面的方式输出
        //cout << v[i] << endl;
        
        cout << "迭代器：" << *i << endl;
    }

    //当不通过迭代器来修改数据的时候，只是读数据，可以使用常迭代器，如上边for循环可以改为
    /*
        for (vector<int>::const_iterator i = v.begin(); i != v.end(); i++) {   
        cout << "迭代器：" << *i << endl;
    }
    */
    return 0;
}