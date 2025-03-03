#include <iostream>

using namespace std;

int main()
{
  int myInt = 17;                      // integer, where 17 is the value, its signed(default when ommited) and 32 bits(4 bytes)
  unsigned int myUnsignedInt = 17;     // unsigned integer, where 17 is the value, its unsigned and 32 bits(4 bytes)
  signed mySignedInt = 17;             // signed integer, where 17 is the value, its signed and 32 bits(4 bytes) [!NOTE: int can be omitted as signed int and signed are the same]
  short myShortInt = 17;               // short integer, where 17 is the value, its signed and 16 bits(2 bytes)
  long myLongInt = 17;                 // long integer, where 17 is the value, its signed and 64 bits(8 bytes)
  bool myBool = true;                  // boolean, where true is the value, its signed and 8 bits(1 byte)
  char myChar = 'A';                   // character, where 'A' is the value, its signed and 8 bits(1 byte)
  wchar_t myWChar = L'A';              // character, where 'A' is the value, its signed and 16 bits(2 bytes) [Considered as defect and replaced by char16_t and char32_t]
  char16_t myChar16 = u'A';            // character, where 'A' is the value, its signed and 16 bits(2 bytes)
  char32_t myChar32 = U'A';            // character, where 'A' is the value, its signed and 32 bits(4 bytes)
  float myFloat = 17.0;                // floating point, where 17.0 is the value, its signed and 32 bits(4 bytes)
  double myDouble = 17.0;              // double floating point, where 17.0 is the value, its signed and 64 bits(8 bytes)
  long double myLongDouble = 17.0;     // long double floating point, where 17.0 is the value, its signed and 80 bits(10 bytes)
  float infinty = 1.0 / 0.0;           // NFINITY, where 1.0/0.0 is the value, its signed and 32 bits(4 bytes)
  float negative_infinty = 1.0 / -0.0; // -INFINITY, where -1.0/0.0 is the value, its signed and 32 bits(4 bytes)
  float not_a_number = 0.0 / 0.0;      // NaN, where 0.0/0.0 is the value, its signed and 32 bits(4 bytes)

  // There are also some other types like void, nullptr, string, array, vector, etc.
}