<h2><a href="https://codeforces.com/contest/1987/problem/C" target="_blank" rel="noopener noreferrer">1987C — Basil's Garden</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1987C](https://codeforces.com/contest/1987/problem/C) |

## Topics
`dp` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Basil's Garden</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are $$$n$$$ flowers in a row, the $$$i$$$-th of them initially has a positive height of $$$h_i$$$ meters.</p><p>Every second, the wind will blow from the left, causing the height of some flowers to decrease.</p><p>Specifically, every second, for each $$$i$$$ from $$$1$$$ to $$$n$$$, in this order, the following happens: </p><ul> <li> If $$$i = n$$$ or $$$h_i  \gt  h_{i + 1}$$$, the value of $$$h_i$$$ changes to $$$\max(0, h_i - 1)$$$. </li></ul><p>How many seconds will pass before $$$h_i=0$$$ for all $$$1 \le i \le n$$$ for the first time?</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line of input contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — the number of flowers.</p><p>The second line of each test case contains $$$n$$$ integers $$$h_1, h_2, \ldots, h_n$$$ ($$$1 \le h_i \le 10 ^ 9$$$) — the heights of the flowers.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the number of seconds that will pass before $$$h_i=0$$$ for all $$$1 \le i \le n$$$. </p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009668046819831481" id="id005887253023241302" class="input-output-copier">Copy</div></div><pre id="id009668046819831481"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 2</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">3 1</div><div class="test-example-line test-example-line-odd test-example-line-3">1</div><div class="test-example-line test-example-line-odd test-example-line-3">9</div><div class="test-example-line test-example-line-even test-example-line-4">5</div><div class="test-example-line test-example-line-even test-example-line-4">7 4 4 3 2</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0010388316892507565" id="id002970115493026726" class="input-output-copier">Copy</div></div><pre id="id0010388316892507565">4
3
9
7
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the flower heights change as follows: $$$[1, 1, 2] \rightarrow [1, 1, 1] \rightarrow [1, 1, 0] \rightarrow [1, 0, 0] \rightarrow [0, 0, 0]$$$.</p><p>In the second test case, the flower heights change as follows: $$$[3, 1] \rightarrow [2, 0] \rightarrow [1, 0] \rightarrow [0, 0]$$$.</p></div>