<h2><a href="https://codeforces.com/contest/1742/problem/A" target="_blank" rel="noopener noreferrer">1742A — Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1742A](https://codeforces.com/contest/1742/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Sum</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given three integers $$$a$$$, $$$b$$$, and $$$c$$$. Determine if one of them is the sum of the other two.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 9261$$$) — the number of test cases.</p><p>The description of each test case consists of three integers $$$a$$$, $$$b$$$, $$$c$$$ ($$$0 \leq a, b, c \leq 20$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output "<span class="tex-font-style-tt">YES</span>" if one of the numbers is the sum of the other two, and "<span class="tex-font-style-tt">NO</span>" otherwise.</p><p>You can output the answer in any case (for example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>" and "<span class="tex-font-style-tt">YES</span>" will be recognized as a positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007745119493107194" id="id004838675028960526" class="input-output-copier">Copy</div></div><pre id="id007745119493107194"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">1 4 3</div><div class="test-example-line test-example-line-even test-example-line-2">2 5 8</div><div class="test-example-line test-example-line-odd test-example-line-3">9 11 20</div><div class="test-example-line test-example-line-even test-example-line-4">0 0 0</div><div class="test-example-line test-example-line-odd test-example-line-5">20 20 20</div><div class="test-example-line test-example-line-even test-example-line-6">4 12 3</div><div class="test-example-line test-example-line-odd test-example-line-7">15 7 8</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005752494666667589" id="id003307083245842226" class="input-output-copier">Copy</div></div><pre id="id005752494666667589">YES
NO
YES
YES
NO
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$1 + 3 = 4$$$.</p><p>In the second test case, none of the numbers is the sum of the other two.</p><p>In the third test case, $$$9 + 11 = 20$$$.</p></div>