<h2><a href="https://codeforces.com/contest/1411/problem/B" target="_blank" rel="noopener noreferrer">1411B — Fair Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1411B](https://codeforces.com/contest/1411/problem/B) |

## Topics
`brute force` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Fair Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>We call a positive integer number <span class="tex-font-style-it">fair</span> if it is divisible by each of its nonzero digits. For example, $$$102$$$ is fair (because it is divisible by $$$1$$$ and $$$2$$$), but $$$282$$$ is not, because it isn't divisible by $$$8$$$. Given a positive integer $$$n$$$. Find the minimum integer $$$x$$$, such that $$$n \leq x$$$ and $$$x$$$ is fair.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains number of test cases $$$t$$$ ($$$1 \leq t \leq 10^3$$$). Each of the next $$$t$$$ lines contains an integer $$$n$$$ ($$$1 \leq n \leq 10^{18}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each of $$$t$$$ test cases print a single integer — the least <span class="tex-font-style-it">fair</span> number, which is not less than $$$n$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007527316863831133" id="id006243263979595729" class="input-output-copier">Copy</div></div><pre id="id007527316863831133">4
1
282
1234567890
1000000000000000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008239985607803535" id="id00603513751946066" class="input-output-copier">Copy</div></div><pre id="id008239985607803535">1
288
1234568040
1000000000000000000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Explanations for some test cases: </p><ul> <li> In the first test case number $$$1$$$ is fair itself. </li><li> In the second test case number $$$288$$$ is fair (it's divisible by both $$$2$$$ and $$$8$$$). None of the numbers from $$$[282, 287]$$$ is fair, because, for example, none of them is divisible by $$$8$$$. </li></ul></div>