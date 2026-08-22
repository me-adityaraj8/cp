<h2><a href="https://codeforces.com/contest/2125/problem/A" target="_blank" rel="noopener noreferrer">2125A — Difficult Contest</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2125A](https://codeforces.com/contest/2125/problem/A) |

## Topics
`constructive algorithms` `implementation` `sortings` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Difficult Contest</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>It is known that a contest can be represented by a string $$$s$$$, consisting of uppercase Latin letters that denote problems. It is also known that a contest is difficult if it contains "<span class="tex-font-style-tt">FFT</span>" or "<span class="tex-font-style-tt">NTT</span>" as a contiguous substring.</p><p>Your task is to rearrange the problem in contest $$$s$$$ in such a way that this contest is not difficult. If the initial contest is not difficult, you may leave it as it is.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of several test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^{4}$$$) — the number of test cases. The description of the test cases follows.</p><p>The only line of each test case contains $$$s$$$ ($$$1 \le |s| \le 2 \cdot 10^{5}$$$).</p><p>Additional constraints on the input data:</p><ul> <li> the total length of strings across all test cases does not exceed $$$2 \cdot 10^{5}$$$. </li></ul></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a string — a non-difficult contest that was obtained from $$$s$$$ by rearranging the letters.</p><p>If there are multiple correct answers, you may output any. It can be shown that at least one correct answer always exists.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008815103149317488" id="id0031566052218295815" class="input-output-copier">Copy</div></div><pre id="id008815103149317488"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">FFT</div><div class="test-example-line test-example-line-even test-example-line-2">ABFBANTTA</div><div class="test-example-line test-example-line-odd test-example-line-3">FFTNTT</div><div class="test-example-line test-example-line-even test-example-line-4">FFTFFTFFTNNTNNT</div><div class="test-example-line test-example-line-odd test-example-line-5">AFFTBFFNTTFTTZ</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008219111294160331" id="id00889718898500099" class="input-output-copier">Copy</div></div><pre id="id008219111294160331">FTF
ABFBANATT
NTFTFT
TFFFFFFNTNTNTNT
AFTFBTTFFNFTTZ
</pre></div></div></div>