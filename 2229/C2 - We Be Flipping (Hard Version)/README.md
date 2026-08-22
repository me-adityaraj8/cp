<h2><a href="https://codeforces.com/contest/2229/problem/C2" target="_blank" rel="noopener noreferrer">2229C2 — We Be Flipping (Hard Version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2229C2](https://codeforces.com/contest/2229/problem/C2) |

## Topics
`constructive algorithms` `dp` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C2. We Be Flipping (Hard Version)</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>  </p><p><span class="tex-font-style-bf">This is the hard version of the problem. The difference between the versions is that in this version, you must maximise the sum. You can hack only if you solved all versions of this problem.</span> </p><p>You have an array $$$a$$$ of length $$$n$$$ which consists of non-zero (but possibly negative) integers. You will perform the following operation at most $$$n$$$ times (possibly none):</p><ul> <li> select an index $$$i$$$ ($$$1 \le i \le n$$$) such that $$$a_i  \gt  0$$$ </li><li> then for each $$$j$$$ where $$$1 \le j \le i$$$ do $$$a_j := -a_j$$$. </li></ul><p>Output a valid sequence of operations of length at most $$$n$$$ which $$$\color{red}{\text{maximises}}$$$ the sum of $$$a$$$ at the end.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows. </p><p>The first line of each testcase contains an integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the length of the array $$$a$$$.</p><p>The second line of each testcase contains $$$n$$$ integers $$$a_1,a_2,\ldots,a_n$$$ ($$$-10^9 \le a_i \le 10^9, a_i \ne 0$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$. </p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, output a single integer $$$k$$$ ($$$0 \le k \le n$$$) — the number of operations you will perform.</p><p>Now output $$$k$$$ integers $$$b_1,\ldots,b_k$$$ where $$$b_i$$$ is the index you perform the $$$i$$$th operation on.</p><p>After performing the operations the sum of $$$a$$$ should be maximal.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009732888483471849" id="id0031814180603359077" class="input-output-copier">Copy</div></div><pre id="id009732888483471849"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-odd test-example-line-1">-1 -2 -3 -5 -4</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-even test-example-line-2">5 7 10 19</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-odd test-example-line-3">1 -3 2 -1 10</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-even test-example-line-4">16 -13 -18 -16</div><div class="test-example-line test-example-line-odd test-example-line-5">11</div><div class="test-example-line test-example-line-odd test-example-line-5">2 -10 -11 3 -10 15 7 18 16 17 -9</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0021311893754943378" id="id0004409657863127914" class="input-output-copier">Copy</div></div><pre id="id0021311893754943378">0

0

2
1 3
0

6
6 3 1 5 4 7
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first testcase, no operations are possible.</p><p>In the second testcase, the sum is already maximal.</p><p>In the third testcase, operations are made as follows: </p><ul> <li> $$$[1, -3, 2, -1, 10] \xrightarrow{i = 1} [\color{red}{-1}, -3, 2, -1, 10]$$$ </li><li> $$$[-1, -3, 2, -1, 10] \xrightarrow{i = 3} [\color{red}{1, 3, -2}, -1, 10]$$$ </li></ul><p>This has sum $$$11$$$, which can be proven to be maximal.</p></div>