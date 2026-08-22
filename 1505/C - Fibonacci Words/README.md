<h2><a href="https://codeforces.com/contest/1505/problem/C" target="_blank" rel="noopener noreferrer">1505C — Fibonacci Words</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1505C](https://codeforces.com/contest/1505/problem/C) |

## Topics
`*special` `implementation`

---

## Problem Statement

<div class="header"><div class="title">C. Fibonacci Words</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of a single string of uppercase letters A-Z. The length of the string is between 1 and 10 characters, inclusive.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output "<span class="tex-font-style-tt">YES</span>" or "<span class="tex-font-style-tt">NO</span>".</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003201882284790919" id="id0019304002594589498" class="input-output-copier">Copy</div></div><pre id="id003201882284790919">HELP
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0016608200809120022" id="id008280092761777251" class="input-output-copier">Copy</div></div><pre id="id0016608200809120022">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0001920021740877076" id="id009301393741087064" class="input-output-copier">Copy</div></div><pre id="id0001920021740877076">AID
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009375398558197126" id="id00537483144000451" class="input-output-copier">Copy</div></div><pre id="id009375398558197126">NO
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0043475401317442786" id="id007441758930077851" class="input-output-copier">Copy</div></div><pre id="id0043475401317442786">MARY
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003180031954135407" id="id004858189220272804" class="input-output-copier">Copy</div></div><pre id="id003180031954135407">NO
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00046864647471994925" id="id0015891157151567847" class="input-output-copier">Copy</div></div><pre id="id00046864647471994925">ANNA
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007697867988627609" id="id007761332517469984" class="input-output-copier">Copy</div></div><pre id="id007697867988627609">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00854017313375477" id="id006821967311020459" class="input-output-copier">Copy</div></div><pre id="id00854017313375477">MUG
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003656802824490595" id="id009996904845142475" class="input-output-copier">Copy</div></div><pre id="id003656802824490595">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009111012909605709" id="id0031239716493346914" class="input-output-copier">Copy</div></div><pre id="id0009111012909605709">CUP
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005626992696493107" id="id00018371360977745388" class="input-output-copier">Copy</div></div><pre id="id005626992696493107">NO
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0005063885108688393" id="id008631187553493476" class="input-output-copier">Copy</div></div><pre id="id0005063885108688393">SUM
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003488857998079741" id="id0040112742471331064" class="input-output-copier">Copy</div></div><pre id="id003488857998079741">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0007672486989639749" id="id003379823882236178" class="input-output-copier">Copy</div></div><pre id="id0007672486989639749">PRODUCT
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009858727817238401" id="id00913367068966971" class="input-output-copier">Copy</div></div><pre id="id009858727817238401">NO
</pre></div></div></div>