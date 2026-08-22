<h2><a href="https://codeforces.com/contest/1178/problem/C" target="_blank" rel="noopener noreferrer">1178C — Tiles</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1178C](https://codeforces.com/contest/1178/problem/C) |

## Topics
`combinatorics` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Tiles</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Bob is decorating his kitchen, more precisely, the floor. He has found a prime candidate for the tiles he will use. They come in a simple form factor — a square tile that is diagonally split into white and black part as depicted in the figure below.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/9abf434c6b5162230df110139bfdc3ed35f24e1e.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>The dimension of this tile is perfect for this kitchen, as he will need exactly $$$w \times h$$$ tiles without any scraps. That is, the width of the kitchen is $$$w$$$ tiles, and the height is $$$h$$$ tiles. As each tile can be rotated in one of four ways, he still needs to decide on how exactly he will tile the floor. There is a single aesthetic criterion that he wants to fulfil: two adjacent tiles must not share a colour on the edge — i.e. one of the tiles must have a white colour on the shared border, and the second one must be black.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/066d766eadf99ef79fd64c88534b915bb49ea754.png" style="max-width: 100.0%;max-height: 100.0%;">   <span class="tex-font-style-it">The picture on the left shows one valid tiling of a $$$3 \times 2$$$ kitchen. The picture on the right shows an invalid arrangement, as the bottom two tiles touch with their white parts.</span> </center><p>Find the number of possible tilings. As this number may be large, output its remainder when divided by $$$998244353$$$ (a prime number). </p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains two space separated integers $$$w$$$, $$$h$$$ ($$$1 \leq w,h \leq 1\,000$$$) — the width and height of the kitchen, measured in tiles.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output a single integer $$$n$$$ — the remainder of the number of tilings when divided by $$$998244353$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015093511570909357" id="id008288487074429022" class="input-output-copier">Copy</div></div><pre id="id0015093511570909357">2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0012705435913991103" id="id0014991652591688176" class="input-output-copier">Copy</div></div><pre id="id0012705435913991103">16
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0001640603206918745" id="id008978195235877565" class="input-output-copier">Copy</div></div><pre id="id0001640603206918745">2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000936479245066113" id="id004077838039238746" class="input-output-copier">Copy</div></div><pre id="id000936479245066113">64
</pre></div></div></div>