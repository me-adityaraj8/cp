<h2><a href="https://codeforces.com/contest/1208/problem/A" target="_blank" rel="noopener noreferrer">1208A — XORinacci</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1208A](https://codeforces.com/contest/1208/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. XORinacci</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Cengiz recently learned Fibonacci numbers and now he is studying different algorithms to find them. After getting bored of reading them, he came with his own new type of numbers that he named <span class="tex-font-style-it">XORinacci</span> numbers. He defined them as follows: </p><ul> <li> $$$f(0) = a$$$; </li><li> $$$f(1) = b$$$; </li><li> $$$f(n) = f(n-1) \oplus f(n-2)$$$ when $$$n  \gt  1$$$, where $$$\oplus$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a>. </li></ul><p>You are given three integers $$$a$$$, $$$b$$$, and $$$n$$$, calculate $$$f(n)$$$.</p><p>You have to answer for $$$T$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input contains one or more independent test cases.</p><p>The first line of input contains a single integer $$$T$$$ ($$$1 \le T \le 10^3$$$), the number of test cases.</p><p>Each of the $$$T$$$ following lines contains three space-separated integers $$$a$$$, $$$b$$$, and $$$n$$$ ($$$0 \le a, b, n \le 10^9$$$) respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$f(n)$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00005498897538019909" id="id00640201266108952" class="input-output-copier">Copy</div></div><pre id="id00005498897538019909">3
3 4 2
4 5 0
325 265 1231232
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0022618865662808774" id="id001222660103379064" class="input-output-copier">Copy</div></div><pre id="id0022618865662808774">7
4
76
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, $$$f(2) = f(0) \oplus f(1) = 3 \oplus 4 = 7$$$.</p></div>