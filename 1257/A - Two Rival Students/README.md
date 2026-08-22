<h2><a href="https://codeforces.com/contest/1257/problem/A" target="_blank" rel="noopener noreferrer">1257A — Two Rival Students</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1257A](https://codeforces.com/contest/1257/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Two Rival Students</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are the gym teacher in the school.</p><p>There are $$$n$$$ students in the row. And there are two rivalling students among them. The first one is in position $$$a$$$, the second in position $$$b$$$. Positions are numbered from $$$1$$$ to $$$n$$$ from left to right.</p><p>Since they are rivals, you want to maximize the distance between them. If students are in positions $$$p$$$ and $$$s$$$ respectively, then distance between them is $$$|p - s|$$$. </p><p>You can do the following operation at most $$$x$$$ times: choose two <span class="tex-font-style-bf">adjacent (neighbouring)</span> students and swap them.</p><p>Calculate the maximum distance between two rivalling students after at most $$$x$$$ swaps.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>The only line of each test case contains four integers $$$n$$$, $$$x$$$, $$$a$$$ and $$$b$$$ ($$$2 \le n \le 100$$$, $$$0 \le x \le 100$$$, $$$1 \le a, b \le n$$$, $$$a \neq b$$$) — the number of students in the row, the number of swaps which you can do, and positions of first and second rivaling students respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print one integer — the maximum distance between two rivaling students which you can obtain.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0012737671763071534" id="id009888229544931383" class="input-output-copier">Copy</div></div><pre id="id0012737671763071534">3
5 1 3 2
100 33 100 1
6 0 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0046397281134954116" id="id002740339080094758" class="input-output-copier">Copy</div></div><pre id="id0046397281134954116">2
99
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case you can swap students in positions $$$3$$$ and $$$4$$$. And then the distance between the rivals is equal to $$$|4 - 2| = 2$$$.</p><p>In the second test case you don't have to swap students. </p><p>In the third test case you can't swap students.</p></div>