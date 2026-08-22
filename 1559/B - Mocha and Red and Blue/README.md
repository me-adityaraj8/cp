<h2><a href="https://codeforces.com/contest/1559/problem/B" target="_blank" rel="noopener noreferrer">1559B — Mocha and Red and Blue</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1559B](https://codeforces.com/contest/1559/problem/B) |

## Topics
`dp` `greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Mocha and Red and Blue</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">As their story unravels, a timeless tale is told once again...</span></p><p><span class="tex-font-style-it">Shirahime, a friend of Mocha's, is keen on playing the music game Arcaea and sharing Mocha interesting puzzles to solve. This day, Shirahime comes up with a new simple puzzle and wants Mocha to solve them. However, these puzzles are too easy for Mocha to solve, so she wants you to solve them and tell her the answers. The puzzles are described as follow.</span></p><p>There are $$$n$$$ squares arranged in a row, and each of them can be painted either red or blue.</p><p>Among these squares, some of them have been painted already, and the others are blank. You can decide which color to paint on each blank square.</p><p>Some pairs of adjacent squares may have the same color, which is imperfect. We define the <span class="tex-font-style-it">imperfectness</span> as the number of pairs of adjacent squares that share the same color.</p><p>For example, the imperfectness of "<span class="tex-font-style-tt">BRRRBBR</span>" is $$$3$$$, with "<span class="tex-font-style-tt">BB</span>" occurred once and "<span class="tex-font-style-tt">RR</span>" occurred twice.</p><p>Your goal is to minimize the imperfectness and print out the colors of the squares after painting. </p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. </p><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases. Each test case consists of two lines.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1\leq n\leq 100$$$) — the length of the squares row.</p><p>The second line of each test case contains a string $$$s$$$ with length $$$n$$$, containing characters '<span class="tex-font-style-tt">B</span>', '<span class="tex-font-style-tt">R</span>' and '<span class="tex-font-style-tt">?</span>'. Here '<span class="tex-font-style-tt">B</span>' stands for a blue square, '<span class="tex-font-style-tt">R</span>' for a red square, and '<span class="tex-font-style-tt">?</span>' for a blank square.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a line with a string only containing '<span class="tex-font-style-tt">B</span>' and '<span class="tex-font-style-tt">R</span>', the colors of the squares after painting, which imperfectness is minimized. If there are multiple solutions, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009859183836553842" id="id008250896624939986" class="input-output-copier">Copy</div></div><pre id="id0009859183836553842">5
7
?R???BR
7
???R???
1
?
1
B
10
?R??RB??B?
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005066303436619591" id="id009240766534751417" class="input-output-copier">Copy</div></div><pre id="id005066303436619591">BRRBRBR
BRBRBRB
B
B
BRRBRBBRBR</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, if the squares are painted "<span class="tex-font-style-tt">BRRBRBR</span>", the imperfectness is $$$1$$$ (since squares $$$2$$$ and $$$3$$$ have the same color), which is the minimum possible imperfectness.</p></div>