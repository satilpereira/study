#include <iostream>

using namespace std;

double square(double x)
{
  return x * x;
}

void print_square(double x)
{
  cout << "The square of " << x << " id " << square(x) << "\n";
}

int main(void)
{
  print_square(1.234);
  return 0;
}