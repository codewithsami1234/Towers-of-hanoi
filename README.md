Tower of Hanoi - Recursive Puzzle Solver 🧩
The Tower of Hanoi is a classic mathematical puzzle that involves moving a set of disks from one peg to another, following a few simple rules. This project provides an implementation of the Tower of Hanoi puzzle solver in C++ using recursion.

Objective:
The goal of the Tower of Hanoi puzzle is to move all the disks from the source peg to the destination peg, using an auxiliary peg. The puzzle must follow these rules:

Only one disk can be moved at a time.

A disk can only be placed on top of a larger disk or on an empty peg.

The objective is to move all the disks in the fewest possible moves (2^n - 1, where n is the number of disks).

This project demonstrates the use of recursion to solve the puzzle efficiently.

Key Features:
Recursive Solution: The puzzle is solved recursively by breaking it down into smaller subproblems.

Step-by-Step Output: The program prints each move, showing the movement of disks between the pegs.

Optimal Moves: The solution follows the formula for the minimum number of moves (2^n - 1), making it the most efficient way to solve the puzzle.

How It Works:
The recursive function moveDiscs works by:

Moving n-1 disks from the source peg to the auxiliary peg.

Moving the nth (largest) disk to the destination peg.

Moving the n-1 disks from the auxiliary peg to the destination peg.

This cycle repeats until all disks are moved to the destination peg.

Technologies Used:
Programming Language: C++

Concept: Recursion, Algorithms
