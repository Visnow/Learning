#include <iostream>
using namespace std;
template <typename T1, typename T2> void swap(T1 &a, T2 &b){

	T1 temp;
	temp = a;
	a = b;
	b = temp;

}

int main(){
	int x = 10;
	int y = 20;
	float f = 10.22;
	float q = 22.22;
	char* s = "你好！";
	char* t = "溺水呀！";
	swap(x, y);
	swap(f, q);
	swap(s, t);
	cout << x <<", "<< y <<endl; 
	cout << f <<", "<< q <<endl; 
	cout << s <<", "<< t <<endl; 
	return 0;
}
