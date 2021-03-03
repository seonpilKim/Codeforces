[D] Pythagorean Triples (https://codeforces.com/contest/1487/problem/D)

time limit per test : 2 seconds
memory limit per test : 256 megabytes
input : standard input
output : standard output

Problem
----
A Pythagorean triple is a triple of integer numbers (a,b,c) such that it is possible to form a right triangle with the lengths of the first cathetus, the second cathetus and the hypotenuse equal to a, b and c, respectively. An example of the Pythagorean triple is (3,4,5).

Vasya studies the properties of right triangles, and he uses a formula that determines if some triple of integers is Pythagorean. Unfortunately, he has forgotten the exact formula; he remembers only that the formula was some equation with squares. So, he came up with the following formula: c=a^2−b.

Obviously, this is not the right formula to check if a triple of numbers is Pythagorean. But, to Vasya's surprise, it actually worked on the triple (3,4,5): 5=3^2−4, so, according to Vasya's formula, it is a Pythagorean triple.

When Vasya found the right formula (and understood that his formula is wrong), he wondered: how many are there triples of integers (a,b,c) with 1≤a≤b≤c≤n such that they are Pythagorean both according to his formula and the real definition? He asked you to count these triples.

Input
----
The first line contains one integer t (1≤t≤10^4) — the number of test cases.

Each test case consists of one line containing one integer n (1≤n≤10^9).

Output
----
For each test case, print one integer — the number of triples of integers (a,b,c) with 1≤a≤b≤c≤n such that they are Pythagorean according both to the real definition and to the formula Vasya came up with.

풀이
----
완전탐색으로는 시간초과를 피할 수 없으므로 조건을 찾아서 탐색범위를 좁혀야 한다.
주어진 식을 연립해보자.
 i) a^2 + b^2 = c^2
 ii) c = a^2 - b
 -> b(b + 1) = c(c  -1) 이므로 c = b + 1이고 b = c - 1이다.

c = b + 1을 (ii) 식에 대입하면, a^2 = 2b + 1식을 얻고, a는 홀수임을 알 수 있다.
이제, 홀수인 a와 a^2 = 2c - 1을 만족한다는 조건하에 완전탐색을 진행하면 O(root(n)) 까지 줄일 수 있다.
카운팅을 위해 a = 3부터 2씩 증가시키며(∵홀수이므로) a^2 <= 2n - 1까지 반복하도록 구현하였다.