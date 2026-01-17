# Codeforces Round 2191 — Solutions

This repository contains my accepted solutions for **Codeforces Round 2191**.

🔗 Contest Link: https://codeforces.com/contest/2191  
👤 Author: Shajidul Islam Sobuj  
💻 Language: C++ (GNU++17)

---

## ✅ Problems Solved

| Problem | Title                    | Status |
|--------:|--------------------------|--------|
| A       | Array Coloring           | ✅ Solved |
| B       | MEX Reordering           | ✅ Solved |
| C       | Sorting Game             | ✅ Solved |
| D1      | Sub-RBS (Easy Version)   | ✅ Solved |

---

## 🧠 Solution Summaries

### 🅰️ A — Array Coloring
**Idea:**  
Check adjacent elements. If two consecutive numbers have the same parity (both even or both odd), the answer is **NO**.  
Otherwise, **YES**.

**Time Complexity:** `O(n)`  
**Space Complexity:** `O(n)`

---

### 🅱️ B — MEX Reordering
**Idea:**  
Count number of `0`s and `1`s.
- If there is no `0` → impossible  
- If there are multiple `0`s but no `1` → impossible  
- Otherwise → possible

**Time Complexity:** `O(n)`  
**Space Complexity:** `O(1)`

---

### 🅲 C — Sorting Game
**Idea:**  
- If the string is already sorted → Bob wins  
- Otherwise:
  - Count number of `0`s
  - Collect indices where swaps are needed to make it sorted
  - Alice wins and prints swap positions

**Time Complexity:** `O(n)`  
**Space Complexity:** `O(n)`

---

### 🅳 D1 — Sub-RBS (Easy Version)
**Idea:**  
Traverse from the end:
- Count `'('`
- If a `')'` is found and at least two `'('` exist on the right, answer is `n-2`
- Otherwise `-1`

**Time Complexity:** `O(n)`  
**Space Complexity:** `O(1)`

---

## ▶️ How to Run

Compile and run any solution:

```bash
g++ A_ArrayColoring.cpp -std=gnu++17 -O2
./a.out
