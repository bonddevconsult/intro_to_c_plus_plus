# Compilers

## Background

### What is Machine Language

"Machine language or machine code is a low level programming language in the form of hexadecimal or binary instructions that execute computer programs on the computers’ CPU. Machine code is the lowest level of code which means that it communicates the programs instructions in the form of software directly to the hardware of the computer via the Central Processing Unit (CPU)" [ref](https://www.codecademy.com/resources/docs/general/machine-code)

## What is a Compiler?

Compilers translate human readable programming language code into lower level machine code. There are other methods of translating human language into machine code like using interpreters or assemblers, which you use is determined by the programming environment you are coding in.

**C++ is a compiled language**, meaning that it is generally translated into machine language that can be understood directly by the system, making the generated program highly efficient.

## What is a console program?

"Console programs are programs that use text to communicate with the user and the environment, such as printing text to the screen or reading input from a keyboard"

"The examples in these tutorials are all console programs."

"The easiest way for beginners to compile C++ programs is by using an Integrated Development Environment (IDE). An IDE generally integrates several development tools, including a text editor and tools to compile programs directly from it."

We will *not*  be using an Integrated development environment.

This is for about 5ish reasons

1. I like to use vscode as a code editor and I think visual studios is too heavy to run and edit code in on a laptop
2. It is important to learn how docker and linux environments both work.
3. Many of the backbone applications for internet infrastructure are in a linux environment
4. Containerized applications are becoming more and more common in the industry.
5. It is easy to generate reproducible builds across environments using docker, there's never an "it worked on my machine" problem because we *should* be using the same dockerfile.

So essentially, I'm doing this a bit more complicated to give everyone who uses this a learning opportunity. We don't have to do it this way, but, trust me it's worth it.

## Dev notes

- "C++ is a language that has evolved much over the years, and these tutorials explain many features added recently to the language. Therefore, in order to properly follow the tutorials, a recent compiler is needed. It shall support (even if only partially) the features introduced by the 2011 standard."
- This is why we use the `g++` compiler with `std=11`.

