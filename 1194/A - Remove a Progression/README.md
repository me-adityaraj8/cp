<h2><a href="https://codeforces.com/contest/1194/problem/A" target="_blank" rel="noopener noreferrer">1194A — Remove a Progression</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1194A](https://codeforces.com/contest/1194/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Remove a Progression</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have a list of numbers from $$$1$$$ to $$$n$$$ written from left to right on the blackboard.</p><p>You perform an algorithm consisting of several steps (steps are $$$1$$$-indexed). On the $$$i$$$-th step you wipe the $$$i$$$-th number (considering only <span class="tex-font-style-bf">remaining</span> numbers). You wipe <span class="tex-font-style-it">the whole number</span> (not one digit).</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/9083be656d2ef27ca42dbfce070e2bad28254b44.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>When there are less than $$$i$$$ numbers remaining, you stop your algorithm. </p><p>Now you wonder: what is the value of the $$$x$$$-th remaining number after the algorithm is stopped?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$T$$$ ($$$1 \le T \le 100$$$) — the number of queries. The next $$$T$$$ lines contain queries — one per line. All queries are independent.</p><p>Each line contains two space-separated integers $$$n$$$ and $$$x$$$ ($$$1 \le x  \lt  n \le 10^{9}$$$) — the length of the list and the position we wonder about. It's guaranteed that after the algorithm ends, the list will still contain at least $$$x$$$ numbers.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$T$$$ integers (one per query) — the values of the $$$x$$$-th number after performing the algorithm for the corresponding queries.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006988291216722786" id="id003407751699925111" class="input-output-copier">Copy</div></div><pre id="id006988291216722786">3
3 1
4 2
69 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0019846681837044378" id="id0044039673358161435" class="input-output-copier">Copy</div></div><pre id="id0019846681837044378">2
4
12
</pre></div></div></div>