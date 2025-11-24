| # | Expression      | Value category (int) | Chosen overload | Why it picks that one                                                                                         |
| - | --------------- | -------------------- | --------------- | ------------------------------------------------------------------------------------------------------------- |
| 1 | `f(x)`          | lvalue               | `f(int&)`       | `x` is a non-const lvalue, best match is non-const lvalue ref.                                                |
| 2 | `f(cx)`         | const lvalue         | `f(const int&)` | `cx` is const, can’t bind to `int&`, so only `const int&` is viable.                                          |
| 3 | `f(10)`         | prvalue (temporary)  | `f(const int&)` | Temporaries can’t bind to non-const lvalue refs, but **can** bind to `const int&` (and lifetime is extended). |
| 4 | `f(x + 1)`      | prvalue (temporary)  | `f(const int&)` | Result of `x + 1` is a temporary → same rule as literals, binds to `const int&`.                              |
| 5 | `f(make_int())` | prvalue (temporary)  | `f(const int&)` | Return-by-value creates a temporary, which binds to `const int&`.                                             |

