[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/1Btf62fS)
## C++ Assignment: Solving System of Linear Equations

### Objective:

This assignment aims to implement a C++ program that solves linear equations using the Gauss-Jordan elimination method.

### Instructions:

#### Part 1: Program Implementation

1. **Read Input:**
   - Read an integer `n` representing the number of variables from the first line.
   - Read `n` equations in the form of Ax + By + Cz + ... = k from the next `n` lines. (Actual format is `m A B C D...`) where `m` represents the number of coefficients, A, B, C, D... are the coefficients separated by a space.

2. **Implementation:**
   - Implement an algorithm to solve the system of linear equations.
   - Ensure your program handles cases where the system may not have a solution.

3. **Output:**
   - If the system of equations is not solvable, output "NO."
   - If the system is solvable, output "YES" and x, y, z, ... values with two decimal places.

#### Part 2: Submission

Submit the C++ source code file in the GitHub repository, similar to how you submitted the previous assignment.

### Additional Tips:

- Please make sure to implement your solution using the provided theory references.
- Ensure that your program handles edge cases where the system may not be solvable.

## Example:

### Input:

```cpp
2
3
4 2 1 -1 8
4 -3 4 2 1
4 1 -1 3 6
1
3 2 3 -1
```

### Output:

```cpp
YES
2.00 -1.00 3.00
```

### Explanation:

In the given example, the system of equations is solvable. The x, y, and z values are 2.00, -1.00, and 3.00, respectively. The output is formatted with two decimal places. If the system were not solvable, the output would be "NO."

- Refer to [this](https://www.youtube.com/watch?v=eDb6iugi6Uk) video and [this](https://mathhints.com/advanced-algebra/solving-systems-using-reduced-row-echelon-form/) article for a hint on how to solve this problem.
