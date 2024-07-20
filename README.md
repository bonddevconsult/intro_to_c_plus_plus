# intro_to_c_plus_plus

This should serve as a reference to use in a self guided walkthrough of the c++ tutorial at <https://cplusplus.com/doc/tutorial/introduction/>

## Installation Requirements

1. Docker - https://www.docker.com/get-started/
2. gcc official docker image - `docker pull gcc`
2. Code editor([vscode](https://code.visualstudio.com), [sublime](https://www.sublimetext.com/download), emacs, vim)
3. Git.

Take a second to read up on code editors and what docker is if you don't already know.

They're pretty cool.

## Building images

Anytime you finish reading the section and its associated code, you should try to build and run the application. This will help you build confidence running the programs.

### Bugs
If for some reason it doesn't build for you, try to debug, do some googling and submit a pull request to fix the bug.

This will help you get in the habit of reading, writing, and fixing code.

That said, **I am not perfect and I do not expect nor do I guarantee that all of this code will run successfully on the first try at anytime**. Debug your errors, I'll help if I can.

### References

- GCC official docker docs - <https://hub.docker.com/_/gcc/>

### This will build (compile) and run one of the console apps

`$ cd <section_name_path>`
`$ docker build -t <section_name>-image .`
`$ docker run -it --rm --name my-running-app my-cool-app-image`

### Compile the app inside the Docker container, but do not run it

There may be occasions where it is not appropriate to run your app inside a container. To compile, but not run your app inside the Docker instance, you can write something like:

`$ docker run --rm -v "$PWD":/usr/src/myapp -w /usr/src/myapp gcc:4.9 gcc -o myapp myapp.c`

This will add your current directory as a volume to the container, set the working directory to the volume, and run the command `gcc -o myapp myapp.c` - which tells gcc to compile the code in myapp.c and output the executable to myapp.

## Errors