<h2><a href="https://codeforces.com/contest/1485/problem/A" target="_blank" rel="noopener noreferrer">1485A — Add and Divide</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1485A](https://codeforces.com/contest/1485/problem/A) |

## Topics
`brute force` `greedy` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Add and Divide</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have two positive integers $$$a$$$ and $$$b$$$.</p><p>You can perform two kinds of operations:</p><ul> <li> $$$a = \lfloor \frac{a}{b} \rfloor$$$ (replace $$$a$$$ with the integer part of the division between $$$a$$$ and $$$b$$$) </li><li> $$$b=b+1$$$ (increase $$$b$$$ by $$$1$$$) </li></ul><p>Find the minimum number of operations required to make $$$a=0$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>The only line of the description of each test case contains two integers $$$a$$$, $$$b$$$ ($$$1 \le a,b \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer: the minimum number of operations required to make $$$a=0$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007845366140376452" id="id001481201984694257" class="input-output-copier">Copy</div></div><pre id="id007845366140376452">6
9 2
1337 1
1 1
50000000 4
991026972 997
1234 5678
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009801417624162188" id="id005511270166432037" class="input-output-copier">Copy</div></div><pre id="id009801417624162188">4
9
2
12
3
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, one of the optimal solutions is:</p><ol> <li> Divide $$$a$$$ by $$$b$$$. After this operation $$$a = 4$$$ and $$$b = 2$$$. </li><li> Divide $$$a$$$ by $$$b$$$. After this operation $$$a = 2$$$ and $$$b = 2$$$. </li><li> Increase $$$b$$$. After this operation $$$a = 2$$$ and $$$b = 3$$$. </li><li> Divide $$$a$$$ by $$$b$$$. After this operation $$$a = 0$$$ and $$$b = 3$$$. </li></ol></div>