/*
The arithmetic operators can be used for appropriate combinations of the fundamental types:
x+y // addition
+x // unary plus
x−y // subtraction
−x // unary minus
x∗y // multiplication
x/y // division
x%y // modulo (remainder)

So can the comparison operators:Section 1.4.1
x==y // equality
x!=y // inequality
x<y // less than
x>y // greater than
x<=y // x<=y
x>=y // x>=y

Furthermore, logical operators are provided:
x&y // bitwise and
x|y // bitwise or
xˆy // bitwise exclusive or
˜x // bitwise complement
x&&y // logical and
x||y // logical or
!x // logical not (negation)

*/
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
  auto v{7};               // Better to use {} instead of = for initialization, because it prevents narrowing conversions. auto will deduce the type of the variable.
  unsigned char x{0b1010}; // 10
  unsigned char y{0b1100}; // 12
  short z{0b10000001};     // 129
  short a{256};            // 100000000
  x = x << 1;              // Shift left by 1 is the same as multiplying by 2
  y = y >> 1;              // Shift right by 1 is the same as dividing by 2
  z = z << 1;              // Shift right by 1
  a >>= 2;                 // Shift right by 1, can be powerful for dividing by powers of 2 for even numbers

  cout << "x: " << bitset<sizeof(x) * 8>(x) << " | x: " << int(x) << endl;
  cout << "y: " << bitset<sizeof(y) * 8>(y) << " | y: " << int(y) << endl;
  cout << "z: " << bitset<sizeof(z) * 8>(z) << " | z: " << int(z) << endl;
  cout << "a: " << bitset<sizeof(a) * 8>(a) << " | a: " << int(a) << endl;

  z ^= z; // bitwise exclusive or, will set all bits to 0
  cout << "z: " << bitset<sizeof(z) * 8>(z) << " | z: " << int(z) << endl;
}

void some_function()
{
  double d = 2.2;
  int i = 7;
  d = d + i;
  i = d * i;
}