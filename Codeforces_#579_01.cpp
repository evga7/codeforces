/*
¹®Á¦
A. Circle of Students

There are n students standing in a circle in some order. The index of the i-th student is pi. It is guaranteed that all indices of students are distinct integers from 1 to n (i.?e. they form a permutation).

Students want to start a round dance. A clockwise round dance can be started if the student 2 comes right after the student 1 in clockwise order (there are no students between them), the student 3 comes right after the student 2 in clockwise order, and so on, and the student n comes right after the student n?1 in clockwise order. A counterclockwise round dance is almost the same thing ? the only difference is that the student i should be right after the student i?1 in counterclockwise order (this condition should be met for every i from 2 to n).

For example, if the indices of students listed in clockwise order are [2,3,4,5,1], then they can start a clockwise round dance. If the students have indices [3,2,1,4] in clockwise order, then they can start a counterclockwise round dance.

Your task is to determine whether it is possible to start a round dance. Note that the students cannot change their positions before starting the dance; they cannot swap or leave the circle, and no other student can enter the circle.

You have to answer q independent queries.

Input
The first line of the input contains one integer q (1¡Âq¡Â200) ? the number of queries. Then q queries follow.

The first line of the query contains one integer n (1¡Ân¡Â200) ? the number of students.

The second line of the query contains a permutation of indices p1,p2,¡¦,pn (1¡Âpi¡Ân), where pi is the index of the i-th student (in clockwise order). It is guaranteed that all pi are distinct integers from 1 to n (i.?e. they form a permutation).

Output
For each query, print the answer on it. If a round dance can be started with the given order of students, print "YES". Otherwise print "NO".
*/

#include <iostream>
using namespace std;
int T, N;
int arr[201];
int main()
{
	scanf("%d", &T);
	while (T--)
	{
		int i;
		int flag = 0;
		int flag2 = 0;
		scanf("%d", &N);
		int index;
		int index2;
		for (i = 0; i < N; i++)
		{
			scanf("%d", &arr[i]);
			if (arr[i] == 1)
				index = i;
			if (arr[i] == N)
				index2= i;
		}
		for (i = 0; i < N-1; i++)
		{
			if (arr[(index + i+1) % N] - arr[(index + i) % N] == 1)
				continue;
			else
			{
				flag = 1;
				break;
			}
		}
		for (i = 0; i < N - 1; i++)
		{
			if (arr[(index2 +i) % N] - arr[(index2 + i+1) % N] == 1)
				continue;
			else
			{
				flag2 = 1;
				break;
			}
		}
		if (!flag||!flag2)
			printf("YES\n");
		else
			printf("NO\n");
	}
}