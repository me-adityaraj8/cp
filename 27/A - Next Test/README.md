<h2><a href="https://codeforces.com/contest/27/problem/A" target="_blank" rel="noopener noreferrer">27A — Next Test</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 27A](https://codeforces.com/contest/27/problem/A) |

## Topics
`implementation` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Next Test</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>«Polygon» is a system which allows to create programming tasks in a simple and professional way. When you add a test to the problem, the corresponding form asks you for the test index. As in most cases it is clear which index the next test will have, the system suggests the default value of the index. It is calculated as the smallest positive integer which is not used as an index for some previously added test.</p><p>You are to implement this feature. Create a program which determines the default index of the next test, given the indexes of the previously added tests.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 3000</span>) — the amount of previously added tests. The second line contains <span class="tex-span"><i>n</i></span> distinct integers <span class="tex-span"><i>a</i><sub class="lower-index">1</sub>, <i>a</i><sub class="lower-index">2</sub>, ..., <i>a</i><sub class="lower-index"><i>n</i></sub></span> (<span class="tex-span">1 ≤ <i>a</i><sub class="lower-index"><i>i</i></sub> ≤ 3000</span>) — indexes of these tests.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output the required default value for the next test index.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00845826184691835" id="id009092074560666805" class="input-output-copier">Copy</div></div><pre id="id00845826184691835">3<br>1 7 2<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008931979408829788" id="id007985185849316145" class="input-output-copier">Copy</div></div><pre id="id008931979408829788">3<br></pre></div></div></div>