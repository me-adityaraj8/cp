<h2><a href="https://codeforces.com/contest/2220/problem/A" target="_blank" rel="noopener noreferrer">2220A — Blocked</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2220A](https://codeforces.com/contest/2220/problem/A) |

## Topics
`greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Blocked</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given an array $$$a$$$ of integers of size $$$n$$$, we say that a position $$$1 \le i \le n$$$ is <span class="tex-font-style-it">blocked</span> if $$$a_i$$$ can be expressed as the sum of a subset of $$$a_1, a_2, \ldots, a_{i-1}$$$ (i.e. there exist $$$1 \le j_1  \lt  j_2  \lt  \ldots  \lt  j_k \le i-1$$$ such that $$$a_{j_1} + a_{j_2} + \ldots + a_{j_k} = a_i$$$). Reorder $$$a$$$ so that no position is blocked or report that it is impossible.</p><p>For example, reordering the array [$$$3, 2, 5$$$] to [$$$2, 3, 5$$$] makes position $$$3$$$ blocked, since we can express $$$5 = 2 + 3$$$, but if we reorder it to [$$$3, 5, 2$$$], no position is blocked.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 400$$$). The description of the test cases follows. </p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 200$$$).</p><p>The second line contains $$$n$$$ integers, denoting the array $$$a$$$ ($$$\textbf{1} \le a_i \le 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print any order of $$$a$$$ such that no position is blocked if it exists, otherwise print $$$-1$$$. </p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00874795148809153" id="id006370808314805911" class="input-output-copier">Copy</div></div><pre id="id00874795148809153">4
3
1 5 9
4
1 3 3 2
3
1 2 3
1
1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0041201152148981446" id="id0016526880237056785" class="input-output-copier">Copy</div></div><pre id="id0041201152148981446">5 9 1
-1
3 1 2
1</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the third test case, the array [$$$3, 1, 2$$$] has no position blocked:</p><p>Position $$$1$$$ is not blocked since $$$3$$$ can't be expressed as the sum of a subset of [].</p><p>Position $$$2$$$ is not blocked since $$$1$$$ can't be expressed as the sum of a subset of [$$$3$$$].</p><p>Position $$$3$$$ is not blocked since $$$2$$$ can't be expressed as the sum of a subset of [$$$3, 1$$$].</p></div>