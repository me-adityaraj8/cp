<h2><a href="https://codeforces.com/contest/1056/problem/B" target="_blank" rel="noopener noreferrer">1056B — Divide Candies</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1056B](https://codeforces.com/contest/1056/problem/B) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Divide Candies</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Arkady and his friends love playing checkers on an $$$n \times n$$$ field. The rows and the columns of the field are enumerated from $$$1$$$ to $$$n$$$.</p><p>The friends have recently won a championship, so Arkady wants to please them with some candies. Remembering an old parable (but not its moral), Arkady wants to give to his friends one set of candies per each cell of the field: the set of candies for cell $$$(i, j)$$$ will have exactly $$$(i^2 + j^2)$$$ candies of unique type.</p><p>There are $$$m$$$ friends who deserve the present. How many of these $$$n \times n$$$ sets of candies can be split equally into $$$m$$$ parts without cutting a candy into pieces? Note that each set has to be split independently since the types of candies in different sets are different.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n \le 10^9$$$, $$$1 \le m \le 1000$$$) — the size of the field and the number of parts to split the sets into.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the number of sets that can be split equally.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0017827731443686123" id="id0011999446368477662" class="input-output-copier">Copy</div></div><pre id="id0017827731443686123">3 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0045319506572343393" id="id008463035875962904" class="input-output-copier">Copy</div></div><pre id="id0045319506572343393">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006392988637705502" id="id007137610472825927" class="input-output-copier">Copy</div></div><pre id="id006392988637705502">6 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006374201531946596" id="id0004330419276772124" class="input-output-copier">Copy</div></div><pre id="id006374201531946596">13
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004543364247189292" id="id00574672134477366" class="input-output-copier">Copy</div></div><pre id="id004543364247189292">1000000000 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006955651910967063" id="id0035625740646448323" class="input-output-copier">Copy</div></div><pre id="id006955651910967063">1000000000000000000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, only the set for cell $$$(3, 3)$$$ can be split equally ($$$3^2 + 3^2 = 18$$$, which is divisible by $$$m=3$$$).</p><p>In the second example, the sets for the following cells can be divided equally: </p><ul> <li> $$$(1, 2)$$$ and $$$(2, 1)$$$, since $$$1^2 + 2^2 = 5$$$, which is divisible by $$$5$$$; </li><li> $$$(1, 3)$$$ and $$$(3, 1)$$$; </li><li> $$$(2, 4)$$$ and $$$(4, 2)$$$; </li><li> $$$(2, 6)$$$ and $$$(6, 2)$$$; </li><li> $$$(3, 4)$$$ and $$$(4, 3)$$$; </li><li> $$$(3, 6)$$$ and $$$(6, 3)$$$; </li><li> $$$(5, 5)$$$. </li></ul><p>In the third example, sets in all cells can be divided equally, since $$$m = 1$$$.</p></div>