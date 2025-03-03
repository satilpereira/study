#include <iostream>

using namespace std;

void print(int, double);
void print(double, int);

int main(void)
{
  /*
  $ g++ ambiguous.cpp

  ambiguous.cpp: In function ‘int main()’:
  ambiguous.cpp:10:8: error: call of overloaded ‘print(int, int)’ is ambiguous
     10 |   print(0, 0);
        |   ~~~~~^~~~~~
  ambiguous.cpp:5:6: note: candidate: ‘void print(int, double)’
      5 | void print(int, double);
        |      ^~~~~
  ambiguous.cpp:6:6: note: candidate: ‘void print(double, int)’
      6 | void print(double, int);
        |      ^~~~~
  */
  print(0, 0); // !error: call of overloaded ‘print(int, int)’ is ambiguous
  return 0;
}

void print(int x, double y)
{
  cout << "The integer is " << x << " and the double is " << y << "\n";
}

void print(double x, int y)
{
  cout << "The double is " << x << " and the integer is " << y << "\n";
}