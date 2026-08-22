<h2><a href="https://codeforces.com/contest/1498/problem/A" target="_blank" rel="noopener noreferrer">1498A — GCD Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1498A](https://codeforces.com/contest/1498/problem/A) |

## Topics
`brute force` `math`

---

## Problem Statement

<div class="header"><div class="title">A. GCD Sum</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The $$$\text{$$$gcdSum$$$}$$$ of a positive integer is the $$$gcd$$$ of that integer with its sum of digits. Formally, $$$\text{$$$gcdSum$$$}(x) = gcd(x, \text{ sum of digits of } x)$$$ for a positive integer $$$x$$$. $$$gcd(a, b)$$$ denotes the greatest common divisor of $$$a$$$ and $$$b$$$ — the largest integer $$$d$$$ such that both integers $$$a$$$ and $$$b$$$ are divisible by $$$d$$$.</p><p>For example: $$$\text{$$$gcdSum$$$}(762) = gcd(762, 7 + 6 + 2)=gcd(762,15) = 3$$$.</p><p>Given an integer $$$n$$$, find the smallest integer $$$x \ge n$$$ such that $$$\text{$$$gcdSum$$$}(x)  \gt  1$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains one integer $$$t$$$ $$$(1 \le t \le 10^4)$$$ — the number of test cases. </p><p>Then $$$t$$$ lines follow, each containing a single integer $$$n$$$ $$$(1 \le n \le 10^{18})$$$.</p><p>All test cases in one test are different.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$t$$$ lines, where the $$$i$$$-th line is a single integer containing the answer to the $$$i$$$-th test case.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006929426588728503" id="id006171346006043305" class="input-output-copier">Copy</div></div><pre id="id006929426588728503">3
11
31
75
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0024855794854441937" id="id008840080887145656" class="input-output-copier">Copy</div></div><pre id="id0024855794854441937">12
33
75
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Let us explain the three test cases in the sample.</p><p><span class="tex-font-style-bf">Test case 1:</span> $$$n = 11$$$: </p><p>$$$\text{$$$gcdSum$$$}(11) = gcd(11, 1 + 1) = gcd(11,\ 2) = 1$$$.</p><p>$$$\text{$$$gcdSum$$$}(12) = gcd(12, 1 + 2) = gcd(12,\ 3) = 3$$$.</p><p>So the smallest number $$$\ge 11$$$ whose $$$gcdSum$$$ $$$ \gt  1$$$ is $$$12$$$.</p><p><span class="tex-font-style-bf">Test case 2:</span> $$$n = 31$$$: </p><p>$$$\text{$$$gcdSum$$$}(31) = gcd(31, 3 + 1) = gcd(31,\ 4) = 1$$$.</p><p>$$$\text{$$$gcdSum$$$}(32) = gcd(32, 3 + 2) = gcd(32,\ 5) = 1$$$.</p><p>$$$\text{$$$gcdSum$$$}(33) = gcd(33, 3 + 3) = gcd(33,\ 6) = 3$$$.</p><p>So the smallest number $$$\ge 31$$$ whose $$$gcdSum$$$ $$$ \gt  1$$$ is $$$33$$$.</p><p><span class="tex-font-style-bf">Test case 3:</span> $$$\ n = 75$$$: </p><p>$$$\text{$$$gcdSum$$$}(75) = gcd(75, 7 + 5) = gcd(75,\ 12) = 3$$$.</p><p>The $$$\text{$$$gcdSum$$$}$$$ of $$$75$$$ is already $$$ \gt  1$$$. Hence, it is the answer.</p></div>