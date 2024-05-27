# N Queen Problem Solver

## Overview

This project provides a solution to the N Queen problem using data structures in C++. The N Queen problem is a classic computer science problem where the objective is to place N queens on an N×N chessboard such that no two queens threaten each other. This means that no two queens can be in the same row, column, or diagonal.

## Features

- Solve the N Queen problem for board sizes greater than or equal to 4.
- Visual representation of the board and queen placements.
- Step-by-step output displaying each move and backtracking steps.

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

To run the solver, simply execute the compiled program:
```sh
./n_queen_solver
```
You will be prompted to enter the number of queens (N). The program will display the board state at each step and indicate when backtracking occurs.

### Example

```sh
$ ./n_queen_solver
Welcome to the N-Queens Solver!
Please enter the number of queens (greater than or equals to 4 for meaningful solutions): 8

Initial empty board:
   0  1  2  3  4  5  6  7 
 0 .  .  .  .  .  .  .  .  
 1 .  .  .  .  .  .  .  .  
 2 .  .  .  .  .  .  .  .  
 3 .  .  .  .  .  .  .  .  
 4 .  .  .  .  .  .  .  .  
 5 .  .  .  .  .  .  .  .  
 6 .  .  .  .  .  .  .  .  
 7 .  .  .  .  .  .  .  .  

Current Board State:
   0  1  2  3  4  5  6  7 
 0 Q  .  .  .  .  .  .  .  
 1 .  .  .  .  .  .  .  .  
 2 .  .  .  .  .  .  .  .  
 3 .  .  .  .  .  .  .  .  
 4 .  .  .  .  .  .  .  .  
 5 .  .  .  .  .  .  .  .  
 6 .  .  .  .  .  .  .  .  
 7 .  .  .  .  .  .  .  .  

...

Solution exists:
Current Board State:
   0  1  2  3  4  5  6  7 
 0 .  .  Q  .  .  .  .  .  
 1 .  .  .  .  Q  .  .  .  
 2 .  Q  .  .  .  .  .  .  
 3 .  .  .  .  .  .  Q  .  
 4 Q  .  .  .  .  .  .  .  
 5 .  .  .  Q  .  .  .  .  
 6 .  .  .  .  .  Q  .  .  
 7 .  .  .  .  .  .  .  Q  
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
