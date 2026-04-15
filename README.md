# C++ Terminal Calculator

# Overview

As a software engineer, I am committed to mastering the fundamentals of memory management, performance, and type safety. Developing this terminal-based calculator was a strategic exercise to deepen my understanding of C++—a language renowned for its efficiency and granular control over system resources. My goal was to move beyond high-level abstractions and implement a robust logic flow that handles user input and mathematical operations with precision.

This software is a versatile command-line tool that performs essential arithmetic operations, including addition, subtraction, multiplication, and division. It features a continuous loop for multiple calculations, input validation to prevent crashes from non-numeric data, and error handling to manage edge cases such as division by zero.

The purpose of writing this software was to internalize C++ syntax patterns, explore the standard input/output library (`iostream`), and practice writing clean, modular code that adheres to industry standards.

[Software Demo Video](https://youtu.be/a9B6q1EAbwE)

# Development Environment

To ensure a lightweight and accessible development workflow, I utilized a cloud-based development environment. This allowed me to focus entirely on the logic and architecture of the C++ code without the overhead of local compiler configuration.

* **Compiler/IDE:** OnlineGDB / Replit (utilizing the GCC G++ compiler).
* **Language:** C++17.
* **Libraries:** * `<iostream>`: For standard input and output streams.
    * `<limits>`: Used for clearing input buffers during validation.
    * `<cmath>`: (Optional, if you used functions like `pow()` or `sqrt()`).

# Useful Websites

During the development of this project, the following resources were instrumental in understanding C++ best practices:

- [C++ Reference (cppreference.com)](https://en.cppreference.com/w/) - Detailed documentation on the standard library.
- [LearnCpp.com](https://www.learncpp.com/) - An excellent resource for deep dives into language syntax and memory management.
- [GeeksforGeeks C++ Programming](https://www.geeksforgeeks.org/cpp-tutorial/) - Helpful for quick examples of input validation techniques.

# Future Work

While the current version is fully functional, I plan to implement the following enhancements to further my learning:

- **Advanced Mathematics:** Integrate the `<cmath>` library to support exponents, square roots, and trigonometric functions.
- **Persistent Memory:** Implement a "history" feature using vectors or file I/O (`fstream`) to save previous results.
- **Expression Parsing:** Transition from a step-by-step menu to a string-parsing engine that allows users to type full equations like `(5 + 3) * 2`.
