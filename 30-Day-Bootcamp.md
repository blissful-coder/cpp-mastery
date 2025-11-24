# 🚀 30-Day Modern C++ Mastery Bootcamp (Mentor Edition)

This bootcamp is designed to rebuild your C++ thinking from the foundation **up toward systems-level mastery** — threading, memory models, allocators, concurrency, templates, compile-time logic, and real project execution.

You will not "finish exercises".  
You will **build understanding** — and prove it.

---

## 📌 Summary Table

| Day | Topic | Skill Focus | Proof of Mastery |
|-----|-------|-------------|------------------|
| 1 | Value Categories & References | lvalue/rvalue intuition | Overload dispatch map |
| 2 | Const Correctness | const as design contract | Lazy loader + justification |
| 3 | Raw Memory | Working with heap + pointer arithmetic | Manual dynamic array |
| 4 | RAII | Resource ownership discipline | Exception-safe cleanup |
| 5 | Smart Pointers | Modern memory API | Tree with weak_ptr cycle fix |
| 6 | Rule of 0/3/5 | Object lifecycle control | Move vs copy benchmark |
| 7 | Review | Pattern consolidation | Clean refactor + notes |
| 8 | Templates | Type-generic thinking | Templated container |
| 9 | Perfect Forwarding | Efficient construction | Universal factory |
| 10 | Concepts | Compile-time correctness | Type-restricted template |
| 11 | Containers | Correct container choice | Benchmark results |
| 12 | Algorithms | Functional iteration mindset | Rewrite logic with STL |
| 13 | optional/variant/expected | Safer function return design | Config loader |
| 14 | Mini-Project | Integration | In-memory leaderboard |
| 15 | constexpr | Compile-time programming | constexpr evaluator |
| 16 | Type Traits & SFINAE | Compile-time logic | `is_iterable<T>` |
| 17 | Threads | Parallel execution | Workers with logs |
| 18 | Locks | Shared state control | Producer-consumer queue |
| 19 | async/promise/future | Structured concurrency | async pipeline |
| 20 | Atomics | Lock-free foundations | Atomic counter bench |
| 21 | Mini-Project | Concurrency pattern | Thread pool |
| 22 | Alignment & Cache | Performance correctness | Struct layout experiment |
| 23 | Custom Allocators | Memory reuse patterns | Arena allocator |
| 24 | STL + Allocator | Ownership at scale | Allocator-backed vector |
| 25 | File I/O | Persistence | Serialize + load struct |
| 26 | Versioning | Compatibility mindset | Backward-compatible reader |
| 27 | Sanitizers & Profiling | Engineering hygiene | Fix runtime issues |
| 28–30 | Capstone | Systems thinking | TinyDB with WAL + index + async |

---

---

# 🧠 Daily Breakdown

Each day includes reading, learning goals, tasks, and reflection prompts.

---

### **Day 1 — Value Categories & Reference Binding**

📘 **Read:**
- C++ Primer §2.2–2.3  
- A Tour of C++ §1.3–1.4  

🧠 **Learn:**
Understand *why* the compiler selects one overload over another — not as rules, but as **behavior patterns**. This matters later for move semantics, forwarding, and templates.

💻 **Task:**
Write 5 overloads (`int`, `int&`, `const int&`, `int&&`, `const int&&`) and test calls using:
- literals  
- named variables  
- std::move  
- function returns  

🎯 **Proof:**
Produce a table:

| Expression | Overload Called | Why |
|------------|-----------------|-----|

If you can explain *why*, not just *what*, you're done.

---

### **Day 2 — Const Correctness**

📘 **Read:**  
- C++ Primer §2.4, §6.2.3  
- EMC Item 21  

🧠 **Learn:**  
Const is not about prevention — it’s about **guarantees and design intent.**  
A well-designed const API communicates trust.

💻 **Task:**  
Create a class with a **lazy-loaded value**. Implement two versions:
- using `const_cast`
- using `mutable`

🎯 **Proof:**
Write 3 sentences explaining when `const_cast` is justified — and when it's a code smell.

---

### **Day 3 — Raw Memory**

📘 **Read:**  
- CP §12.1  
- Tour §3.2  

🧠 **Learn:**  
Pointers are not dangerous when understood — they are precise tools.

💻 **Task:**  
Implement a manual dynamic array using:
- `new`/`delete`
- pointer arithmetic
- bounds checking

