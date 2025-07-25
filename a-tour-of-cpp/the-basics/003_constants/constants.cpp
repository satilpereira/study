#include <iostream>

using namespace std;

// For a function to be usable in a constant expression, that is, to be evaluated at compile time, it must be declared constexpr.
constexpr double square(double x) { return x * x; }

int main()
{
  const double pi = 3.14159;
  constexpr double e = 2.71828;
  int var = 17;

  e = 3.0; // !error: assignment of read-only variable 'e'

  constexpr double max1 = 1.4 * square(17);  // OK 1,4*square(17) is a constant expression
  constexpr double max2 = 1.4 * square(var); // !error: the value of 'var' is not usable in a constant expression
  const double max3 = 1.4 * square(var);     // OK, the value of 'var' is usable in a constant expression

  cout << "pi: " << pi << endl;
  cout << "e: " << e << endl;

  return 0;
}