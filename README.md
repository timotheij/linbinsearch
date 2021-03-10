# linbinsearch
Implementation of linear search and binary search as described in Khan Academy's "Algorithms" course.

## Linear search
Linear search works by checking every element in the list until a match is found.
### Time complexity
Linear search grows, as the name suggests, linearly with the input length `n`.

Therefore:

Linear search runs in &theta;(n) time. That is its asymptotic running time is tighly bound by `n`.

We can also say that linear search runs in O(n) time. That is its asymptotic running time is at most `n`. That is its upper bound is `n`. It could run in less time than `n` (for example when the target is the first element in the array).

We could even say that linear search runs in O(n<sup>2</sup>) time. The running time will be upper bound by O(n<sup>2</sup>). This is not very precise; linear search runs much quicker than O(n<sup>2</sup>).
## Binary search
### Time complexity
