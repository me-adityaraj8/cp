<h2><a href="https://codeforces.com/contest/1567/problem/B" target="_blank" rel="noopener noreferrer">1567B — MEXor Mixup</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1567B](https://codeforces.com/contest/1567/problem/B) |

## Topics
`bitmasks` `greedy`

---

## Problem Statement

<div class="header"><div class="title">B. MEXor Mixup</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Alice gave Bob two integers $$$a$$$ and $$$b$$$ ($$$a  \gt  0$$$ and $$$b \ge 0$$$). Being a curious boy, Bob wrote down an array of <span class="tex-font-style-bf">non-negative</span> integers with $$$\operatorname{MEX}$$$ value of all elements equal to $$$a$$$ and $$$\operatorname{XOR}$$$ value of all elements equal to $$$b$$$.</p><p>What is the <span class="tex-font-style-it">shortest</span> possible length of the array Bob wrote?</p><p>Recall that the $$$\operatorname{MEX}$$$ (<a href="https://en.wikipedia.org/wiki/Mex_(mathematics)">Minimum EXcluded</a>) of an array is the minimum non-negative integer that does <span class="tex-font-style-bf">not</span> belong to the array and the $$$\operatorname{XOR}$$$ of an array is the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR</a> of all the elements of the array.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 5 \cdot 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The only line of each test case contains two integers $$$a$$$ and $$$b$$$ ($$$1 \leq a \leq 3 \cdot 10^5$$$; $$$0 \leq b \leq 3 \cdot 10^5$$$) — the $$$\operatorname{MEX}$$$ and $$$\operatorname{XOR}$$$ of the array, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one (positive) integer — the length of the shortest array with $$$\operatorname{MEX}$$$ $$$a$$$ and $$$\operatorname{XOR}$$$ $$$b$$$. We can show that such an array always exists.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0024802093502059896" id="id007622873376065644" class="input-output-copier">Copy</div></div><pre id="id0024802093502059896">5
1 1
2 1
2 0
1 10000
2 10000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009114616380041315" id="id0030376063236818407" class="input-output-copier">Copy</div></div><pre id="id009114616380041315">3
2
3
2
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, one of the shortest arrays with $$$\operatorname{MEX}$$$ $$$1$$$ and $$$\operatorname{XOR}$$$ $$$1$$$ is $$$[0, 2020, 2021]$$$.</p><p>In the second test case, one of the shortest arrays with $$$\operatorname{MEX}$$$ $$$2$$$ and $$$\operatorname{XOR}$$$ $$$1$$$ is $$$[0, 1]$$$.</p><p>It can be shown that these arrays are the shortest arrays possible.</p></div>