<h2><a href="https://codeforces.com/contest/1438/problem/B" target="_blank" rel="noopener noreferrer">1438B — Valerii Against Everyone</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1438B](https://codeforces.com/contest/1438/problem/B) |

## Topics
`constructive algorithms` `data structures` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Valerii Against Everyone</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You're given an array $$$b$$$ of length $$$n$$$. Let's define another array $$$a$$$, also of length $$$n$$$, for which $$$a_i = 2^{b_i}$$$ ($$$1 \leq i \leq n$$$). </p><p>Valerii says that every two non-intersecting subarrays of $$$a$$$ have different sums of elements. You want to determine if he is wrong. More formally, you need to determine if there exist four integers $$$l_1,r_1,l_2,r_2$$$ that satisfy the following conditions: </p><ul><span> <li> $$$1 \leq l_1 \leq r_1 \lt l_2 \leq r_2 \leq n$$$; </li><li> $$$a_{l_1}+a_{l_1+1}+\ldots+a_{r_1-1}+a_{r_1} = a_{l_2}+a_{l_2+1}+\ldots+a_{r_2-1}+a_{r_2}$$$. </li></span></ul><p>If such four integers exist, you will prove Valerii wrong. Do they exist?</p><p>An array $$$c$$$ is a subarray of an array $$$d$$$ if $$$c$$$ can be obtained from $$$d$$$ by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 100$$$). Description of the test cases follows.</p><p>The first line of every test case contains a single integer $$$n$$$ ($$$2 \le n \le 1000$$$).</p><p>The second line of every test case contains $$$n$$$ integers $$$b_1,b_2,\ldots,b_n$$$ ($$$0 \le b_i \le 10^9$$$). </p></div><div class="output-specification"><div class="section-title">Output</div><p>For every test case, if there exist two non-intersecting subarrays in $$$a$$$ that have the same sum, output <span class="tex-font-style-tt">YES</span> on a separate line. Otherwise, output <span class="tex-font-style-tt">NO</span> on a separate line. </p><p>Also, note that each letter can be in any case. </p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0001610396025322658" id="id009203365518491118" class="input-output-copier">Copy</div></div><pre id="id0001610396025322658">2
6
4 3 0 1 2 0
2
2 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0022186148082607393" id="id007381616794537917" class="input-output-copier">Copy</div></div><pre id="id0022186148082607393">YES
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first case, $$$a = [16,8,1,2,4,1]$$$. Choosing $$$l_1 = 1$$$, $$$r_1 = 1$$$, $$$l_2 = 2$$$ and $$$r_2 = 6$$$ works because $$$16 = (8+1+2+4+1)$$$.</p><p>In the second case, you can verify that there is no way to select to such subarrays.</p></div>