#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// The above declaration allows all elements in the std namespace to be accessed in an unqualified manner (without the std:: prefix).
// a namespace is just a collection of related functions and properties

// C++ Primer given courtesy of https://cplusplus.com/doc/tutorial/



// line comment
/* block comment
 C++ supports two ways of commenting code:
 The first of them, known as line comment, discards everything from where the pair of slash signs are found up to the end of that same line.
 The second one, known as block comment, discards everything between the asterisk fowardslashes
 */
int main()
{
  cout << "this is a simple program for printing your name. Enter your name" << endl;
  string name = "";
  cin >> name;
  cout << "your name is: " << name;
}