// 003.cpp: 定义应用程序的入口点。
//

#include "02.h"
#include <vector>
using namespace std;
template<typename T,typename ... ARGS> //template parameter packet
void test(const T &arg1,const ARGS & ... args) //function parameter packet
{
    cout << "sizeof(ARGS)=" << sizeof...(ARGS) << endl;
    cout << "sizeof(args)=" << sizeof...(args) << endl;
}

//recursive
template<typename T>
ostream& my_printf(ostream& os, const T& t)
{
    return os << t;
}
template<typename T, typename ... ARGS>
ostream& my_printf(ostream& os, const T& t, const ARGS & ... args)
{
    os << t << " ";
    return my_printf(os, args...);
}

//non-recursive
template<typename T>
void print_data(ostream& os,const T &t)
{
    os << t << " ";
}
template<typename... Args>
void output(ostream& os,Args... args)
{
    initializer_list<int> init {(print_data(os,args),0 )...};
    os << endl;
}

int add(const initializer_list<int>& paras)
{
    int sum = 0;
    for (auto para : paras)
    {
        sum += para;
    }
    return sum;
}
int main()
{
    vector<int> v = { 1,2,3,4,5 };
    int sum = add({ 1,2,3,4,v[1] });
    cout << "sum=" << sum << endl;
    my_printf(cout,"test", 1, 2, 4, 5, "hello");
    cout << endl;
    output(cout,"test", 1, 2, 4, 5, "hello");
	return 0;
}
