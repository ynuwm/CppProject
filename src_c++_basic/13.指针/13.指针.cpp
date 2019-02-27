#include <iostream>
 
using namespace std;
 
int main2 ()
{
   int  var1;
   char var2[10];
 
   cout << "var1 变量的地址： ";
   cout << &var1 << endl;     //取内存地址
 
   cout << "var2 变量的地址： ";
   cout << &var2 << endl;
 
   return 0;
}


//指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。
//就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，
//对其进行声明。指针变量声明的一般形式为：

//所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其
//他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数。
//不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同。

int    *ip;    /* 一个整型的指针 */
double *dp;    /* 一个 double 型的指针 */
float  *fp;    /* 一个浮点型的指针 */
char   *ch;    /* 一个字符型的指针 */

int main ()
{
   int  var = 20;   // 实际变量的声明
   int  *ip;        // 指针变量的声明
 
   ip = &var;       // 在指针变量中存储 var 的地址
 
   cout << "Value of var variable: ";
   cout << var << endl;
 
   // 输出在指针变量中存储的地址
   cout << "Address stored in ip variable: ";
   cout << ip << endl;
 
   // 访问指针中地址的值
   cout << "Value of *ip variable: ";
   cout << *ip << endl;
 
   return 0;
}





































