// Tell the compiler to include the functions from the input/output stream library or "iostream" library
// iostream gives us functions that allow us to read/write from the command line. 
// It also has functions that allows us to write errors: https://en.cppreference.com/w/cpp/header/iostream
// And a constant value to represent the end of a line `endl`
#include <iostream>
// allows us to create strings
#include <string>

// Full list of c++ stdio headers here https://en.cppreference.com/w/cpp/header

// line comment
/* block comment
 C++ supports two ways of commenting code:
 The first of them, known as line comment, discards everything from where the pair of slash signs are found up to the end of that same line.
 The second one, known as block comment, discards everything between the asterisk fowardslashes
 */
int main()
{
  // the std prefix references the c standard library, all of these functions, types, and constant values are
  //  included in the c standard library
  std::cout << "this is a simple program for printing your name. Enter your name" << std::endl;
  // use the string type included with the string header in the c standard standard library to create an empty string variable
  // This statement creates a variable called `name` with an empty string as its value
  std::string name = "";
  // Use the cin function in the iostream header from the c standard library to assign user input to the name variable
  std::cin >> name;
  // Write the statement "your name is: <name>" to the command line
  std::cout << "your name is: " << name;
}