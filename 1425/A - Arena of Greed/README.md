<h2><a href="https://codeforces.com/contest/1425/problem/A" target="_blank" rel="noopener noreferrer">1425A — Arena of Greed</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1425A](https://codeforces.com/contest/1425/problem/A) |

## Topics
`games` `greedy`

---

## Problem Statement

<div class="header"><div class="title">A. Arena of Greed</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Lately, Mr. Chanek frequently plays the game <span class="tex-font-style-bf">Arena of Greed</span>. As the name implies, the game's goal is to find the greediest of them all, who will then be crowned king of Compfestnesia.</p><p>The game is played by two people taking turns, where Mr. Chanek takes the first turn. Initially, there is a treasure chest containing $$$N$$$ gold coins. The game ends if there are no more gold coins in the chest. In each turn, the players can make one of the following moves:</p><ul> <li> Take one gold coin from the chest. </li><li> Take half of the gold coins on the chest. This move is only available if the number of coins in the chest is even. </li></ul><p>Both players will try to maximize the number of coins they have. Mr. Chanek asks your help to find the maximum number of coins he can get at the end of the game if both he and the opponent plays optimally.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$T$$$ $$$(1 \le T \le 10^5)$$$ denotes the number of test cases.</p><p>The next $$$T$$$ lines each contain a single integer $$$N$$$ $$$(1 \le N \le 10^{18})$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>$$$T$$$ lines, each line is the answer requested by Mr. Chanek.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002841167182374825" id="id004663445679388504" class="input-output-copier">Copy</div></div><pre id="id002841167182374825">2
5
6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003989304377321159" id="id007061053269965717" class="input-output-copier">Copy</div></div><pre id="id003989304377321159">2
4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first case, the game is as follows: </p><ol> <li> Mr. Chanek takes one coin. </li><li> The opponent takes two coins. </li><li> Mr. Chanek takes one coin. </li><li> The opponent takes one coin. </li></ol><p>For the second case, the game is as follows: </p><ol> <li> Mr. Chanek takes three coins. </li><li> The opponent takes one coin. </li><li> Mr. Chanek takes one coin. </li><li> The opponent takes one coin. </li></ol></div>