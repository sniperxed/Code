#include <iostream>
using namespace std;
namespace first
{
   int a;
   float b;
}

namespace second
{
   int c;
   float d;
} // namespace second

int jia(int x,int y)
{
   int z;
   z = x + y;
   return z;
}

float jia(float x, float y)
{
   double z;
   z = x + y;
   return z;
}

long jc(long x)
{
   if (x > 0)
    return (x * jc(x - 1));
   else 
    return 1;
}
int main()
{
   
      using namespace first;
      cout << endl <<"input the first number" << endl;
      cin >> a;
      cout << "a = " << first::a;
      cout << "input the second number" << endl;
      cin >> b;
      cout << "a = " << first::a << "b = " << first::b << endl;

      using namespace second;
      cout <<"input the third number" << endl;
      cin >> c;
      cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
      cout << "input the forth number" << endl;
      cin >> d;
      cout << "a = " << a << "b =" << b << "c = " << c << "d = " << d << endl;

cout << endl << endl << "a + c =" << jia(a,c) << endl;
// 输出a + c的结果
cout << endl << endl << "b + d +" << jia(b,d) << endl;
// 输出b + d的结果
cout << endl << endl << "a! = " << jc(a) << endl;
// 输出a的结果
cout << endl << endl << "b! = " << jc(b) << endl;
// 输出b的结果
cout << endl << endl << "c! = " << jc(c) << endl;
// 输出c的结果
cout << endl << endl << "d! = " << jc(d) << endl;
      
}