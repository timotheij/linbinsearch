# linbinsearch
Implementation of linear search and binary search as described in Khan Academy's "Algorithms" course.

## Linear search
Linear search works by checking every element in the list until a match is found.

### Time complexity
Linear search grows, as the name suggests, linearly with the input length `n`.

We can say that linear search runs in &theta;(n) time. That is its worst-case asymptotic running time is tighly bound by `n`.

We can also say that linear search runs in O(n) time. That is its asymptotic running time is at most `n`. That is its upper bound is `n`. It could run in less time than `n` (for example when the target is the first element in the array).

We could even say that linear search runs in O(n<sup>2</sup>) time. The running time will be upper bound by O(n<sup>2</sup>). This is not very precise; linear search runs much quicker than O(n<sup>2</sup>).

Similarly &omega; can be used to the describe the asymptotic lower bound of an algorithm. &theta;(n) also implies &omega;(n). We can make very imprecise statements with &omega; as well. Linear search can also be said to run in &omega;(1) time. Linear search always runs in at least constant time, but almost always runs slower than that.

What tripped me up the first time is that &theta;, O, and &omega; are **not** related to best-, average-, or worst-case analysis. These functions can be used for every kind of analysis. If it is not specified then worst-case is usually implied.

## Binary search
Binary search works by keeping a min and a max index, initially set at 1 and n-1 respectively, and then picking the element in the middle of min and max. If this middle element is the target then return the target. If the guess is lower then raise the min variable by guess + 1, if the guess is higher then lower the max variable by guess - 1.

### Time complexity
Effectively binary search keeps dividing the input in half until it finds a match. The worst-case running time therefore grows with log<sub>2</sub>n.

Therefore the worst-case running time of binary search is &theta;(log<sub>2</sub>n). We can also say that the worst-case running time is O(log<sub>2</sub>n) or &omega;(log<sub>2</sub>n).

