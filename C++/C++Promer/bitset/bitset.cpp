#include "bitset.h"

using namespace std;

int main(int argc, const char** argv) 
{
    bitset<32> a;
    cout << a << endl;

    bitset<32> b(0xffff);
    cout << b << endl;

    string str = "111010110110101010010001101";
    bitset<32> c(str, 7, 5);
    cout << c << endl;

    bool is_set = a.any();  //至少有一个1
    bool is_no_set = a.none(); //一个1都没有
    /**
     * a.count() a中有多少1
     * a.size() a有多少位
    */

    return 0;
}