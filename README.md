# Introduction to Algorithms, A creative approach

Codes for Introduction to Algorithms, a book by Udi.Manber, [download](https://raw.githubusercontent.com/samaritanhu/Introduction-to-Algorithms/book/算法引论%20一种创造性方法.pdf) from Chapter 5 to ...(TBD)

The book takes up 41.9MB space and may slow down the speed of cloning. So, we put it in a standalone branch. You can clone only master branch for better speed.

Clone `master` branch only:  

```sh
git clone https://github.com/samaritanhu/Introduction-to-Algorithms.git -b master --single-branch
```

## Usage

* For Python: run the 'ipynb' file in jupyter notebook [![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/samaritanhu/Introduction-to-Algorithms/master?urlpath=tree%2Fcodes%2Fpython)
* For C#: In this repo, every example has a class file and you can include it in your project. For the full Visual Studio project files and tests, please visit [qcmiao1998/Introduction-to-Algorithms-Csharp-Codes](https://github.com/qcmiao1998/Introduction-to-Algorithms-Csharp-Codes).

## Table of Contents

<details>
<summary><strong>V1 — original Chapter 5-6 subset (click to expand)</strong></summary>

* **Chapter 5 Design of algorithms by introdution**

| Chapter 5                                                        | C                                         | Python                                                 | MATLAB                                                 | Java                                                       | C#                                                                  |
|------------------------------------------------------------------|-------------------------------------------|--------------------------------------------------------|--------------------------------------------------------|------------------------------------------------------------|---------------------------------------------------------------------|
| Example 5.2: Evaluating Polynomials                              | [C](codes/C/Chapter%205/Example_5.2.c)    | [Python](codes/python/Chapter%205/Example%205.2.ipynb) | [MATLAB](codes/matlab/Chapter%205/Example%205.2.m) | [Java](codes/java/Chapter5/5.1/EvaluatingPolynomials.java) | [C#](codes/csharp/Chapter_5/5_2_Evaluating_Polynomials.cs)          |
| Example 5.3: Maximal Induced Subgraph                            | [C](codes/C/Chapter%205/Example_5.3.c)    | [Python](codes/python/Chapter%205/Example%205.3.ipynb) |                                                        | [Java](codes/java/Chapter5/5.3/MaximalInducedSubgraph.java) |                                                                     |
| Example 5.4: Finding One-to-One Mappings                         | [C](codes/C/Chapter%205/Example_5.4.c)    | [Python](codes/python/Chapter%205/Example%205.4.ipynb) |                                                        |                                                            | [C#](codes/csharp/Chapter_5/5_4_Algorithm_Mapping.cs)               |
| Example 5.5: The Celebrity Problem                               | [C](codes/C/Chapter%205/Example_5.5.c)    | [Python](codes/python/Chapter%205/Example%205.5.ipynb) |                                                        |                                                            | [C#](codes/csharp/Chapter_5/5_5_Algorithm_Celebrity.cs)             |
| Example 5.6: A Divide-and-Conquer Algorithm: The Skyline Problem |                                           |                                                        |                                                        |                                                            |                                                                     |
| Example 5.7: Computing Balance Factors in Binary Trees           |                                           |                                                        |                                                        |                                                            |                                                                     |
| Example 5.8: Finding the Maximum Consecutive Subsequence         | [C](codes/C/Chapter%205/Example_5.8.c)    | [Python](codes/python/Chapter%205/Example%205.8.ipynb) |                                                        |                                                            | [C#](codes/csharp/Chapter_5/5_8_Maximum_Consecutive_Subsequence.cs) |
| Example 5.9: Strengthening the Induction Hypothesis              |                                           |                                                        |                                                        |                                                            |                                                                     |
| Example 5.10: Dynamic Programming: The Knapsack Problem          | [C](codes/C/Chapter%205/Example_5.10.c)   |                                                        |                                                        |                                                            |                                                                     |

* **Chapter 6 Algorithms involving sequences and sets**

| Chapter 6                                                          | C | Python                                                 | MATLAB | Java | C#                                                                     |
|--------------------------------------------------------------------|---|--------------------------------------------------------|--------|------|------------------------------------------------------------------------|
| Example 6.2: Binary Search and Variations                          |   | [Python](codes/python/Chapter%206/Example%206.2.1.ipynb) |        |      | [C#](codes/csharp/Chapter_6/6_2_Binary_Search_and_Variations.cs)       |
| Example 6.3: Interpolation Search                                  |   |                                                        |        |      | [C#](codes/csharp/Chapter_6/6_3_Interpolation_Search.cs)               |
| Example 6.5.1: Order Statistics - Maximum and Minimum Elements     |   |                                                        |        |      |                                                                        |
| Example 6.5.2: Order Statistics - Finding the kth-Smallest Element |   |                                                        |        |      | [C#](codes/csharp/Chapter_6/6_5_2_Finding_the_kth_Smallest_Element.cs) |
| Example 6.6: Data Compression                                      |   |                                                        |        |      |                                                                        |
| Example 6.7: String Matching                                       |   |                                                        |        |      |                                                                        |
| Example 6.8: Sequence Comparasion                                  |   |                                                        |        |      |                                                                        |
| Example 6.9.1: Probabilistic Algorithms - Random Numbers           |   |                                                        |        |      |                                                                        |
| Example 6.9.2: Probabilistic Algorithms - A Coloring Problem       |   |                                                        |        |      |                                                                        |
| Example 6.10: Finding a Majority                                   |   |                                                        |        |      |                                                                        |
| Example 6.11.1: Longest Increasing Subsequence                     |   |                                                        |        |      |                                                                        |
| Example 6.11.2: Finding the Two Largest Elements in a Set          |   |                                                        |        |      |                                                                        |
| Example 6.11.3: Computing the Mode of a Multiset                   |   |                                                        |        |      |                                                                        |

</details>

### V2 — full roadmap, Chapters 1-12

Source: 《算法引论——一种创造性方法》(Manber, *Introduction to Algorithms: A Creative Approach*, Chinese translation), full table of contents. Covers every numbered example in the book, not just Chapter 5-6.

Rules for V2, different from V1:

* Python only. No C/Java/C#/MATLAB for new entries.
* Two notebooks per example: `Example X.Y (EN).ipynb` and `Example X.Y (ZH).ipynb` — same algorithm, one in English, one in Chinese.
* One example a day, book order, starting from Chapter 1. This table is the roadmap, not a claim that everything below is done.
* Chapter 5 rows already covered in V1 (5.2, 5.3, 5.4, 5.5, 5.8, 5.10) are marked done here and link back to V1, not duplicated.
* Some sections are theorem-and-induction-proof, not an algorithm (marked *proof*). Whether these get code (e.g. a numeric checker) or stay notes-only is decided on the day we reach them.

Legend: ✅ done · ⬜ pending · 🧮 proof-style section, code TBD

#### Chapter 1 — Introduction (引论)

Conceptual chapter, no worked examples to implement.

#### Chapter 2 — Mathematical Induction (数学归纳法)

| # | Example | EN | ZH | Note |
|---|---|---|---|---|
| 2.2 | Three Simple Examples 三个简单的例子 | ⬜ | ⬜ | |
| 2.3 | Counting Regions in the Plane 平面内区域的计数 | ⬜ | ⬜ | |
| 2.4 | A Simple Coloring Problem 简单的着色问题 | ⬜ | ⬜ | |
| 2.5 | A More Complex Summation Problem 复杂一些的加法题 | ⬜ | ⬜ | |
| 2.6 | A Simple Inequality 一个简单的不等式 | ⬜ | ⬜ | 🧮 |
| 2.7 | Euler's Formula 欧拉公式 | ⬜ | ⬜ | 🧮 |
| 2.8 | A Problem in Graph Theory 图论中的一个问题 | ⬜ | ⬜ | |
| 2.9 | Gray Code 格雷码 | ⬜ | ⬜ | |
| 2.10 | Finding a Repeated-Edge-Free Walk in a Graph 在图上寻找无重边的路 | ⬜ | ⬜ | Euler path |
| 2.11 | The AM-GM Theorem 数学平均数和几何平均数定理 | ⬜ | ⬜ | 🧮 |
| 2.12 | Loop Invariant: Decimal to Binary 循环不变量:将十进制数转换为二进制数 | ⬜ | ⬜ | |

#### Chapter 3 — Algorithm Analysis (算法分析)

| # | Example | EN | ZH | Note |
|---|---|---|---|---|
| 3.4 | Summation 求和 | ⬜ | ⬜ | 🧮 |
| 3.5.1 | Clever Guessing 巧妙地猜测 | ⬜ | ⬜ | 🧮 |
| 3.5.2 | Divide-and-Conquer Recurrences 分治关系 | ⬜ | ⬜ | 🧮 |
| 3.5.3 | Full-History Recurrences 涉及全部历史的递推关系 | ⬜ | ⬜ | 🧮 |

#### Chapter 4 — Introduction to Data Structures (数据结构简介)

| # | Example | EN | ZH | Note |
|---|---|---|---|---|
| 4.3.2 | Heap 堆 | ⬜ | ⬜ | |
| 4.3.3 | Binary Search Tree 二叉搜索树 | ⬜ | ⬜ | |
| 4.3.4 | AVL Tree AVL树 | ⬜ | ⬜ | |
| 4.4 | Hashing 散列 | ⬜ | ⬜ | |
| 4.5 | Union-Find 合并-查找问题 | ⬜ | ⬜ | |

#### Chapter 5 — Design of Algorithms by Induction (基于归纳的算法设计)

| # | Example | EN | ZH | Note |
|---|---|---|---|---|
| 5.2 | Evaluating Polynomials 多项式求值 | ✅ | ⬜ | done in V1 (no EN/ZH split) |
| 5.3 | Maximal Induced Subgraph 最大导出子图 | ✅ | ⬜ | done in V1 (no EN/ZH split) |
| 5.4 | Finding One-to-One Mappings 寻找一对一映射 | ✅ | ⬜ | done in V1 (no EN/ZH split) |
| 5.5 | The Celebrity Problem 社会名流问题 | ✅ | ⬜ | done in V1 (no EN/ZH split) |
| 5.6 | Divide-and-Conquer: the Skyline Problem 分治算法:轮廓问题 | ⬜ | ⬜ | |
| 5.7 | Computing Balance Factors in Binary Trees 在二叉树中计算平衡因子 | ⬜ | ⬜ | |
| 5.8 | Finding the Maximum Consecutive Subsequence 寻找最大连续子序列 | ✅ | ⬜ | done in V1 (no EN/ZH split) |
| 5.9 | Strengthening the Induction Hypothesis 增强归纳假设 | ⬜ | ⬜ | 🧮 |
| 5.10 | Dynamic Programming: the Knapsack Problem 动态规划:背包问题 | ✅ | ⬜ | done in V1 (Python not yet, only C) |

#### Chapter 6 — Algorithms Involving Sequences and Sets (序列和集合的算法)

| # | Example | EN | ZH | Note |
|---|---|---|---|---|
| 6.2.1 | Pure Binary Search 纯二叉搜索 | ✅ | ⬜ | done in V1 (no EN/ZH split) |
| 6.2.2 | Binary Search on a Circular Sequence 循环序列的二叉搜索 | ⬜ | ⬜ | |
| 6.2.3 | Binary Search with Special Indices 二叉搜索特殊下标 | ⬜ | ⬜ | |
| 6.2.4 | Binary Search on a Sequence of Unknown Length 二叉搜索长度未知的序列 | ⬜ | ⬜ | |
| 6.2.5 | Overlapping Subsequence Problem 重叠子序列问题 | ⬜ | ⬜ | |
| 6.2.6 | Solving Equations 解方程 | ⬜ | ⬜ | |
| 6.3 | Interpolation Search 内插搜索 | ⬜ | ⬜ | C#/EN Python not yet ported |
| 6.4.1 | Bucket Sort and Radix Sort 桶排序和基数排序 | ⬜ | ⬜ | |
| 6.4.2 | Insertion Sort and Selection Sort 插入排序和选择排序 | ⬜ | ⬜ | |
| 6.4.3 | Merge Sort 归并排序 | ⬜ | ⬜ | |
| 6.4.4 | Quicksort 快速排序 | ⬜ | ⬜ | |
| 6.4.5 | Heapsort 堆排序 | ⬜ | ⬜ | |
| 6.4.6 | Lower Bounds for Sorting 排序问题的下界 | ⬜ | ⬜ | 🧮 |
| 6.5.1 | Order Statistics: Max and Min 最大数和最小数 | ⬜ | ⬜ | |
| 6.5.2 | Order Statistics: kth-Smallest Element 查找第k小的数 | ⬜ | ⬜ | C# Python not yet ported |
| 6.6 | Data Compression 数据压缩 | ⬜ | ⬜ | |
| 6.7 | String Matching 串匹配 | ⬜ | ⬜ | |
| 6.8 | Sequence Comparison 序列比较 | ⬜ | ⬜ | edit distance |
| 6.9.1 | Probabilistic Algorithms: Random Numbers 随机数 | ⬜ | ⬜ | |
| 6.9.2 | Probabilistic Algorithms: A Coloring Problem 着色问题 | ⬜ | ⬜ | |
| 6.9.3 | Las Vegas to Deterministic 将拉斯维加斯算法变换成确定性算法 | ⬜ | ⬜ | |
| 6.10 | Finding a Majority 查找众数 | ⬜ | ⬜ | Boyer-Moore majority vote |
| 6.11.1 | Longest Increasing Subsequence 最长递增序列 | ⬜ | ⬜ | |
| 6.11.2 | Finding the Two Largest Elements 查找集合中两个最大的元素 | ⬜ | ⬜ | |
| 6.11.3 | Mode of a Multiset 计算多重集合的模 | ⬜ | ⬜ | |

#### Chapter 7 — Graph Algorithms (图算法)

| # | Example | EN | ZH | Note |
|---|---|---|---|---|
| 7.2 | Eulerian Graphs 欧拉图 | ⬜ | ⬜ | |
| 7.3.1 | Depth-First Search 深度优先搜索 | ⬜ | ⬜ | |
| 7.3.2 | Breadth-First Search 广度优先搜索 | ⬜ | ⬜ | |
| 7.4 | Topological Sort 拓扑排序 | ⬜ | ⬜ | |
| 7.5 | Single-Source Shortest Paths 单源最短路径 | ⬜ | ⬜ | Dijkstra/Bellman-Ford |
| 7.6 | Minimum-Cost Spanning Trees 最小代价生成树 | ⬜ | ⬜ | Prim/Kruskal |
| 7.7 | All-Pairs Shortest Paths 全部最短路径 | ⬜ | ⬜ | Floyd-Warshall |
| 7.8 | Transitive Closure 传递闭包 | ⬜ | ⬜ | |
| 7.9.1 | Biconnected Components 双连通分支 | ⬜ | ⬜ | |
| 7.9.2 | Strongly Connected Components 强连通分支 | ⬜ | ⬜ | |
| 7.9.3 | Applications of Graph Decomposition 利用图分解的例子 | ⬜ | ⬜ | |
| 7.10.1 | Perfect Matching in Dense Graphs 非常稠密图中的完美匹配 | ⬜ | ⬜ | |
| 7.10.2 | Bipartite Matching 偶图匹配 | ⬜ | ⬜ | |
| 7.11 | Network Flow 网络流量 | ⬜ | ⬜ | |
| 7.12.1 | Reverse Induction 反向归纳 | ⬜ | ⬜ | |
| 7.12.2 | Hamiltonian Cycles in Dense Graphs 在非常稠密图中找哈密尔顿回路 | ⬜ | ⬜ | |

#### Chapter 8 — Geometric Algorithms (几何算法)

| # | Example | EN | ZH | Note |
|---|---|---|---|---|
| 8.2 | Point-in-Polygon Test 判定点是否在多边形内部 | ⬜ | ⬜ | |
| 8.3 | Constructing a Simple Polygon 构造简单多边形 | ⬜ | ⬜ | |
| 8.4.1 | Convex Hull: Direct Method 直接方法 | ⬜ | ⬜ | |
| 8.4.2 | Convex Hull: Gift Wrapping 礼品包裹算法 | ⬜ | ⬜ | |
| 8.4.3 | Convex Hull: Graham Scan Graham扫描算法 | ⬜ | ⬜ | |
| 8.5 | Closest Pair of Points 最近点对 | ⬜ | ⬜ | |
| 8.6 | Intersections of Horizontal and Vertical Segments 水平线段和竖直线段的交点 | ⬜ | ⬜ | |

#### Chapter 9 — Algebraic and Numerical Algorithms (代数和数值算法)

| # | Example | EN | ZH | Note |
|---|---|---|---|---|
| 9.2 | Exponentiation 求幂运算 | ⬜ | ⬜ | |
| 9.3 | Euclid's Algorithm 欧几里得算法 | ⬜ | ⬜ | |
| 9.4 | Polynomial Multiplication 多项式乘法 | ⬜ | ⬜ | |
| 9.5.1 | Winograd's Algorithm Winograd算法 | ⬜ | ⬜ | matrix multiplication |
| 9.5.2 | Strassen's Algorithm Strassen算法 | ⬜ | ⬜ | matrix multiplication |
| 9.5.3 | Boolean Matrices 布尔矩阵 | ⬜ | ⬜ | |
| 9.6 | Fast Fourier Transform 快速傅里叶变换 | ⬜ | ⬜ | |

#### Chapter 10 — Reductions (归约)

| # | Example | EN | ZH | Note |
|---|---|---|---|---|
| 10.2.1 | Simple String Matching 简单字符串匹配问题 | ⬜ | ⬜ | |
| 10.2.2 | Special Representative Sets 特殊代表集 | ⬜ | ⬜ | |
| 10.2.3 | Reduction to Sequence Comparison 关于序列比较的归约 | ⬜ | ⬜ | |
| 10.2.4 | Finding Triangles in an Undirected Graph 在无向图中寻找三角形 | ⬜ | ⬜ | |
| 10.3.2 | Reductions to Linear Programming 归约到线性规划的例子 | ⬜ | ⬜ | 🧮 |
| 10.4.1 | Lower Bound for Simple-Polygon Algorithms 寻找简单多边形算法复杂度的下界 | ⬜ | ⬜ | 🧮 |
| 10.4.2 | A Simple Reduction on Matrices 关于矩阵的简单归约 | ⬜ | ⬜ | 🧮 |

#### Chapter 11 — NP-Complete Problems (NP完全问题)

| # | Example | EN | ZH | Note |
|---|---|---|---|---|
| 11.4.1 | Vertex Cover 顶点覆盖问题 | ⬜ | ⬜ | reduction, 🧮 |
| 11.4.2 | Dominating Set 支配集问题 | ⬜ | ⬜ | reduction, 🧮 |
| 11.4.3 | 3SAT 3SAT问题 | ⬜ | ⬜ | reduction, 🧮 |
| 11.4.4 | Clique 团问题 | ⬜ | ⬜ | reduction, 🧮 |
| 11.4.5 | 3-Coloring 3着色问题 | ⬜ | ⬜ | reduction, 🧮 |
| 11.5.1 | Backtracking and Branch-and-Bound 回溯法和分枝限界法 | ⬜ | ⬜ | codeable (e.g. N-Queens/SAT backtracking) |
| 11.5.2 | Performance-Guaranteed Approximation Algorithms 确保性能的近似算法 | ⬜ | ⬜ | codeable (e.g. vertex cover 2-approx) |

#### Chapter 12 — Parallel Algorithms (并行算法)

| # | Example | EN | ZH | Note |
|---|---|---|---|---|
| 12.3.1 | Parallel Addition 并行加 | ⬜ | ⬜ | simulated in Python |
| 12.3.2 | Finding the Maximum in Parallel 寻找最大数的算法 | ⬜ | ⬜ | simulated in Python |
| 12.3.3 | Parallel Prefix 并行前缀问题 | ⬜ | ⬜ | simulated in Python |
| 12.3.4 | Ranking in a Linked List 在链表中查寻秩 | ⬜ | ⬜ | simulated in Python |
| 12.3.5 | Euler Tour Technique 欧拉遍历技术 | ⬜ | ⬜ | simulated in Python |
| 12.4.1 | Sorting on Arrays 阵列上的排序 | ⬜ | ⬜ | simulated in Python |
| 12.4.2 | Sorting Networks 排序网络 | ⬜ | ⬜ | simulated in Python |
| 12.4.3 | Finding the kth-Smallest in a Tree Network 在树中查找第k个最小元素 | ⬜ | ⬜ | simulated in Python |
| 12.4.4 | Matrix Multiplication on a Mesh 网孔上的矩阵乘法 | ⬜ | ⬜ | simulated in Python |
| 12.4.5 | Routing on a Hypercube 超立方体中的路由 | ⬜ | ⬜ | simulated in Python |
| 12.5.1 | Systolic Matrix-Vector Multiplication 矩阵与向量相乘 | ⬜ | ⬜ | simulated in Python |
| 12.5.2 | Systolic Convolution 卷积问题 | ⬜ | ⬜ | simulated in Python |
| 12.5.3 | Systolic Sequence Comparison 序列的比较 | ⬜ | ⬜ | simulated in Python |

## Contribution  

* [SmallY](https://github.com/iamSmallY) for codes of C
* [Yhx](https://github.com/18918606287) for codes of Java
* [Q. Miao](https://github.com/qcmiao1998) for codes of C#
* [Dalao](https://github.com/johnnychen94)
