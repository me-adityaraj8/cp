<h2><a href="https://codeforces.com/contest/1146/problem/B" target="_blank" rel="noopener noreferrer">1146B — Hate "A"</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1146B](https://codeforces.com/contest/1146/problem/B) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">B. Hate "A"</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Bob has a string $$$s$$$ consisting of lowercase English letters. He defines $$$s'$$$ to be the string after removing all "<span class="tex-font-style-tt">a</span>" characters from $$$s$$$ (keeping all other characters in the same order). He then generates a new string $$$t$$$ by concatenating $$$s$$$ and $$$s'$$$. In other words, $$$t=s+s'$$$ (look at notes for an example).</p><p>You are given a string $$$t$$$. Your task is to find some $$$s$$$ that Bob could have used to generate $$$t$$$. It can be shown that if an answer exists, it will be unique.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains a string $$$t$$$ ($$$1 \leq |t| \leq 10^5$$$) consisting of lowercase English letters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a string $$$s$$$ that could have generated $$$t$$$. It can be shown if an answer exists, it is unique. If no string exists, print "<span class="tex-font-style-tt">:(</span>" (without double quotes, there is no space between the characters).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0049526363196792433" id="id002402850611363373" class="input-output-copier">Copy</div></div><pre id="id0049526363196792433">aaaaa
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00264511422281837" id="id0021138836125863536" class="input-output-copier">Copy</div></div><pre id="id00264511422281837">aaaaa
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0032793647074490195" id="id0014270307877450616" class="input-output-copier">Copy</div></div><pre id="id0032793647074490195">aacaababc
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003169325076515851" id="id0036197239036577933" class="input-output-copier">Copy</div></div><pre id="id003169325076515851">:(
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00754233894469264" id="id008975512321159176" class="input-output-copier">Copy</div></div><pre id="id00754233894469264">ababacacbbcc
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006312240484755683" id="id0028333038047657433" class="input-output-copier">Copy</div></div><pre id="id006312240484755683">ababacac
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005375509332094689" id="id007570030521569157" class="input-output-copier">Copy</div></div><pre id="id005375509332094689">baba
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0016219320513740265" id="id0004577923831883279" class="input-output-copier">Copy</div></div><pre id="id0016219320513740265">:(
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, we have $$$s = $$$ "<span class="tex-font-style-tt">aaaaa</span>", and $$$s' = $$$ "<span class="tex-font-style-tt"></span>".</p><p>In the second example, no such $$$s$$$ can work that will generate the given $$$t$$$.</p><p>In the third example, we have $$$s = $$$ "<span class="tex-font-style-tt">ababacac</span>", and $$$s' = $$$ "<span class="tex-font-style-tt">bbcc</span>", and $$$t = s + s' = $$$ "<span class="tex-font-style-tt">ababacacbbcc</span>".</p></div>