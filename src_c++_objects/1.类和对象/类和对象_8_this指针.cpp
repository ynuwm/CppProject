//每个对象都有一个特殊的指针 this，它指向对象本身。每一个对象都能通过 this 指针来访问自己的地址。
//this 指针是所有成员函数的隐含参数。因此，在成员函数内部，它可以用来指向调用对象。
//友元函数没有 this 指针，因为友元不是类的成员。只有成员函数才有 this 指针。

#include <iostream>
 
using namespace std;
 
class Box
{
   public:
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      int compare(Box box)
      {
         return this->Volume() > box.Volume();
      }
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};
 
int main(void)
{
   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2
 
   if(Box1.compare(Box2))
   {
      cout << "Box2 is smaller than Box1" <<endl;
   }
   else
   {
      cout << "Box2 is equal to or larger than Box1" <<endl;
   }
   return 0;
}

/* 输出：
Constructor called.
Constructor called.
Box2 is equal to or larger than Box1
*/

//当我们调用成员函数时，实际上是替某个对象调用它。
//成员函数通过一个名为 this 的额外隐式参数来访问调用它的那个对象，
//当我们调用一个成员函数时，用请求该函数的对象地址初始化 this。