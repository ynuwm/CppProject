#include <iostream>
#include <cmath>
using namespace std;
 
 /*
int main ()
{
   // 数字定义
   short  s;
   int    i;
   long   l;
   float  f;
   double d;
   
   // 数字赋值
   s = 10;      
   i = 1000;    
   l = 1000000; 
   f = 230.47;  
   d = 30949.374;
   
   // 数字输出
   cout << "short  s :" << s << endl;
   cout << "int    i :" << i << endl;
   cout << "long   l :" << l << endl;
   cout << "float  f :" << f << endl;
   cout << "double d :" << d << endl;
 
   return 0;
}
*/

// 数学运算
int main2()
{
   // 数字定义
   short  s = 10;
   int    i = -1000;
   long   l = 100000;
   float  f = 230.47;
   double d = 200.374;
 
   // 数学运算
   cout << "sin(d) :" << sin(d) << endl;
   cout << "abs(i)  :" << abs(i) << endl;
   cout << "floor(d) :" << floor(d) << endl; //该函数返回一个小于或等于传入参数的最大整数。
   cout << "sqrt(f) :" << sqrt(f) << endl;  //该函数返回参数的平方根。
   cout << "pow( d, 2) :" << pow(d, 2) << endl;
 
   return 0;
}


// 随机数
//一个是 rand()，该函数只返回一个伪随机数。生成随机数之前必须先调用 srand() 函数。
//实例中使用了 time() 函数来获取系统时间的秒数，通过调用 rand() 函数来生成随机数：

#include <ctime>
#include <cstdlib>
 
using namespace std;
 
int main ()
{
   int i,j;
 
   // 设置种子
   srand( (unsigned)time( NULL ) );
 
   /* 生成 10 个随机数 */
   for( i = 0; i < 10; i++ )
   {
      // 生成实际的随机数
      j= rand();
      cout <<"随机数： " << j << endl;
   }
 
   return 0;
}