<h2><a href="https://codeforces.com/contest/1097/problem/B" target="_blank" rel="noopener noreferrer">1097B — Petr and a Combination Lock</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1097B](https://codeforces.com/contest/1097/problem/B) |

## Topics
`bitmasks` `brute force` `dp`

---

## Problem Statement

<div class="header"><div class="title">B. Petr and a Combination Lock</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Petr has just bought a new car. He's just arrived at the most known Petersburg's petrol station to refuel it when he suddenly discovered that the petrol tank is secured with a combination lock! The lock has a scale of $$$360$$$ degrees and a pointer which initially points at zero:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/f7117555982acf5711ed387490b8ba9fc00be3f4.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>Petr called his car dealer, who instructed him to rotate the lock's wheel exactly $$$n$$$ times. The $$$i$$$-th rotation should be $$$a_i$$$ degrees, either clockwise or counterclockwise, and after all $$$n$$$ rotations the pointer should again point at zero.</p><p>This confused Petr a little bit as he isn't sure which rotations should be done clockwise and which should be done counterclockwise. As there are many possible ways of rotating the lock, help him and find out whether there exists at least one, such that after all $$$n$$$ rotations the pointer will point at zero again.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$1 \leq n \leq 15$$$) — the number of rotations.</p><p>Each of the following $$$n$$$ lines contains one integer $$$a_i$$$ ($$$1 \leq a_i \leq 180$$$) — the angle of the $$$i$$$-th rotation in degrees.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If it is possible to do all the rotations so that the pointer will point at zero after all of them are performed, print a single word "<span class="tex-font-style-tt">YES</span>". Otherwise, print "<span class="tex-font-style-tt">NO</span>". Petr will probably buy a new car in this case.</p><p>You can print each letter in any case (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003208829286368867" id="id006511672443797865" class="input-output-copier">Copy</div></div><pre id="id003208829286368867">3
10
20
30
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004598551638456375" id="id0009986500274706955" class="input-output-copier">Copy</div></div><pre id="id004598551638456375">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010457239627937631" id="id006156684811929798" class="input-output-copier">Copy</div></div><pre id="id0010457239627937631">3
10
10
10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0042190731083336896" id="id0041580044642691927" class="input-output-copier">Copy</div></div><pre id="id0042190731083336896">NO
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008728568219934791" id="id002679807277200137" class="input-output-copier">Copy</div></div><pre id="id008728568219934791">3
120
120
120
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001129767712819949" id="id005607907131922855" class="input-output-copier">Copy</div></div><pre id="id001129767712819949">YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, we can achieve our goal by applying the first and the second rotation clockwise, and performing the third rotation counterclockwise.</p><p>In the second example, it's impossible to perform the rotations in order to make the pointer point at zero in the end.</p><p>In the third example, Petr can do all three rotations clockwise. In this case, the whole wheel will be rotated by $$$360$$$ degrees clockwise and the pointer will point at zero again.</p></div>