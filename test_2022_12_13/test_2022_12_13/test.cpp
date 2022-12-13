#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class Base
{
	
public:
	static int a;
};
int Base::a = 10;
int main()
{
	cout << Base::a << endl;
	return 0;
}