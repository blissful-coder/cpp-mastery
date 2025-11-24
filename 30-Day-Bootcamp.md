# 📚 30-Day C++ Mastery Bootcamp — Reading Guide + Exercises

This document tells you *exactly what to read* while working through the bootcamp.

Primary books referenced:

| Short Code | Book |
|-----------|------|
| **CP** | C++ Primer (5th Edition) — Lippman |
| **EMC** | Effective Modern C++ — Scott Meyers |
| **TCppPL** | A Tour of C++ (2nd Ed) — Stroustrup |
| **CPP-Crash** | C++ Crash Course — Josh Lospinoso (optional alternative) |

---

## 📅 Week 1 — Core, Pointers, Ownership & Move Semantics

| Day | Bootcamp Topic | Reading |
|-----|---------------|---------|
| **Day 1** | References & Value Categories | **TCppPL Ch. 1.3, 1.4** (Values, Objects) <br> **CP: §2.2–2.3** |
| **Day 2** | Const Correctness | **CP: §2.4, §6.2.3** <br> EMC: *Item 21 – Prefer `const` wherever possible* |
| **Day 3** | Raw Pointers & Memory | **CP: §2.5.2, §12.1** <br> TCppPL: Ch. 3.2 |
| **Day 4** | RAII | TCppPL: Ch. 4.2 (Resource Mgmt) <br> EMC: *Item 17 – Understand special member generation* |
| **Day 5** | Smart Pointers | **EMC: Item 18–22** (unique_ptr, shared_ptr, weak_ptr) <br> CP: §12.1.5 |
| **Day 6** | Rule of 0/3/5 — Copy/Move | **EMC: Items 23–29** <br> CP: §13.1, §13.6 |
| **Day 7** | Review & Refactor | No new reading — revisit notes |

---

## 📅 Week 2 — Templates, Type Deduction & STL

| Day | Bootcamp Topic | Reading |
|-----|---------------|---------|
| **Day 8** | Templates | **CP: Ch. 16 (Templates)** <br> TCppPL: Ch. 6 (Generic Programming) |
| **Day 9** | Perfect Forwarding | **EMC: Item 25–28** <br> TCppPL: §6.3 |
| **Day 10** | Concepts (C++20) | **TCppPL: Ch. 5 & 6.5 (Concepts)** |
| **Day 11** | STL Containers | CP: Ch. 9–11 <br> TCppPL: Ch. 7.1–7.6 |
| **Day 12** | STL Algorithms | **TCppPL: Ch. 7.7** <br> CP: §10.2–10.6 |
| **Day 13** | optional / variant / expected | TCppPL: §6.6, §7.9 <br> (optional: `cppreference.com` docs) |
| **Day 14** | Leaderboard Project | No reading — apply knowledge |

---

## 📅 Week 3 — Compile-Time, Concurrency & Parallelism

| Day | Bootcamp Topic | Reading |
|-----|---------------|---------|
| **Day 15** | `constexpr` | **TCppPL: §5.3, §10.2** <br> EMC: *Item 15 – constexpr advantages* |
| **Day 16** | Type Traits & SFINAE | **TCppPL: §6.5** <br> (optional: *cppreference: <type_traits>*) |
| **Day 17** | Threads | **TCppPL: Ch. 12.1–12.3** |
| **Day 18** | Mutex & Locking | CP: §19.1.1–19.3 <br> TCppPL: Ch. 12.4 |
| **Day 19** | Futures & async | **TCppPL: §12.5–12.7** |
| **Day 20** | Atomics & Memory Model | **TCppPL: §12.8–12.10** |
| **Day 21** | Thread Pool Project | No reading — implementation only |

---

## 📅 Week 4 — Memory Systems, Persistence & Capstone

| Day | Bootcamp Topic | Reading |
|-----|---------------|---------|
| **Day 22** | Alignment & Cache | **TCppPL: §17.1–17.3 (Performance Reasoning)** |
| **Day 23** | Custom Allocators | **TCppPL: §11.4** |
| **Day 24** | STL + Custom Allocator | CP: §17.5 |
| **Day 25** | File I/O & Streams | **CP: Ch. 8** (IO Library) |
| **Day 26** | Persistence & Versioning | No canonical chapter — google "binary compatibility C++" |
| **Day 27** | Debugging, Sanitizers, Benchmarking | **TCppPL: §13.2–13.5** |
| **Day 28–30** | TinyDB Capstone | Use docs + prior material |

---

## 🧠 Optional Alternatives if You Don’t Have All Books

If you want to simplify:

📌 Use **A Tour of C++ (Stroustrup)** as primary reading  
📌 Use **Effective Modern C++** for best practices  
📌 Use **cppreference.com** as technical bible  
📌 Use **C++ Crash Course** only if you prefer hands-on explanation style

---

## 💡 Study Rules

- 🔁 Re-read any topic if the exercises feel hard → that means the brain hasn’t internalized it yet.
- ✍️ Every completed day should result in:
  - Code commit  
  - One takeaway sentence in your notes  
  - One test case  

---

### ✔ When you finish this reading plan + exercises, you will have:

- Mastered **modern C++ idioms**
- Real concurrency experience
- A working **TinyDB**
- A portfolio worthy of interviews at **FAANG, Quant Firms, and Systems Teams**

---

> **Mastery is not speed — mastery is proof.**
