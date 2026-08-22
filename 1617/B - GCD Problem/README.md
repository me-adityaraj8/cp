<h2><a href="https://codeforces.com/contest/1617/problem/B" target="_blank" rel="noopener noreferrer">1617B — GCD Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1617B](https://codeforces.com/contest/1617/problem/B) |

## Topics
`brute force` `constructive algorithms` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. GCD Problem</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given a positive integer $$$n$$$. Find three <span class="tex-font-style-bf">distinct</span> positive integers $$$a$$$, $$$b$$$, $$$c$$$ such that $$$a + b + c = n$$$ and $$$\operatorname{gcd}(a, b) = c$$$, where $$$\operatorname{gcd}(x, y)$$$ denotes the <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor">greatest common divisor (GCD)</a> of integers $$$x$$$ and $$$y$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^5$$$) — the number of test cases. Description of the test cases follows.</p><p>The first and only line of each test case contains a single integer $$$n$$$ ($$$10 \le n \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output three <span class="tex-font-style-bf">distinct</span> positive integers $$$a$$$, $$$b$$$, $$$c$$$ satisfying the requirements. If there are multiple solutions, you can print any. We can show that an answer always exists.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009890497169502455" id="id0007268525694753503" class="input-output-copier">Copy</div></div><pre id="id009890497169502455">6
18
63
73
91
438
122690412
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004678692705495372" id="id0026531340716634" class="input-output-copier">Copy</div></div><pre id="id004678692705495372">6 9 3
21 39 3
29 43 1
49 35 7
146 219 73
28622 122661788 2</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$6 + 9 + 3 = 18$$$ and $$$\operatorname{gcd}(6, 9) = 3$$$.</p><p>In the second test case, $$$21 + 39 + 3 = 63$$$ and $$$\operatorname{gcd}(21, 39) = 3$$$.</p><p>In the third test case, $$$29 + 43 + 1 = 73$$$ and $$$\operatorname{gcd}(29, 43) = 1$$$.</p></div>