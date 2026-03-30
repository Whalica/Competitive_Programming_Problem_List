## Ad-hoc

- [Codeforces Round 1088 C2](https://codeforces.com/contest/2211/problem/C2)

模型简化：给定两个长度为 $n$ 的数组 $a, b$ $(1\le n\le 2\times 10^5, 1\le a_i\le n, 1\le b_i\le n$ 或 $b_i = -1)$ 和一个整数 $k$ $(1\le k\le n)$，你需要判断对于所有满足 $1\le i\le j\le n$ 且 $j - i + 1 = k$ 的整数对 $(i, j)$，数组 $[b_i, b_{i + 1}, \cdots, b_{j - 1}, b_j]$ 在将 $-1$ 填为任意 $[1, n]$ 的整数后，是否都能经过重排变为数组 $[a_i, a_{i + 1}, \cdots, a_{j - 1}, a_j]$ 。

评价：注意窗口滑动时元素的变化，维护对应量。
