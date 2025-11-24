# 🚀 30-Day Modern C++ Mastery Bootcamp

Welcome to your structured, reinforcement-based journey to mastering Modern C++ — not just syntax, but **real engineering skills.**

Each day includes:

- 🧠 Concept to learn
- 💻 One hands-on task
- 🎯 Proof milestone to confirm mastery

Goal: Build real confidence, not tutorial memory.

---

## 📅 Week 1 — Core, Pointers, Ownership & Move Semantics

| Day | Focus | What You Learn | Proof Task |
|-----|-------|----------------|------------|
| **Day 1** | References & Value Categories | lvalue, rvalue, ref binding rules | Write 5 overloaded functions (int, int&, const int&, int&&, const int&&) and print which overload fires |
| **Day 2** | Const Correctness | const&, mutable, const_cast | Write a lazy-loaded class using both `mutable` and `const_cast`, analyze differences |
| **Day 3** | Raw Pointers | pointer arithmetic & heap basics | Implement a dynamic array using raw pointers and resizing |
| **Day 4** | RAII | deterministic destruction | Refactor Day 3 array into a class with destructor and exception safety |
| **Day 5** | Smart Pointers | unique_ptr, shared_ptr, weak_ptr | Build a tree structure using shared_ptr and fix cyclic reference using weak_ptr |
| **Day 6** | Rule of 0/3/5 | copy/move semantics | Build a `Buffer` class and log copy vs move performance |
| **Day 7** | Review + Refactor | stability and reinforcement | Clean up Week 1 code using modern idioms, commit reflection notes |

---

## 📅 Week 2 — Templates, Type Deduction & STL Fluency

| Day | Focus | You Learn | Proof Task |
|-----|-------|-----------|------------|
| **Day 8** | Templates | function & class templates | Convert Day 3/4 dynamic array into a templated container |
| **Day 9** | Perfect Forwarding | T&&, std::forward | Build a generic factory that forwards ctor args correctly |
| **Day 10** | Concepts (C++20) | compile-time constraints | Restrict template so it only accepts arithmetic types |
| **Day 11** | Containers (STL) | vector, map, list, unordered_map | Benchmark insert/search operations across containers |
| **Day 12** | Algorithms & Iterators | sort, transform, find_if | Rewrite logic using algorithms rather than loops |
| **Day 13** | optional, variant, expected | safe function returns | Write a config parser returning `expected<T,string>` |
| **Day 14** | Mini-Project | integration | Build an in-memory leaderboard using templates, maps & algorithms |

---

## 📅 Week 3 — Compile-Time, Concurrency & Parallelism

| Day | Focus | You Learn | Proof Task |
|-----|-------|-----------|------------|
| **Day 15** | `constexpr` Programming | compile-time execution | Write a compile-time prime checker or fizzbuzz |
| **Day 16** | Type Traits & SFINAE | introspection tools | Implement `is_iterable<T>` with SFINAE |
| **Day 17** | Threads | launching workers | Spawn multiple threads performing tasks |
| **Day 18** | Mutexes & Locks | safe shared state | Implement a producer–consumer queue |
| **Day 19** | async, promise, future | high-level concurrency | Run async tasks & measure improvement vs sequential |
| **Day 20** | Atomics & lock-free basics | performance-first concurrency | Implement a lock-free counter with benchmarks |
| **Day 21** | Mini Project | concurrency architecture | Build a reusable ThreadPool with queued tasks |

---

## 📅 Week 4 — Memory Architecture, Persistence & Capstone

| Day | Focus | You Learn | Proof Task |
|-----|-------|-----------|------------|
| **Day 22** | Alignment & Cache Behavior | padding & locality | Compare padded vs tightly packed structs |
| **Day 23** | Custom Allocators | arena & pool designs | Implement an arena allocator |
| **Day 24** | STL Allocator Support | custom memory with STL | Use your allocator inside vector or map |
| **Day 25** | Binary File I/O | persistence & streams | Serialize and deserialize a custom struct |
| **Day 26** | Compatibility & Versioning | real-world upgradeability | Support reading older file format versions |
| **Day 27** | Debugging & Profiling Tools | ASAN, UBSAN, Valgrind | Run sanitizers and fix at least 3 discovered issues |
| **Day 28-30** | **CAPSTONE: TinyDB** | everything comes together | Build a tiny DB with: WAL, index, async writes, custom allocator, and benchmarks |

---

## 🎓 Completion Outcome

By Day 30 you will:

✔ Understand and use modern C++ idioms confidently  
✔ Know when to choose value vs reference semantics  
✔ Architect safe ownership using smart pointers  
✔ Build concurrent systems using threads, futures and atomics  
✔ Manage memory at a low level, including allocators  
✔ Design real-world APIs with error guarantees  
✔ Build a **Tiny Database Engine** worthy of a GitHub portfolio/demo  

---

## 📌 Rules for Success

- **Do something every day — even 15 min counts.**
- **Always run sanitizers when coding.**
- **Benchmark performance changes.**
- **Document learnings weekly.**

---

> 💡 *"Mastery isn’t speed — it's incremental permanence."*

---
