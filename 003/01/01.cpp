// 01.cpp: 定义应用程序的入口点。
//

#include "01.h"

using namespace std;
class test
{
public:
	test()
	{
		cout << "test()" << endl;
	}
	test(int i)
	{
		cout << "test(i)" << i << endl;
	}
	virtual ~test()
	{
		cout << "~test()" << endl;
	}
};
struct  test2
{
	test2(test t)
	{
		cout << "test2()" << endl;
	}
};

int main()
{
	test c();
	int i = 6;
	test2 t(test(i) );	  //test2 t(test i)
	//test c or test c{}
	//test2 t{test(i)} ir test2 t((test (i)) )
	return 0;
}
