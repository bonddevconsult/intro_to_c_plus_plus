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

/**
 * hello world function
 * return type: void
 * name: helloWorld
*/
void helloWorld() {
  // std::cout stands for `standard character output` device
  //  << is the insertion operator
  // It inserts the string value "hello world" into the standard character output

  // all statements in c++ must end in a semicolon, but remember that a statement is a specific type of code block in c++
  // Preprocessor directives (those that begin by #), for example, are out of this general rule since they are not statements. 
  // Function definitions also do not need semicolons either. Only commands to the compiler.
  std::cout << "Hello World";
  std::cout << "I'm a c++ program";

}

/*
* Main function
* return type: integer
* name: main

Main is a special function in all c++ programs, because, it is called when the program is run. 
The execution of the main program is the start of all the execution of the code no matter where it is located within the code
*/
int main() {
  // These are triggering or "invoking" the functions defined above. Don't worry too much about how they work, yet.
  helloWorld();
}