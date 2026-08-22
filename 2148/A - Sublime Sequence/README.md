<h2><a href="https://codeforces.com/contest/2148/problem/A" target="_blank" rel="noopener noreferrer">2148A — Sublime Sequence</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2148A](https://codeforces.com/contest/2148/problem/A) |

## Topics
`brute force` `hashing` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Sublime Sequence</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Farmer John has an integer $$$x$$$. He creates a sequence of length $$$n$$$ by alternating integers $$$x$$$ and $$$-x$$$, starting with $$$x$$$. </p><p>For example, if $$$n = 5$$$, the sequence looks like: $$$x, -x, x, -x, x$$$.</p><p>He asks you to find the sum of all integers in the sequence.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 100$$$)  — the number of test cases.</p><p>The only line of input for each test case is two integers $$$x$$$ and $$$n$$$ ($$$1 \leq x, n \leq 10$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the sum of all integers in the sequence.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0024850337397456435" id="id004825924365843066" class="input-output-copier">Copy</div></div><pre id="id0024850337397456435"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1 4</div><div class="test-example-line test-example-line-even test-example-line-2">2 5</div><div class="test-example-line test-example-line-odd test-example-line-3">3 6</div><div class="test-example-line test-example-line-even test-example-line-4">4 7</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008744332596581086" id="id006113170340983203" class="input-output-copier">Copy</div></div><pre id="id008744332596581086">0
2
0
4
</pre></div></div></div>