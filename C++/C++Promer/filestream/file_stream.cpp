#include "file_stream.h"

using namespace std;

int main(){

    ofstream outfile("1.txt");
    outfile << "你想干啥！" << endl;
    outfile.close();

    ifstream infile("1.txt");
    /**
     * 上边语句也可以写成如下形式
     * ifstream infile;
     * infile.open("1.txt");
     * if(!infile) {
     *    cerr << "open file 1.txt error !" << endl;
     *    return -1;
     * }
    */
    string str;
    while(infile >> str) {  // 流的状态是eof结束 再次使用需要使用infile.clear()恢复流状态 
        cout << str << endl;
    }
    infile.close();
    infile.clear(); // 流的状态是eof结束 再次使用需要使用infile.clear()恢复流状态 




    return 0;
}