# 🚀 30-Day Modern C++ Bootcamp (Summary Version)

This is a compact execution plan — one topic per day, with reading, a task, and a proof of mastery.  
Use this daily as a checklist.

---

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
| 1 | Value Categories & References | lvalue/rvalue behavior | CP §2.2–2.3 / TCppPL §1.3 | Overload resolution demo | Table mapping expression→overload |
| 2 | Const Correctness | const, mutable, const_cast | CP §2.4 / EMC Item 21 | Lazy loader class | Justify const/mutable usage |
| 3 | Raw Memory | Pointer arithmetic, new/delete | CP §12.1 | Manual dynamic array | No leaks under sanitizer |
| 4 | RAII | Safety & deterministic cleanup | TCppPL §4.2 | Convert array into RAII class | Exception safety verified |
| 5 | Smart Pointers | unique/shared/weak ownership | EMC Items 18–22 / CP §12.1.5 | Tree with pointers | Cycles fixed using weak_ptr |
| 6 | Rule of 0/3/5 | Copy/move lifecycle | EMC Items 23–29 / CP §13.6 | Buffer class (copy+move) | Move > Copy performance |
| 7 | Review | Pattern reinforcement | — | Refactor week’s code | Commit with notes |
| 8 | Templates | Generic programming | CP Ch. 16 / TCppPL §6 | Template container | Works with int/string/custom type |
| 9 | Perfect Forwarding | universal refs, std::forward | EMC Items 23–28 | Forwarding factory | Move-only + copy-only success |
| 10 | Concepts | Compile-time constraints | TCppPL §5 | Restrict API using concepts | Clear compile-time diagnostics |
| 11 | Containers | STL tradeoffs | CP Ch. 9–11 / TCppPL §7 | Benchmark common containers | Best-use rule written |
| 12 | Algorithms | Intent > loops | CP §10 / TCppPL §7.7 | Rewrite logic using STL | Faster & cleaner |
| 13 | optional/variant/expected | Safer API patterns | TCppPL §6.6 | Config loader with expected | No null/exceptions |
| 14 | Mini Project | Integration | — | In-memory leaderboard | Top-K query <2ms |
| 15 | constexpr | Compile-time compute | TCppPL §10.2 / EMC Item 15 | constexpr prime/FizzBuzz | static_assert passes |
| 16 | Type Traits & SFINAE | Compile-time reflection | TCppPL §6.5 | is_iterable<T> trait | static_assert validation |
| 17 | Threads | Running parallel work | CP §19.1 / TCppPL §12.1 | Parallel compute | Faster than single-thread |
| 18 | Locks | Shared state correctness | TCppPL §12.4 | Producer-consumer queue | No races in TSAN |
| 19 | async/future/promise | Structured concurrency | TCppPL §12.5 | Async pipeline | Error handling included |
| 20 | Atomics & Memory Model | Lock-free foundations | TCppPL §12.8 | Atomic counter benchmark | Behavior analysis written |
| 21 | Thread Pool | Practical concurrency model | — | Thread pool | Benchmarked vs sequential |
| 22 | Data Layout & Cache | Struct packing/alignment | TCppPL §17.1 | Compare padded vs tight struct | Measured difference |
| 23 | Custom Allocators | Memory control | TCppPL §11.4 | Arena allocator | Faster than new/delete |
| 24 | STL + Allocator | Ownership at scale | CP §17.5 | Vector using allocator | Full STL functionality |
| 25 | File I/O | Serialization/persistence | CP Ch. 8 | Binary save/load struct | Verified round-trip |
| 26 | Versioning | Forward compatibility | — | Support V1 + V2 formats | Both load correctly |
| 27 | Profiling & Sanitizers | Engineering hygiene | TCppPL §13 | Fix ASAN/TSAN/UBSAN | Clean result |
| 28 | Capstone — DB (WAL) | Real-world durability | — | Write Ahead Log | Survives restart |
| 29 | Capstone — DB (Index + cache) | Systems thinking | — | Add index + caching | Benchmarks improve |
| 30 | Capstone — Final | Polish & documentation | — | Final DB + README + Benchmarks | Push + write reflection |

---

### ✔ Completion Meaning

After completing this table you will have:

- Solid modern C++ foundation  
- Concurrency and memory competency  
- A real project: **TinyDB** — portfolio-ready  
- A repeatable pattern to continue mastery  

---

> **Don’t rush. The goal isn’t finishing — it’s retaining.**  
