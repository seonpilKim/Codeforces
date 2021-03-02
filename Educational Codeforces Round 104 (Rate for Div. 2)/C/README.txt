[C] Minimum Ties (https://codeforces.com/contest/1487/problem/C)

time limit per test : 1 second
memory limit per test : 256 megabytes
input : standard input
output : standard output

Problem
----
A big football championship will occur soon! n teams will compete in it, and each pair of teams will play exactly one game against each other.

There are two possible outcomes of a game:

the game may result in a tie, then both teams get 1 point;
one team might win in a game, then the winning team gets 3 points and the losing team gets 0 points.
The score of a team is the number of points it gained during all games that it played.

You are interested in a hypothetical situation when all teams get the same score at the end of the championship. A simple example of that situation is when all games result in ties, but you want to minimize the number of ties as well.

Your task is to describe a situation (choose the result of each game) so that all teams get the same score, and the number of ties is the minimum possible.

Input
----
The first line contains one integer t (1≤t≤100) — the number of test cases.

Then the test cases follow. Each test case is described by one line containing one integer n (2≤n≤100) — the number of teams.

Output
----
For each test case, print n(n−1)/2 integers describing the results of the games in the following order: the first integer should correspond to the match between team 1 and team 2, the second — between team 1 and team 3, then 1 and 4, ..., 1 and n, 2 and 3, 2 and 4, ..., 2 and n, and so on, until the game between the team n−1 and the team n.

The integer corresponding to the game between the team x and the team y should be 1 if x wins, −1 if y wins, or 0 if the game results in a tie.

All teams should get the same score, and the number of ties should be the minimum possible. If there are multiple optimal answers, print any of them. It can be shown that there always exists a way to make all teams have the same score.

풀이
----
n을 2부터 6까지 증가시키면서 종이에 그려보다보니 규칙성을 발견했다.
 - n이 홀수일때는 각각 n/2번씩 이기고 져야한다.
 - n이 짝수일때는 각각 n/2번씩 이기고 져야하며 1번 비겨야한다. (무승부 최소화 하기 위함)

이중배열에 각각 값을 대입하지 않고 바로 이중배열로 출력하였다.

 - Time complexity : O(n^2/2)