<h2><a href="https://codeforces.com/contest/1541/problem/B" target="_blank" rel="noopener noreferrer">1541B — Pleasant Pairs</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1541B](https://codeforces.com/contest/1541/problem/B) |

## Topics
`brute force` `implementation` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Pleasant Pairs</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a_1, a_2, \dots, a_n$$$ consisting of $$$n$$$ <span class="tex-font-style-bf">distinct</span> integers. Count the number of pairs of indices $$$(i, j)$$$ such that $$$i  \lt  j$$$ and $$$a_i \cdot a_j = i + j$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases. Then $$$t$$$ cases follow.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$2 \leq n \leq 10^5$$$) — the length of array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ space separated integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq 2 \cdot n$$$) — the array $$$a$$$. It is guaranteed that all elements are <span class="tex-font-style-bf">distinct</span>.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the number of pairs of indices $$$(i, j)$$$ such that $$$i  \lt  j$$$ and $$$a_i \cdot a_j = i + j$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0027179631484029676" id="id0009628451037832308" class="input-output-copier">Copy</div></div><pre id="id0027179631484029676">3
2
3 1
3
6 1 5
5
3 1 5 9 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00020765727772563913" id="id009397353223484242" class="input-output-copier">Copy</div></div><pre id="id00020765727772563913">1
1
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first test case, the only pair that satisfies the constraints is $$$(1, 2)$$$, as $$$a_1 \cdot a_2 = 1 + 2 = 3$$$</p><p>For the second test case, the only pair that satisfies the constraints is $$$(2, 3)$$$.</p><p>For the third test case, the pairs that satisfy the constraints are $$$(1, 2)$$$, $$$(1, 5)$$$, and $$$(2, 3)$$$.</p></div>