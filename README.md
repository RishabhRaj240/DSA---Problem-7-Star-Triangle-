# Star Triangle Pattern in C++

A beginner-friendly C++ program that demonstrates pattern printing using nested loops.

This project generates a **Centered Star Triangle Pattern (Pyramid)**, where stars are arranged symmetrically and centered using spaces. It is a fundamental pattern-printing problem that helps build a strong understanding of nested loops and output formatting.

---

## 📌 Features

* Prints a centered pyramid star pattern
* Uses nested `for` loops
* Demonstrates spacing and alignment logic
* Beginner-friendly implementation
* Improves pattern recognition and problem-solving skills

---

## 🛠️ Technologies Used

* C++
* Standard Input/Output (`iostream`)

---

## 📂 Problem Statement

Given an integer `N`, print a centered pyramid pattern consisting of stars (`*`).

### Example

For:

```txt
N = 5
```

Output:

```txt
    *
   ***
  *****
 *******
*********
```

---

## 📸 Screenshot

<img width="1197" height="737" alt="Screenshot 2026-06-22 212802" src="https://github.com/user-attachments/assets/60250804-dc90-4801-8a29-258ebd7accf6" />

Example folder structure:

```txt
project-folder/
│
├── main.cpp
├── README.md
└── screenshots/
    └── output.png
```

---

## 💻 Source Code

```cpp
void nStarTriangle(int n) {
    for (int i = 1; i <= n; i++) {

        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Stars
        for (int k = 0; k < 2 * i - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }
}
```

---

## ▶️ How to Run

1. Compile the program:

```bash
g++ main.cpp -o main
```

2. Run the executable:

```bash
./main
```

3. Enter the value of `N`.

---

## 📸 Example Output

### Input

```txt
4
```

### Output

```txt
   *
  ***
 *****
*******
```

---

## 📖 Learning Concepts

This project helps beginners understand:

* Nested loops
* Pattern printing
* Pyramid patterns
* Space and character alignment
* Loop boundary management
* Algorithmic thinking

---

## 🔍 Pattern Explanation

The pattern consists of two parts:

### 1. Leading Spaces

```cpp
for (int j = 1; j <= n - i; j++)
```

Prints the spaces required to center the stars.

### 2. Stars

```cpp
for (int k = 0; k < 2 * i - 1; k++)
```

Prints an odd number of stars in each row:

| Row | Stars |
| --- | ----- |
| 1   | 1     |
| 2   | 3     |
| 3   | 5     |
| 4   | 7     |
| 5   | 9     |

This creates a symmetric pyramid shape.

---

## ⏱️ Complexity Analysis

### Time Complexity

```txt
O(N²)
```

Two nested loops execute for each row.

### Space Complexity

```txt
O(1)
```

No additional memory is used apart from loop variables.

---

## 👨‍💻 Author

Developed as a beginner-friendly C++ practice project for learning nested loops, pattern printing, and algorithmic problem-solving.
