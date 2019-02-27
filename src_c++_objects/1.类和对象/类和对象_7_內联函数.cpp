//通过内联函数，编译器试图在调用函数的地方扩展函数体中的代码。
//在类定义中的定义的函数都是内联函数，即使没有使用 inline 说明符。
//下面是一个实例，使用内联函数来返回两个数中的最大值：

#include <iostream>
 
using namespace std;

inline int Max(int x, int y)
{
   return (x > y)? x : y;
}

// 程序的主函数
int main( )
{

   cout << "Max (20,10): " << Max(20,10) << endl;
   cout << "Max (0,200): " << Max(0,200) << endl;
   cout << "Max (100,1010): " << Max(100,1010) << endl;
   return 0;
}