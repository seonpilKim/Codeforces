[A] Arena (https://codeforces.com/contest/1487/problem/A)

time limit per test : 1 second
memory limit per test : 256 megabytes
input : standard input
output : standard output

Problem
----
n heroes fight against each other in the Arena. Initially, the i-th hero has level ai.

Each minute, a fight between two different heroes occurs. These heroes can be chosen arbitrarily (it's even possible that it is the same two heroes that were fighting during the last minute).

When two heroes of equal levels fight, nobody wins the fight. When two heroes of different levels fight, the one with the higher level wins, and his level increases by 1.

The winner of the tournament is the first hero that wins in at least 100^500 fights (note that it's possible that the tournament lasts forever if no hero wins this number of fights, then there is no winner). A possible winner is a hero such that there exists a sequence of fights that this hero becomes the winner of the tournament.

Calculate the number of possible winners among n heroes.

Input
----
The first line contains one integer t (1≤t≤500) — the number of test cases.

Each test case consists of two lines. The first line contains one integer n (2≤n≤100) — the number of heroes. The second line contains n integers a1,a2,…,an (1≤ai≤100), where ai is the initial level of the i-th hero.

Output
----
For each test case, print one integer — the number of possible winners among the given n heroes.

풀이
----
문제를 말장난처럼 길게 늘여써놨지만, 요점은 "Calculate the number of possible winners" 이다.
level이 가장 낮은 heroes를 제외한 나머지 heroes는 possible winners이다.
hero의 level을 입력 받을 때 마다 min level을 갱신하면서 queue에 push한 뒤, pop하면서 min값이 아니면 the number of possible winners을 증가시키는 순서로 구현하였다.

 - Time complexity : O(n) 