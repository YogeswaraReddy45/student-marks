# Student Ranking System in C

A **C-based Student Ranking System** that accepts student details and marks for five subjects, calculates the total marks, sorts students based on their total marks, and displays the ranking in descending order.

This project demonstrates the use of **structures, arrays, loops, functions, string handling, and sorting logic** in C.

## 📌 Features

* **Student Data Management** – Stores student name, roll number, subject marks, and total marks.
* **Multiple Student Support** – Allows the user to enter details for any number of students.
* **Marks Calculation** – Calculates the total marks obtained in five subjects.
* **Ranking System** – Sorts students based on their total marks in descending order.
* **Formatted Output** – Displays rank, roll number, student name, and total marks in a tabular format.
* **Structure-Based Implementation** – Uses a C structure to group related student information.

## 🛠️ Technologies Used

* **Programming Language:** C
* **Compiler:** GCC
* **Interface:** Command-Line Interface (CLI)
* **Concepts:** Structures, Arrays, Loops, Sorting, Strings, User Input, Formatted Output

## 📁 Project Structure

```text id="5m4rj7"
Student-Ranking-System/
│
├── main.c       # Main program and ranking logic
└── README.md    # Project documentation
```

## ⚙️ How It Works

### 1. Enter Number of Students

The program first asks the user how many students need to be entered.

```text id="9khg9s"
Enter the number of students: 3
```

### 2. Enter Student Details

For each student, the program accepts:

* Student name
* Roll number
* Marks in 5 subjects

Example:

```text id="q7d3lj"
Enter the student 1 name: Rahul
Enter roll no: 101
Enter the subject marks: 80 75 90 85 88
```

### 3. Calculate Total Marks

The marks of all five subjects are added to calculate the student's total.

For example:

```text id="n0w8l1"
80 + 75 + 90 + 85 + 88 = 418
```

### 4. Sort Students by Total Marks

The program compares the total marks of students and sorts them in **descending order**.

The student with the highest total marks receives **Rank 1**.

### 5. Display Ranking

The final ranking is displayed in a table:

```text id="6k4d2p"
Rank    Rollno    Name              Total
=========================================
1       103       Priya             450
2       101       Rahul             418
3       102       Arun              390
```

## 🧩 Structure Used

The program uses a structure to store all information related to a student:

```c
struct a {
    char name[30];
    int rollno;
    int marks[5];
    int total;
};
```

The structure contains:

| Member     | Purpose                        |
| ---------- | ------------------------------ |
| `name[30]` | Stores student name            |
| `rollno`   | Stores roll number             |
| `marks[5]` | Stores marks for five subjects |
| `total`    | Stores total marks             |

## 🔄 Ranking Algorithm

The program uses a comparison-based sorting approach:

1. Compare the total marks of two students.
2. If the earlier student's total is smaller, swap their totals.
3. Continue comparing all students.
4. Display students from highest total to lowest total.

Conceptually:

```text id="h3n8sl"
Student A Total < Student B Total
              ↓
            Swap
              ↓
Higher total appears first
```

## 🛠️ Compilation

Compile the program using GCC:

```bash id="0b1f2p"
gcc main.c -o ranking
```

## 🚀 Execution

### Linux / WSL

```bash id="r2wq7a"
./ranking
```

### Windows

```bash id="k3e8fd"
ranking.exe
```

## 📚 C Concepts Demonstrated

This project provides practical experience with:

* **Structures**
* **Arrays**
* **Array of Structures**
* **Strings**
* **Loops**
* **Nested Loops**
* **Conditional Statements**
* **Sorting Algorithms**
* **Formatted Input/Output**
* **Variable Length Arrays**
* **User Input Handling**
* **Structure Member Access**

## 🎯 Project Objective

The objective of this project is to build a simple **student ranking system** while practicing important C programming concepts such as **structures, arrays, sorting, string handling, and nested loops**.

The project demonstrates how structured student data can be processed and organized to generate rankings based on academic performance.

## 🔮 Future Enhancements

Possible improvements include:

* Add marks validation for each subject.
* Calculate percentage and grade.
* Handle students with equal marks using tie ranking.
* Sort students without losing their complete information.
* Add search functionality using roll number.
* Add student record modification and deletion.
* Store student records using file handling.
* Generate class-wise or subject-wise rankings.
* Separate the program into multiple functions for better modularity.

## 👨‍💻 Author

**Yogeswara Reddy**

*C Programmer | Aspiring Embedded Software Engineer*
