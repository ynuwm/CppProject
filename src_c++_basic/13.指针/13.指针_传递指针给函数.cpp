//通过引用或地址传递参数，使传递的参数在调用函数中被改变。

//C++ 允许您传递指针给函数，只需要简单地声明函数参数为指针类型即可。
//下面的实例中，我们传递一个无符号的 long 型指针给函数，并在函数内改变这个值：

#include <iostream>
#include <ctime>
 
using namespace std;
void getSeconds(unsigned long *par);
 
int main ()
{
   unsigned long sec;
 
 
   getSeconds( &sec );
 
   // 输出实际值
   cout << "Number of seconds :" << sec << endl;
 
   return 0;
}
 
void getSeconds(unsigned long *par)
{
   // 获取当前的秒数
   *par = time( NULL );
   return;
}

















