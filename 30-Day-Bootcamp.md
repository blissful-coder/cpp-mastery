# 🚀 30-Day Modern C++ Bootcamp (Summary Version, Fixed References)

## 📚 Primary Books Referenced

| Short Code | Book |
|-----------|------|
| **CP** | C++ Primer (5th Edition) — Lippman |
| **EMC** | Effective Modern C++ — Scott Meyers |
| **TCppPL** | A Tour of C++ (2nd Ed) — Stroustrup |
| **CPP-Crash** | C++ Crash Course — Josh Lospinoso (optional alternative) |

---

## 📅 30-Day Summary Table

| Day | Topic | Learn | Read | Task | Proof |
|-----|--------|--------|--------|--------|--------|
| 1 | Value Categories & References | lvalue/rvalue basics, reference binding | **CP:** §2.3, §2.4.1 (References & References to const) / **TCppPL:** Ch. 2 “Basic Concepts” (types, variables, refs) | Overload resolution demo (`int&`, `const int&`) | Table mapping expression→overload, with explanations |
| 2 | Const Correctness | const as a contract; `const` vs `mutable` vs `const_cast` | **CP:** §2.4 (const), §6.2.3 (const params) / **EMC:** Item 21 | Lazy loader class (one version with `mutable`, one with `const_cast`) | Justify design: when `mutable` is better than `const_cast` |
| 3 | Raw Memory | Pointers, `new`/`delete`, pointer arithmetic | **CP:** §2.3.2 (Pointers), Ch. 12.1 (Dynamic memory) / **TCppPL:** Ch. 5 “Pointers, Arrays, and References” | Manual dynamic array using raw pointers | ASan/Valgrind shows no leaks |
| 4 | RAII | Resource Acquisition Is Initialization; deterministic cleanup | **TCppPL:** Ch. 4 “Containers and Resource Management” / **EMC:** Item 17 (special members) | Wrap Day 3 array in a RAII class with destructor | Throw exception mid-operation → still no leaks |
| 5 | Smart Pointers | `unique_ptr`, `shared_ptr`, `weak_ptr`, ownership models | **CP:** §12.1.5 (Smart pointers) / **EMC:** Items 18–22 | Tree using smart pointers; intentional cycle + `weak_ptr` fix | Destructor logs confirm full cleanup; no leaks |
| 6 | Rule of 0/3/5 & Move Semantics | Copy/move ctor & assignment, when to define them | **CP:** §13.1, §13.6 (Copy/Move control) / **EMC:** Items 23–29 | `Buffer` class with logging in copy/move functions | Benchmark shows move significantly cheaper than copy |
| 7 | Review & Refactor | Refactor with modern idioms, consolidate patterns | (Revisit CP Ch. 2, 12–13; EMC Items 17–29) | Clean up Week 1 code (naming, RAII, smart pointers) | Commit with a short design note: what you changed & why |
| 8 | Templates | Function and class templates, basic instantiation | **CP:** Ch. 16 “Templates and Generic Programming” / **TCppPL:** Ch. 6 “Templates” | Convert dynamic array into `template<typename T> class Array` | Works with `int`, `std::string`, and a custom struct |
| 9 | Perfect Forwarding | Universal refs vs rvalue refs, `std::forward` | **EMC:** Items 23–28 (type deduction & forwarding) | Generic factory using forwarding: `make<T>(Args&&...)` | Successfully constructs move-only & copy-only types |
| 10 | Concepts | Compile-time constraints & better template errors | **TCppPL:** §6.5–6.6 “Concepts” | Add concepts to restrict Day 9 factory to arithmetic types | Passing invalid type yields clear compile-time error |
| 11 | Containers | Choosing between `vector`, `list`, `map`, `unordered_map` | **CP:** Ch. 9–11 (Sequential + Associative containers) / **TCppPL:** §7.1–7.6 | Benchmark insert + lookup for these containers | Short note summarizing best use-cases based on results |
| 12 | Algorithms | Using `<algorithm>` instead of hand-written loops | **CP:** Ch. 10 “Generic Algorithms” / **TCppPL:** §7.7 | Rewrite a loop-heavy function with `sort`, `transform`, `find_if`, `accumulate` | New version is shorter, clearer, and at least as fast |
| 13 | `optional` / `variant` / `expected`-style APIs | Representing absence & alternatives safely | **TCppPL:** §6.6 (“variant, optional, any”) + cppreference as needed | Config loader returning `std::optional` or `std::expected`-like type | No raw NULLs or magic error codes; usage is type-safe |
| 14 | Mini Project: Leaderboard | Integrate containers + algorithms | (Review CP Ch. 9–11, 10; TCppPL Ch. 7) | In-memory leaderboard: insert, update, top-K queries | Top-K queries run fast (< a few ms on moderate input) |
| 15 | `constexpr` | Compile-time evaluation; when to use it | **TCppPL:** §10.2 (“constexpr”) / **EMC:** Item 15 | Implement `constexpr` prime checker or FizzBuzz | Verified with `static_assert` and compiles |
| 16 | Type Traits & SFINAE | `type_traits`, `decltype`, detection idioms | **TCppPL:** §6.5 (“Type functions”) + cppreference `<type_traits>` | Implement `is_iterable<T>` using SFINAE/detection idiom | `static_assert` passes for containers, fails for `int` |
| 17 | Threads | Starting, joining, and coordinating threads | **TCppPL:** §12.1–12.3 “Basic threads” | Parallelize a CPU-bound loop with multiple threads | Multi-threaded version is measurably faster |
| 18 | Mutexes & Locks | `std::mutex`, `lock_guard`, `condition_variable` | **TCppPL:** §12.4 “Shared data and mutexes” | Implement producer–consumer queue | TSAN or careful reasoning shows no data races |
| 19 | async / future / promise | Higher-level async composition | **TCppPL:** §12.5–12.7 (“Tasks, async, futures”) | Build async pipeline: io → process → aggregate | Handles success and error paths without blocking main thread |
| 20 | Atomics & Memory Model | `std::atomic`, basic memory ordering intuition | **TCppPL:** §12.8–12.10 (“Atomics and memory model”) | Implement atomic counter and compare vs mutex counter | Bench/notes explaining behavior & tradeoffs |
| 21 | Thread Pool | Practical concurrency abstraction | (Review TCppPL Ch. 12; optional blogs on thread pools) | Implement a simple thread pool with task queue | Benchmarks show benefit for many small tasks |
| 22 | Data Layout & Cache | Alignment, padding, cache-friendliness | **TCppPL:** §17.1–17.3 (“Performance and structure”) | Compare a padded vs compact struct access pattern | Timing results + short explanation of difference |
| 23 | Custom Allocators | Arena/pool allocation concepts | **TCppPL:** §11.4 (“Allocators”) | Implement a basic arena allocator | Allocation from arena is faster than repeated `new` |
| 24 | STL + Allocator | Plugging custom allocators into STL | **CP:** Ch. 17 (Specialized Library Facilities – allocators) | Use custom allocator with `std::vector` or `std::map` | All usual operations work correctly under your allocator |
| 25 | File I/O & Streams | `fstream`, binary vs text I/O | **CP:** Ch. 8 “The IO Library” | Serialize + deserialize a struct in binary format | Round-trip preserves all field values across runs |
| 26 | Versioning & Compatibility | Designing for format evolution | (No single chapter; read about “binary compatibility” / versioning patterns) | Extend Day 25 format with V2 (extra fields, etc.) | Both V1 and V2 files load correctly in the new code |
| 27 | Sanitizers & Profiling | Using tools to harden code | **TCppPL:** §13.2–13.5 (“Debugging, testing, profiling”) | Compile with ASan/UBSan/TSan, run tests, fix issues | Clean sanitizer output and basic profile numbers captured |
| 28 | Capstone — TinyDB (WAL) | Durability & logging | (Review CP Ch. 8, allocator + RAII sections) | Implement a write-ahead log for key/value updates | After simulated crash, DB reconstructs consistent state |
| 29 | Capstone — TinyDB (Indexing + Cache) | Fast lookup & caching | (Review container, algorithm, and data layout topics) | Add in-memory index (hash or tree) + simple cache | Indexed queries are significantly faster than full scan |
| 30 | Capstone — TinyDB (Polish) | Integration, documentation, reflection | — | Finish DB: CLI or API, README, benchmarks, limitations | Public repo with README, build steps, example usage, perf summary |

