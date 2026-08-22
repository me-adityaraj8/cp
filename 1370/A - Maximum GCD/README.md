<h2><a href="https://codeforces.com/contest/1370/problem/A" target="_blank" rel="noopener noreferrer">1370A — Maximum GCD</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1370A](https://codeforces.com/contest/1370/problem/A) |

## Topics
`greedy` `implementation` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Maximum GCD</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's consider all integers in the range from $$$1$$$ to $$$n$$$ (inclusive).</p><p>Among all pairs of <span class="tex-font-style-bf">distinct</span> integers in this range, find the maximum possible greatest common divisor of integers in pair. Formally, find the maximum value of $$$\mathrm{gcd}(a, b)$$$, where $$$1 \leq a  \lt  b \leq n$$$.</p><p>The greatest common divisor, $$$\mathrm{gcd}(a, b)$$$, of two positive integers $$$a$$$ and $$$b$$$ is the biggest integer that is a divisor of both $$$a$$$ and $$$b$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 100$$$)  — the number of test cases. The description of the test cases follows.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$2 \leq n \leq 10^6$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the maximum value of $$$\mathrm{gcd}(a, b)$$$ among all $$$1 \leq a  \lt  b \leq n$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005075475113338382" id="id007183299712985624" class="input-output-copier">Copy</div></div><pre id="id005075475113338382">2
3
5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0059768829387712" id="id0004636886385586236" class="input-output-copier">Copy</div></div><pre id="id0059768829387712">1
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$\mathrm{gcd}(1, 2) = \mathrm{gcd}(2, 3) = \mathrm{gcd}(1, 3) = 1$$$.</p><p>In the second test case, $$$2$$$ is the maximum possible value, corresponding to $$$\mathrm{gcd}(2, 4)$$$.</p></div>