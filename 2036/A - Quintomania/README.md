<h2><a href="https://codeforces.com/contest/2036/problem/A" target="_blank" rel="noopener noreferrer">2036A — Quintomania</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2036A](https://codeforces.com/contest/2036/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Quintomania</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Boris Notkin composes melodies. He represents them as a sequence of notes, where each note is encoded as an integer from $$$0$$$ to $$$127$$$ inclusive. The interval between two notes $$$a$$$ and $$$b$$$ is equal to $$$|a - b|$$$ semitones.</p><p>Boris considers a melody <span class="tex-font-style-it">perfect</span> if the interval between each two adjacent notes is either $$$5$$$ semitones or $$$7$$$ semitones.</p><p>After composing his latest melodies, he enthusiastically shows you his collection of works. Help Boris Notkin understand whether his melodies are <span class="tex-font-style-it">perfect</span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of melodies.</p><p>Each melody is described by two lines. </p><p>The first line contains an integer $$$n$$$ ($$$2 \leq n \leq 50$$$) — the number of notes in the melody.</p><p>The second line contains $$$n$$$ integers $$$a_{1}, a_{2}, \dots, a_{n}$$$ ($$$0 \leq a_{i} \leq 127$$$) — the notes of the melody.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each melody, output "<span class="tex-font-style-tt">YES</span>", if it is <span class="tex-font-style-it">perfect</span>; otherwise, output "<span class="tex-font-style-tt">NO</span>".</p><p>You can output the answer in any case (upper or lower). For example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>", and "<span class="tex-font-style-tt">YES</span>" will be recognized as positive responses.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005400206368876114" id="id007556144143812932" class="input-output-copier">Copy</div></div><pre id="id005400206368876114"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-odd test-example-line-1">114 109</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">17 10</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-odd test-example-line-3">76 83 88</div><div class="test-example-line test-example-line-even test-example-line-4">8</div><div class="test-example-line test-example-line-even test-example-line-4">38 45 38 80 85 92 99 106</div><div class="test-example-line test-example-line-odd test-example-line-5">5</div><div class="test-example-line test-example-line-odd test-example-line-5">63 58 65 58 65</div><div class="test-example-line test-example-line-even test-example-line-6">8</div><div class="test-example-line test-example-line-even test-example-line-6">117 124 48 53 48 43 54 49</div><div class="test-example-line test-example-line-odd test-example-line-7">5</div><div class="test-example-line test-example-line-odd test-example-line-7">95 102 107 114 121</div><div class="test-example-line test-example-line-even test-example-line-8">10</div><div class="test-example-line test-example-line-even test-example-line-8">72 77 82 75 70 75 68 75 68 75</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007813212665309105" id="id004041631428592106" class="input-output-copier">Copy</div></div><pre id="id007813212665309105">YES
YES
YES
NO
YES
NO
YES
YES
</pre></div></div></div>