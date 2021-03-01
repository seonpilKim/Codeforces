[B] Minimal Cost (https://codeforces.com/contest/1491/problem/B)

time limit per test : 2 seconds
memory limit per test : 256 megabytes
input : standard input
output : standard output

Problem
----
There is a graph of n rows and 106+2 columns, where rows are numbered from 1 to n and columns from 0 to 106+1:

<picture>

Let's denote the node in the row i and column j by (i,j).

Initially for each i the i-th row has exactly one obstacle — at node (i,ai). You want to move some obstacles so that you can reach node (n,106+1) from node (1,0) by moving through edges of this graph (you can't pass through obstacles). Moving one obstacle to an adjacent by edge free node costs u or v coins, as below:

If there is an obstacle in the node (i,j), you can use u coins to move it to (i−1,j) or (i+1,j), if such node exists and if there is no obstacle in that node currently.
If there is an obstacle in the node (i,j), you can use v coins to move it to (i,j−1) or (i,j+1), if such node exists and if there is no obstacle in that node currently.
Note that you can't move obstacles outside the grid. For example, you can't move an obstacle from (1,1) to (0,1).
Refer to the picture above for a better understanding.

Now you need to calculate the minimal number of coins you need to spend to be able to reach node (n,106+1) from node (1,0) by moving through edges of this graph without passing through obstacles.

Input
----
The first line contains a single integer t (1≤t≤104) — the number of test cases.

The first line of each test case contains three integers n, u and v (2≤n≤100, 1≤u,v≤109) — the number of rows in the graph and the numbers of coins needed to move vertically and horizontally respectively.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤106) — where ai represents that the obstacle in the i-th row is in node (i,ai).

It's guaranteed that the sum of n over all test cases doesn't exceed 2⋅104.

Output
----
For each test case, output a single integer — the minimal number of coins you need to spend to be able to reach node (n,106+1) from node (1,0) by moving through edges of this graph without passing through obstacles.

It can be shown that under the constraints of the problem there is always a way to make such a trip possible.

풀이
----
각 행마다 하나의 장애물만 존재하며, 장애물의 위치에 따라 드는 최소비용만 구하면 된다. (BFS같은 알고리즘 불필요)

다음과 같은 3가지 경우만 고려하여 최소비용을 구하면 된다.

1. 두 개의 장애물이 두 칸 이상 떨어져 있는 경우가 하나라도 존재하면, 굳이 장애물을 이동시키지 않아도 목표지점에 도달할 수 있다.
2. 두 개의 장애물이 한 칸 떨어져 있는 경우가 하나라도 존재하면, 하나의 장애물을 위(아래), 옆으로 이동시키는 비용 중 최소비용을 택하면 목표지점에 도달할 수 있다.
3. 만약 장애물들이 일렬로 배치되어있다면, 한 번은 옆으로 밀고, 위(아래) 또는 옆으로 미는 비용 중 최소비용을 더하면 목표지점에 도달하는 최소비용을 구할 수 있다.