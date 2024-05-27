
# N Queen Problem Solver

## Overview

This project provides a solution to the N Queen problem using data structures in C++. The N Queen problem is a classic computer science problem where the objective is to place N queens on an N×N chessboard such that no two queens threaten each other. This means that no two queens can be in the same row, column, or diagonal.

## Features

- Solve the N Queen problem for any size N.
- Efficient algorithms to find solutions.
- Detailed output showing each step of the solution process.

## Getting Started

### Prerequisites

- C++ compiler (e.g., g++)
- Make (optional, for convenience in building the project)

### Installation

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/n-queen-solver.git
    cd n-queen-solver
    ```

2. Build the project:
    ```sh
    make
    ```
    Alternatively, compile manually:
    ```sh
    g++ -o n_queen_solver n_queen_solver.cpp
    ```

### Usage

To run the solver, simply execute the compiled program with the desired board size N:
```sh
./n_queen_solver [N]
```
Replace `[N]` with the size of the board you want to solve. For example, to solve the 8-queen problem:
```sh
./n_queen_solver 8
```

### Example

```sh
$ ./n_queen_solver 8
Solution for 8-Queens problem:
. . Q . . . . .
. . . . Q . . .
. Q . . . . . .
. . . . . . Q .
Q . . . . . . .
. . . Q . . . .
. . . . . Q . .
. . . . . . . Q
```

## Project Structure

- `n_queen_solver.cpp`: Main source file containing the implementation of the N Queen solver.
- `Makefile`: File to simplify the build process.

## Contributing

We welcome contributions! Please fork the repository and create a pull request with your changes. Ensure that your code follows the style guidelines and includes relevant tests.

### Steps to Contribute

1. Fork the repository.
2. Create a new branch:
    ```sh
    git checkout -b feature/YourFeature
    ```
3. Make your changes and commit them:
    ```sh
    git commit -m 'Add some feature'
    ```
4. Push to the branch:
    ```sh
    git push origin feature/YourFeature
    ```
5. Create a new Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Inspired by the classic N Queen problem.
- Thanks to the contributors and the open-source community.

---

Feel free to modify this template according to your specific project details and requirements.
