<h2><a href="https://codeforces.com/contest/1620/problem/B" target="_blank" rel="noopener noreferrer">1620B — Triangles on a Rectangle</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1620B](https://codeforces.com/contest/1620/problem/B) |

## Topics
`geometry` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Triangles on a Rectangle</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A rectangle with its opposite corners in $$$(0, 0)$$$ and $$$(w, h)$$$ and sides parallel to the axes is drawn on a plane.</p><p>You are given a list of lattice points such that each point lies on a side of a rectangle but not in its corner. Also, there are at least two points on every side of a rectangle.</p><p>Your task is to choose three points in such a way that: </p><ul> <li> exactly two of them belong to the same side of a rectangle; </li><li> the area of a triangle formed by them is maximum possible. </li></ul><p>Print the doubled area of this triangle. It can be shown that the doubled area of any triangle formed by lattice points is always an integer.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of testcases.</p><p>The first line of each testcase contains two integers $$$w$$$ and $$$h$$$ ($$$3 \le w, h \le 10^6$$$) — the coordinates of the corner of a rectangle.</p><p>The next two lines contain the description of the points on two horizontal sides. First, an integer $$$k$$$ ($$$2 \le k \le 2 \cdot 10^5$$$) — the number of points. Then, $$$k$$$ integers $$$x_1  \lt  x_2  \lt  \dots  \lt  x_k$$$ ($$$0  \lt  x_i  \lt  w$$$) — the $$$x$$$ coordinates of the points in the ascending order. The $$$y$$$ coordinate for the first line is $$$0$$$ and for the second line is $$$h$$$.</p><p>The next two lines contain the description of the points on two vertical sides. First, an integer $$$k$$$ ($$$2 \le k \le 2 \cdot 10^5$$$) — the number of points. Then, $$$k$$$ integers $$$y_1  \lt  y_2  \lt  \dots  \lt  y_k$$$ ($$$0  \lt  y_i  \lt  h$$$) — the $$$y$$$ coordinates of the points in the ascending order. The $$$x$$$ coordinate for the first line is $$$0$$$ and for the second line is $$$w$$$.</p><p>The total number of points on all sides in all testcases doesn't exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase print a single integer — the doubled maximum area of a triangle formed by such three points that exactly two of them belong to the same side.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005228510448346855" id="id00985584306269722" class="input-output-copier">Copy</div></div><pre id="id005228510448346855">3
5 8
2 1 2
3 2 3 4
3 1 4 6
2 4 5
10 7
2 3 9
2 1 7
3 1 3 4
3 4 5 6
11 5
3 1 6 8
3 3 6 8
3 1 3 4
2 2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00027656373812748658" id="id0039105283239328414" class="input-output-copier">Copy</div></div><pre id="id00027656373812748658">25
42
35
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The points in the first testcase of the example: </p><ul> <li> $$$(1, 0)$$$, $$$(2, 0)$$$; </li><li> $$$(2, 8)$$$, $$$(3, 8)$$$, $$$(4, 8)$$$; </li><li> $$$(0, 1)$$$, $$$(0, 4)$$$, $$$(0, 6)$$$; </li><li> $$$(5, 4)$$$, $$$(5, 5)$$$. </li></ul><p>The largest triangle is formed by points $$$(0, 1)$$$, $$$(0, 6)$$$ and $$$(5, 4)$$$ — its area is $$$\frac{25}{2}$$$. Thus, the doubled area is $$$25$$$. Two points that are on the same side are: $$$(0, 1)$$$ and $$$(0, 6)$$$.</p></div>