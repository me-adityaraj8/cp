<h2><a href="https://codeforces.com/contest/1148/problem/C" target="_blank" rel="noopener noreferrer">1148C — Crazy Diamond</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1148C](https://codeforces.com/contest/1148/problem/C) |

## Topics
`constructive algorithms` `sortings`

---

## Problem Statement

<div class="header"><div class="title">C. Crazy Diamond</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a permutation $$$p$$$ of integers from $$$1$$$ to $$$n$$$, where $$$n$$$ is an even number. </p><p>Your goal is to sort the permutation. To do so, you can perform zero or more operations of the following type: </p><ul> <li> take two indices $$$i$$$ and $$$j$$$ such that $$$2 \cdot |i - j| \geq n$$$ and swap $$$p_i$$$ and $$$p_j$$$. </li></ul><p>There is <span class="tex-font-style-bf">no need to minimize</span> the number of operations, however you should use no more than $$$5 \cdot n$$$ operations. One can show that it is always possible to do that.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$2 \leq n \leq 3 \cdot 10^5$$$, $$$n$$$ is even) — the length of the permutation. </p><p>The second line contains $$$n$$$ distinct integers $$$p_1, p_2, \ldots, p_n$$$ ($$$1 \le p_i \le n$$$) — the given permutation.</p></div><div class="output-specification"><div class="section-title">Output</div><p>On the first line print $$$m$$$ ($$$0 \le m \le 5 \cdot n$$$) — the number of swaps to perform.</p><p>Each of the following $$$m$$$ lines should contain integers $$$a_i, b_i$$$ ($$$1 \le a_i, b_i \le n$$$, $$$|a_i - b_i| \ge \frac{n}{2}$$$) — the indices that should be swapped in the corresponding swap.</p><p>Note that there is no need to minimize the number of operations. We can show that an answer always exists.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005938631970096191" id="id006602405643262746" class="input-output-copier">Copy</div></div><pre id="id005938631970096191">2
2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006180415684263758" id="id006762587249012925" class="input-output-copier">Copy</div></div><pre id="id006180415684263758">1
1 2</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00753638519924782" id="id007396215084422767" class="input-output-copier">Copy</div></div><pre id="id00753638519924782">4
3 4 1 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006039892692949609" id="id00040813050399206685" class="input-output-copier">Copy</div></div><pre id="id006039892692949609">4
1 4
1 4
1 3
2 4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003015543734102153" id="id00065087428244469" class="input-output-copier">Copy</div></div><pre id="id003015543734102153">6
2 5 3 1 4 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0022205619701965273" id="id0023058998100156058" class="input-output-copier">Copy</div></div><pre id="id0022205619701965273">3
1 5
2 5
1 4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, when one swap elements on positions $$$1$$$ and $$$2$$$, the array becomes sorted.</p><p>In the second example, pay attention that there is no need to minimize number of swaps.</p><p>In the third example, after swapping elements on positions $$$1$$$ and $$$5$$$ the array becomes: $$$[4, 5, 3, 1, 2, 6]$$$. After swapping elements on positions $$$2$$$ and $$$5$$$ the array becomes $$$[4, 2, 3, 1, 5, 6]$$$ and finally after swapping elements on positions $$$1$$$ and $$$4$$$ the array becomes sorted: $$$[1, 2, 3, 4, 5, 6]$$$.</p></div>