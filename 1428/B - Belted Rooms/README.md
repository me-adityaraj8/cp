<h2><a href="https://codeforces.com/contest/1428/problem/B" target="_blank" rel="noopener noreferrer">1428B — Belted Rooms</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1428B](https://codeforces.com/contest/1428/problem/B) |

## Topics
`graphs` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Belted Rooms</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>In the snake exhibition, there are $$$n$$$ rooms (numbered $$$0$$$ to $$$n - 1$$$) arranged in a circle, with a snake in each room. The rooms are connected by $$$n$$$ conveyor belts, and the $$$i$$$-th conveyor belt connects the rooms $$$i$$$ and $$$(i+1) \bmod n$$$. In the other words, rooms $$$0$$$ and $$$1$$$, $$$1$$$ and $$$2$$$, $$$\ldots$$$, $$$n-2$$$ and $$$n-1$$$, $$$n-1$$$ and $$$0$$$ are connected with conveyor belts.</p><p>The $$$i$$$-th conveyor belt is in one of three states:</p><ul> <li> If it is clockwise, snakes can only go from room $$$i$$$ to $$$(i+1) \bmod n$$$. </li><li> If it is anticlockwise, snakes can only go from room $$$(i+1) \bmod n$$$ to $$$i$$$. </li><li> If it is off, snakes can travel in either direction. </li></ul><center> <img class="tex-graphics" src="https://espresso.codeforces.com/6297b2f94d94e55d34b6708a8f0f639abe1e1b85.png" style="zoom: 65.0%;max-width: 100.0%;max-height: 100.0%;"> </center><p>Above is an example with $$$4$$$ rooms, where belts $$$0$$$ and $$$3$$$ are off, $$$1$$$ is clockwise, and $$$2$$$ is anticlockwise.</p><p>Each snake wants to leave its room and come back to it later. A room is <span class="tex-font-style-bf">returnable</span> if the snake there can leave the room, and later come back to it using the conveyor belts. How many such <span class="tex-font-style-bf">returnable</span> rooms are there?</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$): the number of test cases. The description of the test cases follows. </p><p> The first line of each test case description contains a single integer $$$n$$$ ($$$2 \le n \le 300\,000$$$): the number of rooms.</p><p> The next line of each test case description contains a string $$$s$$$ of length $$$n$$$, consisting of only '<span class="tex-font-style-tt"><</span>', '<span class="tex-font-style-tt">></span>' and '<span class="tex-font-style-tt">-</span>'.</p><ul> <li> If $$$s_{i} = $$$ '<span class="tex-font-style-tt">></span>', the $$$i$$$-th conveyor belt goes clockwise. </li><li> If $$$s_{i} = $$$ '<span class="tex-font-style-tt"><</span>', the $$$i$$$-th conveyor belt goes anticlockwise. </li><li> If $$$s_{i} = $$$ '<span class="tex-font-style-tt">-</span>', the $$$i$$$-th conveyor belt is off. </li></ul><p>It is guaranteed that the sum of $$$n$$$ among all test cases does not exceed $$$300\,000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the number of returnable rooms.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0008245654194809371" id="id003454010712448121" class="input-output-copier">Copy</div></div><pre id="id0008245654194809371">4
4
-><-
5
>>>>>
3
<--
2
<>
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008394701553904086" id="id004374287750686727" class="input-output-copier">Copy</div></div><pre id="id008394701553904086">3
5
3
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, all rooms are returnable except room $$$2$$$. The snake in the room $$$2$$$ is trapped and cannot exit. This test case corresponds to the picture from the problem statement.</p><p> In the second test case, all rooms are returnable by traveling on the series of clockwise belts.</p></div>