#include <iostream>

using namespace std;

void print(int);
void print(double);
void print(string);

int main(void)
{
  print(42);
  print(9.65);
  print("Hello, World!");
  return 0;
}

void print(int x)
{
  cout << "The integer is " << x << "\n";
}

void print(double x)
{
  cout << "The double is " << x << "\n";
}

void print(string x)
{
  cout << "The string is " << x << "\n";
}