🎯 **Proof:**  
Show memory is freed correctly via logging or sanitizer.

---

### **Day 4 — RAII**

📘 **Read:**  
- Tour §4.2  
- EMC Item 17  

🧠 **Learn:**  
RAII ensures cleanup no matter what. This is the **foundation of exception safety and ownership.**

💻 **Task:**  
Refactor yesterday’s array into a safe RAII class.

🎯 **Proof:**  
Throw an exception mid-operation — no leaks.

---

### **Day 5 — Smart Pointers**

📘 **Read:**  
- EMC Items 18–22  
- CP §12.1.5  

🧠 **Learn:**  
Understand not just *how*, but *when* to use each pointer.

💻 **Task:**  
Build a tree using `shared_ptr<Node>` and fix cycle with `weak_ptr`.

🎯 **Proof:**  
Your destructor logs confirm full cleanup.

---

### **Day 6 — Rule of 0/3/5 & Move Semantics**

📘 **Read:**  
- EMC Items 23–29  
- CP §13.1, §13.6  

🧠 **Learn:**  
Move semantics are not "optimization", they're modern design.

💻 **Task:**  
Implement a `Buffer` with copy/move ctors + assignment.

🎯 **Proof:**  
Benchmark: moves must be faster than copies — prove it.

---

### **Day 7 — Review**

📘 No reading.

🧠 **Learn:** Patterns > isolated facts.

💻 **Task:**  
Refactor Week 1 into clean idiomatic C++.

🎯 **Proof:**  
Push commit titled:  
`W1 refactor — design decisions documented.`

---

## 📅 Week 2 — Templates, Type Deduction & STL Fluency

---

### **Day 8 — Templates (Function + Class Templates)**

📘 **Read:**
- C++ Primer Ch. 16 (start to §16.2)
- A Tour of C++ §6.1–6.3

🧠 **Learn:**
Templates are not syntax — they are a **mechanism for writing behavior, not types.**  
Understand how compilers **instantiate templates** and why errors can be cryptic.

💻 **Task:**
Turn your dynamic array from Week 1 into a templated container.

🎯 **Proof:**
Demonstrate it works with:
- `int`
- `std::string`
- a custom struct

---

### **Day 9 — Type Deduction & Perfect Forwarding**

📘 **Read:**
- Effective Modern C++ Items 23–28 (core topic)

🧠 **Learn:**
Why universal references (`T&&`) exist and how forwarding preserves value category.

💻 **Task:**
Build a generic factory function:

```cpp
template<typename T, typename... Args>
std::unique_ptr<T> make(Args&&... args);
```
🎯 Proof:
Use it to construct:

a type with expensive copies

one with deleted copy ctors

Forwarding must select the right constructor.

Day 10 — Concepts (C++20)
📘 Read:

A Tour of C++ §5.3–5.5 (Concepts & Constraints)

🧠 Learn:
Concepts are compile-time API contracts.
They make templates readable and errors meaningful.

💻 Task:
Restrict yesterday’s factory so it only accepts arithmetic types.

🎯 Proof:
Invalid types produce human-readable compiler errors.

Day 11 — STL Containers
📘 Read:

C++ Primer Ch. 9–11 (focus on vector/map/unordered_map)

Tour §7.1–7.6

🧠 Learn:
Every container exists for a reason. Choosing the right container is a design decision.

💻 Task:
Benchmark:

vector

list

map

unordered_map

for 1M insert + lookup.

🎯 Proof:
Give a one-line rule for each container's best use-case.

Day 12 — Algorithms and Iterators
📘 Read:

Tour §7.7

CP §10.2–10.6

🧠 Learn:
Good C++ avoids manual loops — the STL expresses intent.

💻 Task:
Rewrite a loop-heavy algorithm using:

std::transform

std::sort

std::accumulate

🎯 Proof:
Benchmark old vs STL version and note speed + readability differences.

Day 13 — optional, variant, any, expected
📘 Read:

Tour §6.6, §7.9

🧠 Learn:
These eliminate null-check hell and replace "invalid states handled later" with type safety.

💻 Task:
Write a config parser returning:

cpp
Copy code
std::expected<Config, std::string>
🎯 Proof:
Your code must compile without null, exceptions, or runtime checks.

Day 14 — Mini Project: Leaderboard
📘 No new reading.

🧠 Learn:
Integration reveals gaps more than isolated topics.

