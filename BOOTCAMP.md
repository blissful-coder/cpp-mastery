# 🏆 Modern C++ Mastery Bootcamp — Skills Checklist + Proof Tasks

This bootcamp is designed to take you from "knowing C++" to **building real systems like databases, engines, allocators and compilers.**

Each topic includes:

- 🎯 What you must understand
- 🧪 Hands-on skill proof
- ✔ Checkbox to track completion

You will **only mark a topic complete after the proof task works.**

---

## 1️⃣ Core Language & Foundations

| Status | Concept Mastered | Proof Task |
|--------|------------------|------------|
| ⬜ | Variables, scope, lifetime, references | Create a math utility library using overloads, const, and reference vs value semantics |
| ⬜ | Const correctness | Write 5 function variants using: `int`, `int&`, `const int&`, `int&&`, `const int&&`, log which overload is called |
| ⬜ | Overloading and namespaces | Organize code into meaningful namespaces and overloads |

---

## 2️⃣ Pointers, Memory, and Lifetime

| Status | Concept Mastered | Proof Task |
|--------|------------------|------------|
| ⬜ | Raw pointers & pointer arithmetic | Implement a dynamic array using raw pointers and manual resizing |
| ⬜ | Manual memory management | Add bounds-checking and destructor cleanup |
| ⬜ | RAII principle | Convert manual memory management into a safe RAII wrapper class |

---

## 3️⃣ Ownership & Smart Pointers

| Status | Concept Mastered | Proof Task |
|--------|------------------|------------|
| ⬜ | `unique_ptr` for exclusive ownership | Replace all raw pointers in your dynamic array with `unique_ptr` |
| ⬜ | `shared_ptr` and `weak_ptr` | Build a tree structure and resolve a shared_ptr cycle using weak_ptr |
| ⬜ | When to choose which ownership | Write a document explaining ownership rationale in your project |

---

## 4️⃣ Copy, Move, and Rule of 0/3/5

| Status | Concept Mastered | Proof Task |
|--------|------------------|------------|
| ⬜ | Copy constructor & assignment | Instrument your code to detect when copying occurs |
| ⬜ | Move constructor & assignment | Modify your dynamic array to support efficient move semantics |
| ⬜ | Rule of 0/3/5 | Refactor to avoid boilerplate where possible |

---

## 5️⃣ Templates & Meta-programming

| Status | Concept Mastered | Proof Task |
|--------|------------------|------------|
| ⬜ | Function & class templates | Template the dynamic array to support any type |
| ⬜ | Partial specialization | Customize behavior for strings or custom types |
| ⬜ | Concepts & constraints (C++20) | Enforce compile-time type rules (e.g., only arithmetic types allowed) |
| ⬜ | Perfect forwarding | Implement a generic factory that forwards arguments correctly |

---

## 6️⃣ STL Containers + Algorithms Mastery

| Status | Concept Mastered | Proof Task |
|--------|------------------|------------|
| ⬜ | Containers (vector, map, list, set) | Benchmark insertion/search times across containers |
| ⬜ | Iterator categories | Demonstrate algorithms that require specific iterator strengths |
| ⬜ | Algorithm mindset | Rewrite loops using STL algorithms (`find_if`, `partition`, `accumulate`) |
| ⬜ | Real use case | Build a leaderboard with ranking, filters and search |

---

## 7️⃣ Error Handling, Safety & APIs

| Status | Concept Mastered | Proof Task |
|--------|------------------|------------|
| ⬜ | Exceptions + noexcept | Mark APIs correctly and enforce strong exception guarantees |
| ⬜ | Return types: `optional`, `expected`, `variant` | Write a config loader returning `expected<T, string>` |
| ⬜ | API boundary documentation | Document how your module signals errors |

---

## 8️⃣ Compile-Time Programming

| Status | Concept Mastered | Proof Task |
|--------|------------------|------------|
| ⬜ | `constexpr` & compile-time logic | Write a compile-time math evaluator (fibonacci or prime check) |
| ⬜ | Type traits & introspection | Implement `is_iterable<T>` using `decltype` & SFINAE |
| ⬜ | Concepts + validation | Create a compile-time restricted serializer |

---

## 9️⃣ Concurrency, Parallelism & Locking

| Status | Concept Mastered | Proof Task |
|--------|------------------|------------|
| ⬜ | `std::thread`, join/detach | Spawn multiple worker threads doing independent tasks |
| ⬜ | Mutexes, locks, deadlock avoidance | Build a producer-consumer queue |
| ⬜ | Futures, `async`, promises | Wrap tasks into async jobs |
| ⬜ | Atomics and memory ordering basics | Build and benchmark a lock-free counter |
| ⬜ | Thread pool (mini-project) | Build a reusable thread-pool and test with workloads |

---

## 🔟 Custom Memory Management

| Status | Concept Mastered | Proof Task |
|--------|------------------|------------|
| ⬜ | Alignment, padding, cache locality | Inspect and document struct memory layout |
| ⬜ | Arena/pool allocators | Build a lightweight arena allocator |
| ⬜ | STL allocator integration | Use your allocator with `std::vector` and measure performance |

---

## 1️⃣1️⃣ File I/O, Serialization & Persistence

| Status | Concept Mastered | Proof Task |
|--------|------------------|------------|
| ⬜ | Text vs binary I/O | Implement a binary serializer for custom data |
| ⬜ | Versioning support | Support forward/backward compatibility in serialization |

---

## 1️⃣2️⃣ Tooling, Debugging & Engineering Practices

| Status | Concept Mastered | Proof Task |
|--------|------------------|------------|
| ⬜ | CMake + project structure | Build a multi-module project |
| ⬜ | Sanitizers (ASan, UBSan) | Fix 3 bugs discovered by sanitizers |
| ⬜ | Profiling & benchmarking | Use `chrono` or Google Benchmark to measure improvements |
| ⬜ | Automated testing (CTest/GTest) | Add unit tests with CI-ready structure |

---

## 🚀 Final Capstone: TinyDB Engine

✔ Complete **only when it meets these requirements:**

- WAL logging  
- Hash index (bonus: B-tree)  
- Async writes using your thread pool  
- Custom allocator  
- Query execution  
- Benchmarks, documentation, tests  

When this runs predictably, det-ects errors safely, performs reliably, and scales —  
you are **no longer learning C++ — you are practicing it at a professional systems level.**

---

> **"Mastery is consistency applied over time — not intensity for a weekend."**

Commit daily.  
Reflect weekly.  
Build relentlessly.  
