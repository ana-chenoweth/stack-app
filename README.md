# Stack App (C++)

This project implements a generic **stack data structure** in C++, allowing storage and manipulation of elements of any type (default is `int`). It includes functionalities such as adding and removing elements, deep copying, dynamic resizing, and printing the stack contents. The system is designed with an educational purpose in mind, to better understand how stacks work in memory and how to use C++ templates.

<img src="media/program-stack.gif" alt="Video test" width="400">

## Features

- Full implementation of a generic stack (`template`-based).
- Add elements to the top of the stack.
- Remove elements from the top.
- Deep copy using the assignment operator (`operator=`).
- Dynamic resizing of internal storage.
- Console output of stack contents.
- Proper error handling for user input.

## Project Structure

```
.
├── Pila/
│   ├── Pila.hpp       # Stack class declaration (template)
│   └── Pila.tpp       # Stack class method definitions
├── main.cpp           # Interactive test program
├── Vector.cpp/.hpp    # (Optional) auxiliary modules
├── LICENSE            # MIT license
└── README.md          # This file
```

## Requirements

- C++17 compatible compiler (e.g., `clang++` or `g++`).
- Unix/Linux/macOS or Windows with a C++ development environment.

## Compilation

Make sure **not to compile `Pila.tpp` directly**. It is included within `Pila.hpp` and used as part of the template implementation:

```bash
clang++ -std=c++17 -Wall -o stack_app main.cpp
```

Or with `g++`:

```bash
g++ -std=c++17 -Wall -o stack_app main.cpp
```

## Run

```bash
./test
```
Para windows:
```bash
test_windows.exe
```

The program will guide the user through options to add, remove, or copy stack elements, showing the current stack status at each step.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.