💻 Task:
Build a leaderboard supporting:

inserts

score updates

top-K queries

Use correct containers and algorithms.

🎯 Proof:
Print top 10 fast — aim for <2ms.

📅 Week 3 — Compile-Time Programming & Concurrency
Day 15 — constexpr & Compile-Time Thinking
📘 Read:

Tour §10.2

EMC Item 15

🧠 Learn:
constexpr isn't optimization — it’s a shift from runtime to compile-time.

💻 Task:
Write a constexpr prime checker or constexpr FizzBuzz.

🎯 Proof:
Verified via:

cpp
Copy code
static_assert(isPrime(101));
Day 16 — Type Traits, decltype, and SFINAE
📘 Read:

Tour §6.5

Reference: cppreference <type_traits>

🧠 Learn:
Make the compiler reason about types before code executes.

💻 Task:
Implement is_iterable<T> using SFINAE.

🎯 Proof:
Test:

cpp
Copy code
static_assert(is_iterable<std::vector<int>>);
static_assert(!is_iterable<int>);
Day 17 — Threads
📘 Read:

CP §19.1

Tour §12.1–12.3

🧠 Learn:
Threads are not magic — they are workers with context.

💻 Task:
Spin up multiple threads processing separate portions of a dataset.

🎯 Proof:
Execution must be faster than single-threaded run.

Day 18 — Mutexes, Locks, Shared State
📘 Read:

Tour §12.4

🧠 Learn:
Threading is easy — shared state is hard.

💻 Task:
Build a producer–consumer queue using std::mutex + std::condition_variable.

🎯 Proof:
Multiple producers and consumers run without race conditions.

Day 19 — async, future, promise
📘 Read:

Tour §12.5–12.7

🧠 Learn:
Asynchrony is structured concurrency — not chaos.

💻 Task:
Chain async tasks representing pipeline stages (fetch → process → aggregate).

🎯 Proof:
Must handle errors using expected or futures — no raw exceptions.

Day 20 — Atomics & Memory Model
📘 Read:

Tour §12.8–12.10

🧠 Learn:
Atomics allow correctness without locks — but only when you understand memory ordering.

💻 Task:
Implement atomic counters (relaxed vs sequential consistency).

🎯 Proof:
Show cases where relaxed ordering appears "non-logical" — journal why.

Day 21 — Mini Project: Thread Pool
📘 No new reading.

💻 Task:
Implement a general-purpose thread pool with task queue.

🎯 Proof:
Benchmark against single-thread equivalent.

📅 Week 4 — Memory Engineering, Filesystems & Capstone
Day 22 — Alignment, Cache Lines & Struct Layout
📘 Read:

Tour §17.1–17.3

🧠 Learn:
Performance comes from data layout, not algorithms alone.

💻 Task:
Compare performance of padded vs compact struct.

🎯 Proof:
Profiling screenshots included.

Day 23 — Custom Allocators
📘 Read:

Tour §11.4

🧠 Learn:
Allocators allow ownership and performance tuning beyond new/delete.

💻 Task:
Build an arena allocator.

🎯 Proof:
Measure allocation speed vs standard heap.

Day 24 — STL + Custom Allocator
📘 Read:

CP §17.5

💻 Task:
Create a std::vector<T> using your allocator.

🎯 Proof:
It must support reserve(), push_back(), shrink_to_fit(), and copy semantics.

Day 25 — File I/O & Serialization
📘 Read:

CP Ch. 8

💻 Task:
Write binary serialization/deserialization for a struct.

🎯 Proof:
Data must round-trip across multiple program runs.

Day 26 — Compatibility & Versioning
🧠 Learn:
Software outlives its first format — design with tomorrow in mind.

💻 Task:
Add N+1 version support to yesterday's format.

🎯 Proof:
V1 and V2 files load transparently.

Day 27 — Debugging, Sanitizers & Profiling
📘 Read:

Tour §13.2–13.5

💻 Task:
Enable:

ASAN

TSAN

Valgrind (if available)

Fix at least 3 findings.

Day 28–30 — Capstone: TinyDB
💻 Build a tiny embedded database with:

Write-Ahead Log (WAL)

Index (B+Tree or Hash Index)

Concurrency-safe writes

Custom allocator backend

Benchmark suite

🎯 Proof:
Your DB must survive crashes, reload cleanly, and outperform naive file writes.


