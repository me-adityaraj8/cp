<h2><a href="https://codeforces.com/contest/1474/problem/B" target="_blank" rel="noopener noreferrer">1474B — Different Divisors</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1474B](https://codeforces.com/contest/1474/problem/B) |

## Topics
`binary search` `constructive algorithms` `greedy` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Different Divisors</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Positive integer $$$x$$$ is called <span class="tex-font-style-it">divisor</span> of positive integer $$$y$$$, if $$$y$$$ is divisible by $$$x$$$ without remainder. For example, $$$1$$$ is a divisor of $$$7$$$ and $$$3$$$ is not divisor of $$$8$$$.</p><p>We gave you an integer $$$d$$$ and asked you to find <span class="tex-font-style-bf">the smallest</span> positive integer $$$a$$$, such that </p><ul><li> $$$a$$$ has at least $$$4$$$ divisors; </li><li> difference between any two divisors of $$$a$$$ is at least $$$d$$$.</li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 3000$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$d$$$ ($$$1 \leq d \leq 10000$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print one integer $$$a$$$ — the answer for this test case.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0003485525109174703" id="id0013594700265460558" class="input-output-copier">Copy</div></div><pre id="id0003485525109174703">2
1
2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000468352257472352" id="id007967808365747193" class="input-output-copier">Copy</div></div><pre id="id000468352257472352">6
15
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, integer $$$6$$$ have following divisors: $$$[1, 2, 3, 6]$$$. There are $$$4$$$ of them and the difference between any two of them is at least $$$1$$$. There is no smaller integer with at least $$$4$$$ divisors.</p><p>In the second test case, integer $$$15$$$ have following divisors: $$$[1, 3, 5, 15]$$$. There are $$$4$$$ of them and the difference between any two of them is at least $$$2$$$.</p><p>The answer $$$12$$$ is INVALID because divisors are $$$[1, 2, 3, 4, 6, 12]$$$. And the difference between, for example, divisors $$$2$$$ and $$$3$$$ is less than $$$d=2$$$.</p></div>