<h2><a href="https://codeforces.com/contest/2164/problem/B" target="_blank" rel="noopener noreferrer">2164B — Even Modulo Pair</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2164B](https://codeforces.com/contest/2164/problem/B) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Even Modulo Pair</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p>You are given a <span class="tex-font-style-bf">strictly increasing</span> sequence of positive integers $$$a_1  \lt  a_2  \lt  \ldots  \lt  a_n$$$. Find two distinct elements $$$x$$$ and $$$y$$$ from the sequence such that $$$x  \lt  y$$$ and $$$y \bmod x$$$ is even, or determine that no such pair exists.</p><p>$$$p \bmod q$$$ denotes the remainder from dividing $$$p$$$ by $$$q$$$. </p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 2\cdot 10^4$$$). The description of the test cases follows. </p><p>The first line of each test case contains one integer $$$n$$$ ($$$2 \le n \le 10^5$$$) — the length of the sequence.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1,a_2,\ldots,a_n$$$ ($$$1\le a_1  \lt  \ldots  \lt  a_n\le 10^9$$$) — the given sequence.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case:</p><ul> <li> If no such pair exists, output <span class="tex-font-style-tt">-1</span>. </li><li> Otherwise, output two integers $$$x$$$ and $$$y$$$ — the elements that satisfy the condition. </li></ul><p>If there are multiple valid pairs, you may output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004370953745094177" id="id0007977545904618444" class="input-output-copier">Copy</div></div><pre id="id004370953745094177"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 3 4 5 6</div><div class="test-example-line test-example-line-even test-example-line-2">6</div><div class="test-example-line test-example-line-even test-example-line-2">2 3 5 7 11 13</div><div class="test-example-line test-example-line-odd test-example-line-3">4</div><div class="test-example-line test-example-line-odd test-example-line-3">2 3 13 37</div><div class="test-example-line test-example-line-even test-example-line-4">3</div><div class="test-example-line test-example-line-even test-example-line-4">17 117 1117</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004136796684763141" id="id008883470817447656" class="input-output-copier">Copy</div></div><pre id="id004136796684763141">3 5
3 11
-1
17 1117
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p><a href="https://codeforces.com/assets/contests/2164/B_ohw7aeph4eewahwooF1N.html">Visualizer link</a></p><p>In the first test case, choosing $$$x = 3$$$ and $$$y = 5$$$ yields $$$y \bmod x = 5 \bmod 3 = 2$$$, which is even.</p><p>In the third test case, it is clear that no valid pair exists.</p></div>