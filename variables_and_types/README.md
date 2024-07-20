# Program Structure

## Preprocessor

In c++, Lines beginning with a hash sign `#` are directives read and interpreted by what is known as the preprocessor. ex: `#include <iostream>`

## General Format

In C++, the separation between statements is specified with an ending semicolon (;), with the separation into different lines not mattering at all for this purpose. Many statements can be written in a single line, or each statement can be in its own line. The division of code in different lines serves only to make it more legible and schematic for the humans that may read it, but has no effect on the actual behavior of the program.

## Comments

- `//` - line comment, discards everything from where the pair of slash signs are found up to the end of that same line.
- `/**/` - Block comments, discards everything between the /* characters and the first appearance of the */ characters, with the possibility of including multiple lines

## Namespace Std

Because the c++ standard library includes a large number of functions, some people opt to declare the namespace at the top of their code `using namespace std;`

This allows for referencing the included functions with their **unqualified** names. For example:

```C++

#include <iostream>
using namespace std;

int main ()
{
  cout << "Hello World! ";
}
```

Generally, this is not recommended due to naming conflicts.
