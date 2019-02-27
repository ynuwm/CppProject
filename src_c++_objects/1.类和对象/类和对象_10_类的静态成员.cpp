//类的数据成员和函数成员都可以被声明为静态的。

//我们可以使用 static 关键字来把类成员定义为静态的。
//当我们声明类的成员为静态时，这意味着无论创建多少个类的对象，静态成员都只有一个副本。

//静态成员在类的所有对象中是共享的。如果不存在其他的初始化语句，在创建第一个对象时，
//所有的静态数据都会被初始化为零。
#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      static int objectCount;
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // 每次创建对象时增加 1
         objectCount++;
      }
      double Volume()
      {
         return length * breadth * height;
      }
   private:
      double length;     // 长度
      double breadth;    // 宽度
      double height;     // 高度
};
 
// 初始化类 Box 的静态成员
int Box::objectCount = 0;
 
int main(void)
{
   Box Box1(3.3, 1.2, 1.5);    // 声明 box1
   Box Box2(8.5, 6.0, 2.0);    // 声明 box2
 
   // 输出对象的总数
   cout << "Total objects: " << Box::objectCount << endl;
 
   return 0;
}

/*输出：
Constructor called.
Constructor called.
Total objects: 2
*/


//静态成员函数
///如果把函数成员声明为静态的，就可以把函数与类的任何特定对象独立开来。
//静态成员函数即使在类对象不存在的情况下也能被调用，静态函数只要使用类名加范围解析运算符 :: 就可以访问。

//静态成员函数没有 this 指针，只能访问静态成员（包括静态成员变量和静态成员函数）。
//普通成员函数有 this 指针，可以访问类中的任意成员；而静态成员函数没有 this 指针。
#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      static int objectCount;
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // 每次创建对象时增加 1
         objectCount++;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      static int getCount()
      {
         return objectCount;
      }
   private:
      double length;     // 长度
      double breadth;    // 宽度
      double height;     // 高度
};
 
// 初始化类 Box 的静态成员
int Box::objectCount = 0;
 
int main(void)
{
  
   // 在创建对象之前输出对象的总数
   cout << "Inital Stage Count: " << Box::getCount() << endl;
 
   Box Box1(3.3, 1.2, 1.5);    // 声明 box1
   Box Box2(8.5, 6.0, 2.0);    // 声明 box2
 
   // 在创建对象之后输出对象的总数
   cout << "Final Stage Count: " << Box::getCount() << endl;
 
   return 0;
}
/*输出：
Inital Stage Count: 0
Constructor called.
Constructor called.
Final Stage Count: 2
*/







