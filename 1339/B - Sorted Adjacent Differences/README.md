<h2><a href="https://codeforces.com/contest/1339/problem/B" target="_blank" rel="noopener noreferrer">1339B — Sorted Adjacent Differences</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1339B](https://codeforces.com/contest/1339/problem/B) |

## Topics
`constructive algorithms` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Sorted Adjacent Differences</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have array of $$$n$$$ numbers $$$a_{1}, a_{2}, \ldots, a_{n}$$$. </p><p>Rearrange these numbers to satisfy $$$|a_{1} - a_{2}| \le |a_{2} - a_{3}| \le \ldots \le |a_{n-1} - a_{n}|$$$, where $$$|x|$$$ denotes absolute value of $$$x$$$. It's always possible to find such rearrangement.</p><p>Note that all numbers in $$$a$$$ are not necessarily different. In other words, some numbers of $$$a$$$ may be same.</p><p>You have to answer independent $$$t$$$ test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^{4}$$$) — the number of test cases.</p><p>The first line of each test case contains single integer $$$n$$$ ($$$3 \le n \le 10^{5}$$$) — the length of array $$$a$$$. It is guaranteed that the sum of values of $$$n$$$ over all test cases in the input does not exceed $$$10^{5}$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_{1}, a_{2}, \ldots, a_{n}$$$ ($$$-10^{9} \le a_{i} \le 10^{9}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the rearranged version of array $$$a$$$ which satisfies given condition. If there are multiple valid rearrangements, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0023997503787541263" id="id009576844930701799" class="input-output-copier">Copy</div></div><pre id="id0023997503787541263">2
6
5 -2 4 8 6 5
4
8 1 4 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002401082049011668" id="id009555223943429477" class="input-output-copier">Copy</div></div><pre id="id002401082049011668">5 5 4 6 8 -2
1 2 4 8
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, after given rearrangement, $$$|a_{1} - a_{2}| = 0 \le |a_{2} - a_{3}| = 1 \le |a_{3} - a_{4}| = 2 \le |a_{4} - a_{5}| = 2 \le |a_{5} - a_{6}| = 10$$$. There are other possible answers like "<span class="tex-font-style-tt">5 4 5 6 -2 8</span>".</p><p>In the second test case, after given rearrangement, $$$|a_{1} - a_{2}| = 1 \le |a_{2} - a_{3}| = 2 \le |a_{3} - a_{4}| = 4$$$. There are other possible answers like "<span class="tex-font-style-tt">2 4 8 1</span>".</p></div>