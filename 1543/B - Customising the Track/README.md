<h2><a href="https://codeforces.com/contest/1543/problem/B" target="_blank" rel="noopener noreferrer">1543B — Customising the Track</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1543B](https://codeforces.com/contest/1543/problem/B) |

## Topics
`combinatorics` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Customising the Track</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Highway 201 is the most busy street in Rockport. Traffic cars cause a lot of hindrances to races, especially when there are a lot of them. The track which passes through this highway can be divided into $$$n$$$ sub-tracks. You are given an array $$$a$$$ where $$$a_i$$$ represents the number of traffic cars in the $$$i$$$-th sub-track. You define the inconvenience of the track as $$$\sum\limits_{i=1}^{n} \sum\limits_{j=i+1}^{n} \lvert a_i-a_j\rvert$$$, where $$$|x|$$$ is the absolute value of $$$x$$$. </p><p>You can perform the following operation any (possibly zero) number of times: choose a traffic car and move it from its current sub-track to any other sub-track.</p><p>Find the minimum inconvenience you can achieve.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains a single integer $$$t$$$ ($$$1\leq t\leq 10\,000$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1\leq n\leq 2\cdot 10^5$$$).</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0\leq a_i\leq 10^9$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single line containing a single integer: the minimum inconvenience you can achieve by applying the given operation any (possibly zero) number of times.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0012410281850673321" id="id005362049297666851" class="input-output-copier">Copy</div></div><pre id="id0012410281850673321">3
3
1 2 3
4
0 1 1 0
10
8 3 6 11 5 2 1 7 10 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005882792539709364" id="id002031526763989493" class="input-output-copier">Copy</div></div><pre id="id005882792539709364">0
4
21
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first test case, you can move a car from the $$$3$$$-rd sub-track to the $$$1$$$-st sub-track to obtain $$$0$$$ inconvenience.</p><p>For the second test case, moving any car won't decrease the inconvenience of the track.</p></div>