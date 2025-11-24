# 🗂️ 30-Day Modern C++ Bootcamp — Summary Table

| Day | Topic | Learn | Read | Task | Proof |
|-----|--------|--------|--------|--------|--------|
| 1 | Value Categories & References | lvalue/rvalue behavior | CP §2.2-2.3 / Tour 1.3 | Overload resolution demo | Table mapping expression → overload |
| 2 | Const Correctness | const, mutable, const_cast roles | CP §2.4 / EMC Item 21 | Lazy-loaded object | Justify use of const/mutable |
| 3 | Raw Memory | Pointer arithmetic, new/delete | CP §12.1 | Manual dynamic array | No leaks under sanitizer |
| 4 | RAII | Deterministic cleanup and safety | Tour §4.2 | Convert array into RAII class | Exception doesn’t leak |
| 5 | Smart Pointers | unique_ptr, shared_ptr, weak_ptr | EMC Items 18–22 | Build Node tree | Cycles fixed using weak_ptr |
| 6 | Rule of 0/3/5 | Copy/move lifecycle | EMC 23–29 | Buffer with move+copy logging | Move faster than copy (bench) |
| 7 | Review | Patterns + cleanup | — | Refactor Week 1 | Commit with reasoning notes |
| 8 | Templates | Generic programming | CP Ch. 16 | Template dynamic array | Works with int/string/custom type |
| 9 | Perfect Forwarding | universal refs, std::forward | EMC Items 23–28 | Factory using forwarding | Move-only + copy-only success |
| 10 | Concepts | Compile-time constraints | Tour §5 | Restrict API using concepts | Clear compile-time error message |
| 11 | Containers | Vector/map/list/unordered_map | CP Ch. 9–11 | Benchmark lookups/inserts | Best-case use reasoning written |
| 12 | Algorithms | STL mindset > loops | CP §10 / Tour §7.7 | Rewrite loop-heavy logic | Faster + shorter code |
| 13 | optional/variant/expected | Safe API return types | Tour §6.6 | Config loader using expected | No null, no exceptions |
| 14 | Mini Project | Integrate week skills | — | In-memory leaderboard | Top-K < 2ms |
| 15 | constexpr | Compile-time compute | Tour §10.2 | constexpr FizzBuzz or prime | static_assert verifies |
| 16 | Type Traits + SFINAE | Type-level reasoning | Tour §6.5 | Implement is_iterable<T> | Works for vector but not int |
| 17 | Threads | Running work in parallel | CP §19.1 | Multi-thread workload | Faster than single-thread |
| 18 | Mutex & Locks | Shared state correctness | Tour §12.4 | Producer-consumer queue | No races in TSAN |
| 19 | async/future/promise | Structured concurrency | Tour §12.5 | Async pipeline with chaining | Works with error handling |
| 20 | Atomics & Memory Model | Lock-free basics | Tour §12.8 | Atomic counter + benchmark | Behavior difference documented |
| 21 | Thread Pool | Practical parallel model | — | Implement thread pool | Benchmarked vs no pool |
| 22 | Data Layout & Cache | Alignment, padding | Tour §17.1 | Compare padded vs tight struct | Measured speed diff |
| 23 | Custom Allocators | Memory efficiency | Tour §11.4 | Arena allocator | Faster allocation |
| 24 | STL with Allocator | Ownership at scale | CP §17.5 | Use allocator with vector/map | Works with STL operations |
| 25 | Binary IO | Serialization | CP Ch. 8 | Binary save/load struct | Round-trip correctness |
| 26 | Versioning | Backward compatibility | — | Support format V1 + V2 | Old and new load fine |
| 27 | Profiling & Sanitizers | Engineering discipline | Tour §13 | Fix ASAN/TSAN/UB reports | Clean reports |
| 28 | Capstone (TinyDB) | Logs, pages, indexing | — | DB WAL + index | Survives restart |
| 29 | Capstone 2 | Integration + polish | — | Add concurrency + allocator | Benchmarked |
| 30 | Capstone Final | Real engineering mindset | — | Final validate + docs | README + benchmarks + reflection |

