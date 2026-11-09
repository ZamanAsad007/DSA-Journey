<div align="center">

# ⚡ Data Structures & Algorithms Journey

<p align="center">
  <b>A curated repository of optimal, clean, and well-structured LeetCode solutions implemented in Modern C++.</b>
</p>

[![C++](https://img.shields.io/badge/Language-C%2B%2B17%2F20-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://en.cppreference.com/)
[![LeetCode](https://img.shields.io/badge/Platform-LeetCode-FFA116?style=for-the-badge&logo=leetcode&logoColor=black)](https://leetcode.com/)
[![Problems Solved](https://img.shields.io/badge/Problems%20Solved-08-brightgreen?style=for-the-badge&logo=target)](https://github.com/ZamanAsad007/DSA-Journey)
[![Maintenance](https://img.shields.io/badge/Maintained%3F-Yes-blue?style=for-the-badge)](https://github.com/ZamanAsad007/DSA-Journey/commits/main)

---

[Overview](#-overview) •
[Problems Solved](#-problems-solved) •
[Patterns Covered](#-patterns-covered) •
[Repository Structure](#-repository-structure) •
[How to Run Locally](#-how-to-run-locally) •
[Roadmap](#-roadmap) •
[Author](#-author)

</div>

---

## 📌 Overview

Welcome to my **DSA Journey**! This repository tracks my daily competitive programming and algorithmic problem-solving practice on **LeetCode**. 

### 🎯 Key Highlights
- **Clean & Readable Code**: Written with modern C++ best practices and idiomatic STL usage.
- **Optimal Complexities**: Focus on achieving optimal Time and Space complexity.
- **Self-Contained & Executable**: Every file contains both the LeetCode `Solution` class and a runnable `main()` function with test cases for straightforward local debugging.
- **Pattern-Oriented**: Grouped by algorithmic techniques (Two Pointers, Hash Sets/Maps, Dutch National Flag, etc.).

---

## 📊 Problems Solved

| # | Problem | Difficulty | Category / Pattern | Solution | Time | Space |
|:---:|:---|:---:|:---|:---:|:---:|:---:|
| `0001` | [Two Sum](https://leetcode.com/problems/two-sum/) | `🟢 Easy` | Hash Map / Complement Search | [twoSum.cpp](./TwoSumProblem/twoSum.cpp) | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ |
| `0075` | [Sort Colors](https://leetcode.com/problems/sort-colors/) | `🟡 Medium` | Two Pointers (Dutch National Flag) | [sortColors.cpp](./Sort%20Colors/sortColors.cpp) | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |
| `0088` | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | `🟢 Easy` | Two Pointers (Reverse Fill) | [mergeArray.cpp](./Merge%20Sorted%20Array/mergeArray.cpp) | $\mathcal{O}(m + n)$ | $\mathcal{O}(1)$ |
| `0125` | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | `🟢 Easy` | Two Pointers / String Filtering | [validPalindrome.cpp](./Valid%20Palindrome/validPalindrome.cpp) | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |
| `0217` | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | `🟢 Easy` | Hash Set / Early Exit | [ContainsDuplicate.cpp](./ContainsDuplicateProblem/ContainsDuplicate.cpp) | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ |
| `0242` | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | `🟢 Easy` | Sorting / Frequency Check | [ValidAnagram.cpp](./Valid%20Anagram%20Problem/ValidAnagram.cpp) | $\mathcal{O}(n \log n)$ | $\mathcal{O}(1)$ |
| `0680` | [Valid Palindrome II](https://leetcode.com/problems/valid-palindrome-ii/) | `🟢 Easy` | Two Pointers / Greedy Deletion | [validPalindrome2.cpp](./Valid%20Palindrome%20II/validPalindrome2.cpp) | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |
| `1768` | [Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/) | `🟢 Easy` | Two Pointers / Interleaving | [mergeStrings.cpp](./Merge%20Strings%20Alternately/mergeStrings.cpp) | $\mathcal{O}(n + m)$ | $\mathcal{O}(1)^*$ |

> `*` Space complexity excludes memory required for returning the output string.

---

## 🧠 Patterns Covered

```
                    ┌─────────────────────────┐
                    │      DSA Patterns       │
                    └────────────┬────────────┘
         ┌───────────────────────┼──────────────────────┐
         ▼                       ▼                      ▼
┌──────────────────┐   ┌──────────────────┐   ┌──────────────────┐
│ Arrays & Hashing │   │   Two Pointers   │   │ Sorting Methods  │
├──────────────────┤   ├──────────────────┤   ├──────────────────┤
│ • Set Membership │   │ • Opposite-Ends  │   │ • 3-Way Partition│
│ • Hash Map Lookup│   │ • Reverse Merge  │   │   (Dutch Flag)   │
│ • Fast Frequency │   │ • Greedy Skip    │   │ • In-Place Sort  │
└──────────────────┘   └──────────────────┘   └──────────────────┘
```

### 1. Arrays & Hashing
- **Hash Table Lookup**: Solving `Two Sum` in $\mathcal{O}(n)$ by querying target complements instead of brute force $\mathcal{O}(n^2)$.
- **Hash Set Deduplication**: Using `unordered_set` in `Contains Duplicate` for constant-time $\mathcal{O}(1)$ average lookups and early termination.

### 2. Two Pointers & In-Place Modification
- **Dutch National Flag (3-Way Partition)**: Solving `Sort Colors` in a single pass with $\mathcal{O}(1)$ space using `low`, `mid`, and `high` pointers.
- **Reverse Insertion**: Merging sorted arrays from end to beginning in `Merge Sorted Array`, preventing overwrite of unprocessed elements without extra memory.
- **Palindrome Verification**: Moving inwards from boundaries while sanitizing alphanumeric characters (`Valid Palindrome`) and granting at most one mismatched skip (`Valid Palindrome II`).

---

## 📁 Repository Structure

```tree
DSA/
├── 📁 ContainsDuplicateProblem/
│   └── ContainsDuplicate.cpp      # LC 217 - Contains Duplicate
├── 📁 Merge Sorted Array/
│   └── mergeArray.cpp             # LC 88  - Merge Sorted Array
├── 📁 Merge Strings Alternately/
│   └── mergeStrings.cpp           # LC 1768 - Merge Strings Alternately
├── 📁 Sort Colors/
│   └── sortColors.cpp             # LC 75  - Sort Colors
├── 📁 TwoSumProblem/
│   └── twoSum.cpp                 # LC 1   - Two Sum
├── 📁 Valid Anagram Problem/
│   └── ValidAnagram.cpp           # LC 242 - Valid Anagram
├── 📁 Valid Palindrome/
│   └── validPalindrome.cpp        # LC 125 - Valid Palindrome
├── 📁 Valid Palindrome II/
│   └── validPalindrome2.cpp       # LC 680 - Valid Palindrome II
├── .gitignore
└── README.md
```

---

## 💻 How to Run Locally

### Prerequisites
- Modern C++ compiler (`g++`, `clang++`) supporting **C++17** or newer.
- Git.

### 1. Clone the repository
```bash
git clone https://github.com/ZamanAsad007/DSA-Journey.git
cd DSA-Journey
```

### 2. Compile and execute any solution
Compile and execute any problem using standard `g++` commands:

```bash
# Example: Running Two Sum
g++ -std=c++17 "TwoSumProblem/twoSum.cpp" -o twoSum
./twoSum

# Example: Running Sort Colors
g++ -std=c++17 "Sort Colors/sortColors.cpp" -o sortColors
./sortColors

# Example: Running Valid Palindrome II
g++ -std=c++17 "Valid Palindrome II/validPalindrome2.cpp" -o validPalindrome2
./validPalindrome2
```

---

## 🗺️ Roadmap & Target Topics

- [x] **Arrays & Hashing**
- [x] **Two Pointers**
- [ ] **Sliding Window**
- [ ] **Stack & Queue**
- [ ] **Binary Search**
- [ ] **Linked List**
- [ ] **Trees & Binary Search Trees**
- [ ] **Tries**
- [ ] **Heaps / Priority Queue**
- [ ] **Backtracking**
- [ ] **Graphs (BFS / DFS / Dijkstra)**
- [ ] **Dynamic Programming (1D & 2D)**
- [ ] **Greedy Algorithms**

---

## 👤 Author

**Zaman Asad**
- GitHub: [@ZamanAsad007](https://github.com/ZamanAsad007)
- Email: [asadasif1704@gmail.com](mailto:asadasif1704@gmail.com)

---

<div align="center">
  <sub>⭐ Found this repository helpful? Give it a star! ⭐</sub>
</div>
