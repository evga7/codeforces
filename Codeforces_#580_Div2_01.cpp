/*
¹®Á¦
A. Choose Two Numbers
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given an array A, consisting of n positive integers a1,a2,¡¦,an, and an array B, consisting of m positive integers b1,b2,¡¦,bm.

Choose some element a of A and some element b of B such that a+b doesn't belong to A and doesn't belong to B.

For example, if A=[2,1,7] and B=[1,3,4], we can choose 1 from A and 4 from B, as number 5=1+4 doesn't belong to A and doesn't belong to B. However, we can't choose 2 from A and 1 from B, as 3=2+1 belongs to B.

It can be shown that such a pair exists. If there are multiple answers, print any.

Choose and print any such two numbers.

Input
The first line contains one integer n (1¡Ân¡Â100) ? the number of elements of A.

The second line contains n integers a1,a2,¡¦,an (1¡Âai¡Â200) ? the elements of A.

The third line contains one integer m (1¡Âm¡Â100) ? the number of elements of B.

The fourth line contains m different integers b1,b2,¡¦,bm (1¡Âbi¡Â200) ? the elements of B.

It can be shown that the answer always exists.

Output
Output two numbers a and b such that a belongs to A, b belongs to B, but a+b doesn't belong to nor A neither B.

If there are multiple answers, print any.
*/
#include <iostream>
#include <queue>
using namespace std;
int arr[201];
int arr2[201];
int chk[301];
int chk2[301];
int main()
{
	int N, N2;
	int i, j;
	int num;
	int flag = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		chk[arr[i]] = 1;
	}
	scanf("%d", &N2);
	for (i = 0; i < N2; i++)
	{
		scanf("%d", &arr2[i]);
		chk2[arr2[i]] = 1;
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N2; j++)
		{
			if (!chk[arr[i] + arr2[j]] && !chk2[arr[i] + arr2[j]])
			{
				printf("%d %d\n", arr[i], arr2[j]);
				flag = 1;
				break;
			}
		}
		if (flag)
			break;
	}
}