<h2><a href="https://codeforces.com/contest/1325/problem/A" target="_blank" rel="noopener noreferrer">1325A — EhAb AnD gCd</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1325A](https://codeforces.com/contest/1325/problem/A) |

## Topics
`constructive algorithms` `greedy` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. EhAb AnD gCd</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a positive integer $$$x$$$. Find <span class="tex-font-style-bf">any</span> such $$$2$$$ positive integers $$$a$$$ and $$$b$$$ such that $$$GCD(a,b)+LCM(a,b)=x$$$.</p><p>As a reminder, $$$GCD(a,b)$$$ is the greatest integer that divides both $$$a$$$ and $$$b$$$. Similarly, $$$LCM(a,b)$$$ is the smallest integer such that both $$$a$$$ and $$$b$$$ divide it.</p><p>It's guaranteed that the solution always exists. If there are several such pairs $$$(a, b)$$$, you can output any of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ $$$(1 \le t \le 100)$$$  — the number of testcases.</p><p>Each testcase consists of one line containing a single integer, $$$x$$$ $$$(2 \le x \le 10^9)$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, output a pair of positive integers $$$a$$$ and $$$b$$$ ($$$1 \le a, b \le 10^9)$$$ such that $$$GCD(a,b)+LCM(a,b)=x$$$. It's guaranteed that the solution always exists. If there are several such pairs $$$(a, b)$$$, you can output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006603645241327705" id="id007316208248246427" class="input-output-copier">Copy</div></div><pre id="id006603645241327705">2
2
14
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0044355140116406" id="id003922300395076609" class="input-output-copier">Copy</div></div><pre id="id0044355140116406">1 1
6 4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first testcase of the sample, $$$GCD(1,1)+LCM(1,1)=1+1=2$$$.</p><p>In the second testcase of the sample, $$$GCD(6,4)+LCM(6,4)=2+12=14$$$.</p></div>