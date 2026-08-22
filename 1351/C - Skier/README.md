<h2><a href="https://codeforces.com/contest/1351/problem/C" target="_blank" rel="noopener noreferrer">1351C — Skier</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1351C](https://codeforces.com/contest/1351/problem/C) |

## Topics
`data structures` `implementation`

---

## Problem Statement

<div class="header"><div class="title">C. Skier</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Skier rides on a snowy field. Its movements can be described by a string of characters '<span class="tex-font-style-tt">S</span>', '<span class="tex-font-style-tt">N</span>', '<span class="tex-font-style-tt">W</span>', '<span class="tex-font-style-tt">E</span>' (which correspond to <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-1"><span class="MJXp-mn" id="MJXp-Span-2">1</span></span></span>$1$ meter movement in the south, north, west or east direction respectively).</p><p>It is known that if he moves along a previously unvisited segment of a path (i.e. this segment of the path is visited the first time), then the time of such movement is <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-3"><span class="MJXp-mn" id="MJXp-Span-4">5</span></span></span>$5$ seconds. If he rolls along previously visited segment of a path (i.e., this segment of the path has been covered by his path before), then it takes <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-5"><span class="MJXp-mn" id="MJXp-Span-6">1</span></span></span>$1$ second.</p><p>Find the skier's time to roll all the path.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-7"><span class="MJXp-mi MJXp-italic" id="MJXp-Span-8">t</span></span></span>$t$ (<span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-9"><span class="MJXp-mn" id="MJXp-Span-10">1</span><span class="MJXp-mo" id="MJXp-Span-11" style="margin-left: 0.333em; margin-right: 0.333em;">≤</span><span class="MJXp-mi MJXp-italic" id="MJXp-Span-12">t</span><span class="MJXp-mo" id="MJXp-Span-13" style="margin-left: 0.333em; margin-right: 0.333em;">≤</span><span class="MJXp-msubsup" id="MJXp-Span-14"><span class="MJXp-mn" id="MJXp-Span-15" style="margin-right: 0.05em;">10</span><span class="MJXp-mn MJXp-script" id="MJXp-Span-16" style="vertical-align: 0.5em;">4</span></span></span></span>$1 \le t \le 10^4$) — the number of test cases in the input. Then <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-17"><span class="MJXp-mi MJXp-italic" id="MJXp-Span-18">t</span></span></span>$t$ test cases follow.</p><p>Each set is given by one nonempty string of the characters '<span class="tex-font-style-tt">S</span>', '<span class="tex-font-style-tt">N</span>', '<span class="tex-font-style-tt">W</span>', '<span class="tex-font-style-tt">E</span>'. The length of the string does not exceed <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-19"><span class="MJXp-msubsup" id="MJXp-Span-20"><span class="MJXp-mn" id="MJXp-Span-21" style="margin-right: 0.05em;">10</span><span class="MJXp-mn MJXp-script" id="MJXp-Span-22" style="vertical-align: 0.5em;">5</span></span></span></span>$10^5$ characters.</p><p>The sum of the lengths of <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-23"><span class="MJXp-mi MJXp-italic" id="MJXp-Span-24">t</span></span></span>$t$ given lines over all test cases in the input does not exceed <span class="MathJax_Preview" style="color: inherit;"><span class="MJXp-math" id="MJXp-Span-25"><span class="MJXp-msubsup" id="MJXp-Span-26"><span class="MJXp-mn" id="MJXp-Span-27" style="margin-right: 0.05em;">10</span><span class="MJXp-mn MJXp-script" id="MJXp-Span-28" style="vertical-align: 0.5em;">5</span></span></span></span>$10^5$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the desired path time in seconds.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009422567638280446" id="id001585108001828378" class="input-output-copier">Copy</div></div><pre id="id009422567638280446">5
NNN
NS
WWEN
WWEE
NWNWS
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0008976860011508025" id="id008938688122514172" class="input-output-copier">Copy</div></div><pre id="id0008976860011508025">15
6
16
12
25
</pre></div></div></div>