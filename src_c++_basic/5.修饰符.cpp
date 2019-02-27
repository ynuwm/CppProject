//修饰符 signed、unsigned、long 和 short 可应用于整型，
//signed 和 unsigned 可应用于字符型，
//long 可应用于双精度型。
#include <iostream>
using namespace std;
 
/* 
 * 这个程序演示了有符号整数和无符号整数之间的差别
*/
int main()
{
   short int i;           // 有符号短整数
   short unsigned int j;  // 无符号短整数
 
   j = 50000;
 
   i = j;
   cout << i << " " << j;
 
   return 0;
}