#include <iostream>

using namespace std;

int main(void)
{
  // Our value are all the same, but in different bases
  int decimal = 42;       // Base 10
  int bynary = 0b101010;  // Base 2
  int octal = 052;        // Base 8
  int hexadecimal = 0x2a; // Base 16

  // We can also use float values in hexadecimal, we are using pi as an example
  float decimal_float = 3.14159'26535'89793'23846'26433'83279'50288; // Base 10, we can use ' to separate the digits for better readability
  float hexadecimal_float = 0x3.243F'6A88'85A3'08D3p+0;              // Base 16, we are using the hexadecimal representation of pi, p+0 is the exponent

  cout << "Decimal: " << decimal << endl;
  cout << "Bynary: " << bynary << endl;
  cout << "Octal: " << octal << endl;
  cout << "Hexadecimal: " << hexadecimal << endl;

  cout << "Decimal float: " << decimal_float << endl;
  cout << "Hexadecimal float: " << hexadecimal_float << endl;
}