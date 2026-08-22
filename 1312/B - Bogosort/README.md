<h2><a href="https://codeforces.com/contest/1312/problem/B" target="_blank" rel="noopener noreferrer">1312B — Bogosort</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1312B](https://codeforces.com/contest/1312/problem/B) |

## Topics
`constructive algorithms` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Bogosort</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a_1, a_2, \dots , a_n$$$. Array is good if for each pair of indexes $$$i  \lt  j$$$ the condition $$$j - a_j \ne i - a_i$$$ holds. Can you shuffle this array so that it becomes good? To shuffle an array means to reorder its elements arbitrarily (leaving the initial order is also an option).</p><p>For example, if $$$a = [1, 1, 3, 5]$$$, then shuffled arrays $$$[1, 3, 5, 1]$$$, $$$[3, 5, 1, 1]$$$ and $$$[5, 3, 1, 1]$$$ are good, but shuffled arrays $$$[3, 1, 5, 1]$$$, $$$[1, 1, 3, 5]$$$ and $$$[1, 1, 5, 3]$$$ aren't.</p><p>It's guaranteed that it's always possible to shuffle an array to meet this condition.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$1 \le n \le 100$$$) — the length of array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots , a_n$$$ ($$$1 \le a_i \le 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print the shuffled version of the array $$$a$$$ which is good.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id000787916550722142" id="id009780641784685248" class="input-output-copier">Copy</div></div><pre id="id000787916550722142">3
1
7
4
1 1 3 5
6
3 2 1 5 6 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005745348678403907" id="id0060411882871028" class="input-output-copier">Copy</div></div><pre id="id005745348678403907">7
1 5 1 3
2 4 6 1 3 5
</pre></div></div></div>