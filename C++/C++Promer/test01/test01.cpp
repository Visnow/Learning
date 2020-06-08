#include "test01.h"

using namespace std;

int main() {

//每次从输入中读取一行信息并输出
    string line;
    while(getline(cin, line)){
        cout << line << endl;
    }

    return 0;
}