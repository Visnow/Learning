#include "vector.h"

using namespace std;
int main() {

    //vector 定义
    vector<int> ivec;
    vector<double> dvec;
    vector<string> svec;
    vector<Student> stu;
    vector<int> c(ivec);

    vector<int> a;
    vector<int> b(10, 2);
    vector<int> d(10);  //默认初始化为0  也就是10个0
    vector<string> e(10);   //默认初始化为空串 也就是10个空串
    a.push_back(1);     //向int 类型的vector a中添加元素
    a.push_back(2);
    a.push_back(3);
    cout << a.size() << endl;
    cout << b.size() << endl;

    //下标操作
    for (vector<int>::size_type index = 0; index != a.size(); index++) {
        cout << a[index] << endl;
    }
        for (vector<int>::size_type index = 0; index != b.size(); index++) {
        cout << b[index] << endl;
    }

    //vector的下表操作，不能用来添加元素，如
    // vector<int> f;
    // f[0] = 1;    //创建vector f的时候，并没有初始化元素，所以没办法操作下标

    //可以用如下方法
    vector<int> g;
    int k = 0;
    
    for (vector<int>::size_type i = 0; i != g.size(); i++) {
        cin >> k;
        g.push_back(k);
    }

    return 0;
}