# Full Stack Developer Screening Test – Tandemloop  
### Candidate: **Punit Sudarshan Alagoudar**

---

## 📌 Overview
This repository contains my solutions for the **First Screening Test** for the **Full Stack Developer** position at **Tandemloop Technologies Pvt. Ltd.**

The test includes **4 programming problems**, each solved using **C++** with simple, clean, and easy-to-understand logic, following the basic coding level requested in the test instructions.

---

## 🛠️ Technologies Used
- **C++ (GCC / G++ Compiler)**
- Standard Template Library (STL) — minimal usage

---

## 📂 File Structure

Problem-1.cpp
Problem-2.cpp
Problem-3.cpp
Problem-4.cpp
README.md

yaml
Copy code

---

# ✅ Problem Details & How to Run

---

## **🧮 Problem-1: Calculator Using Class**
A simple calculator that performs:
- Addition  
- Subtraction  
- Multiplication  
- Division  

The program uses a **C++ class** to implement all operations.

### **Run:**
bash
g++ Problem-1.cpp -o p1
./p1

🔢 Problem-2: Generate Series of Odd Numbers
Given an integer a, the program prints the first a odd numbers.

Example:

a = 3 → 1, 3, 5

Run:
bash
Copy code
g++ Problem-2.cpp -o p2
./p2

🔢 Problem-3: Conditional Odd Number Series
The output depends on whether a is odd or even:

If a is odd → print odd numbers up to a terms

If a is even → print odd numbers up to a - 1 terms

Examples:

a = 4 → 1, 3, 5

a = 5 → 1, 3, 5, 7, 9

Run:
bash
Copy code
g++ Problem-3.cpp -o p3
./p3

📊 Problem-4: Count Multiples of 1–9
Given a fixed list:
[1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30]

The program counts how many numbers are multiples of each digit 1–9.

Example output:

yaml
Copy code
{1: 11, 2: 8, 3: 4, 4: 4, 5: 3, 6: 2, 7: 0, 8: 1, 9: 1}
Run:
bash
Copy code
g++ Problem-4.cpp -o p4
./p4
🧪 How to Execute All Files
bash
Copy code
g++ Problem-1.cpp -o p1 && ./p1
g++ Problem-2.cpp -o p2 && ./p2
g++ Problem-3.cpp -o p3 && ./p3
g++ Problem-4.cpp -o p4 && ./p4
