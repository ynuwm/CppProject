#include <iostream>
using namespace std;
 
int main ()
{
   // 带有 5 个元素的双精度浮点型数组
   //balance 是一个指向 &balance[0] 的指针，即数组 balance 的第一个元素的地址。
   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};  
   double *p;
 
   p = balance;
 
   // 输出数组中每个元素的值
   cout << "使用指针的数组值 " << endl; 
   for ( int i = 0; i < 5; i++ )
   {
       cout << "*(p + " << i << ") : ";
       cout << *(p + i) << endl;
   }
 
   cout << "使用 balance 作为地址的数组值 " << endl;
   for ( int i = 0; i < 5; i++ )
   {
       cout << "*(balance + " << i << ") : ";
       cout << *(balance + i) << endl;
   }
 
   return 0;
}

//在上面的实例中，p 是一个指向 double 型的指针，这意味着
//它可以存储一个 double 类型的变量。一旦我们有了 p 中的
//地址，*p 将给出存储在 p 中相应地址的值，正如上面实例中所演示的。






