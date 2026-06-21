# CPT111 - Principles of Programming (Assignment 1)

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="Language" />
  <img src="https://img.shields.io/badge/Course-CPT111-24292e?style=for-the-badge" alt="Course" />
  <a href="https://github.com/ahmedtags">
    <img src="https://img.shields.io/badge/Profile-ahmedtags-D9A34A?style=for-the-badge&logo=github&logoColor=white" alt="Profile" />
  </a>
  <a href="https://blxman-37fy.vercel.app/">
    <img src="https://img.shields.io/badge/Portfolio-blxman--37fy-0A66C2?style=for-the-badge&logo=googlechrome&logoColor=white" alt="Portfolio" />
  </a>
</p>

---

This repository contains the C++ implementation for **CPT111: Principles of Programming - Assignment 1** (Academic Session 2023/2024) at Universiti Sains Malaysia (USM).

## Course Details
- **Course Code:** CPT111
- **Course Name:** Principles of Programming
- **Semester:** Year 1, Semester 1 (2023/2024)

---

## Assignment Overview

The assignment is an introductory C++ console application covering core programming fundamentals:
1. **User Input & Validation:** Accepting student username, matric number, and course data from the console.
2. **Arrays & Loops:** Iterating over courses and storing marks in an array.
3. **Grade Computation:** Mapping numeric marks to letter grades (A, B, C, D, F).
4. **Statistics:** Calculating total marks and average across all enrolled courses.
5. **Formatted Output:** Displaying a styled report card to the console.

---

## What I Did
- Wrote the complete C++ console student report card program in [`assiament 1 cpt 111.cpp`](assiament%201%20cpt%20111.cpp).
- Program accepts a student's name, matric number, and course marks, then computes and prints a formatted grade report.

---

## Tools & Tech Stack
- **Language:** C++ (basic I/O, arrays, loops, conditionals)
- **IDE/Compiler:** GCC / CLion / MinGW

---

## How to Run

1. Compile with all header files in the same directory:
   ```bash
   g++ "assiament 1 cpt 111.cpp" -o grade_report
   ```
2. Run the executable:
   ```bash
   ./grade_report
   ```
3. Enter your name, matric number, number of courses, course names, and marks when prompted.

---

## 📸 Sample Output

```
Hello! Please enter your UserName: Ahmed
Now enter your Matric Number: 22304588
**************************************************
     Hello Ahmed  :)
**************************************************
How many courses have you taken? 3
Enter the course Name or code for Course 1: CPT111
Enter the Mark for CPT111: 85
Enter the course Name or code for Course 2: CPT112
Enter the Mark for CPT112: 72
Enter the course Name or code for Course 3: CPT113
Enter the Mark for CPT113: 91
----------------------------------------
Hello Ahmed, here is your report card:
 ( 22304588 )
----------------------------------------
CPT111: A
CPT112: B
CPT113: A

Total Marks: 248
Number of Courses: 3
Average Mark: 82.6667
```
 The program will output your styled grade report card.
