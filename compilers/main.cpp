// Tell the preprocesser to include the functions from the input/output stream library or "iostream" library before compilation begins
// iostream gives us functions that allow us to read/write from the command line. 
// It also has functions that allow us to write errors: https://en.cppreference.com/w/cpp/header/iostream
#include <iostream>

// line comment
/* block comment
 C++ supports two ways of commenting code:
 The first of them, known as line comment, discards everything from where the pair of slash signs are found up to the end of that same line.
 The second one, known as block comment, discards everything between the asterisk fowardslashes
 */

// declare a main function
int main()
{
  // the std prefix references the c standard library, all of these functions, types, and constant values are
  //  included in the c standard library
  std::cout << "Hello World";
}