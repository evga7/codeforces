/*
¹®Á¦
A. Chips Moving
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given n chips on a number line. The i-th chip is placed at the integer coordinate xi. Some chips can have equal coordinates.

You can perform each of the two following types of moves any (possibly, zero) number of times on any chip:

Move the chip i by 2 to the left or 2 to the right for free (i.e. replace the current coordinate xi with xi?2 or with xi+2);
move the chip i by 1 to the left or 1 to the right and pay one coin for this move (i.e. replace the current coordinate xi with xi?1 or with xi+1).
Note that it's allowed to move chips to any integer coordinate, including negative and zero.

Your task is to find the minimum total number of coins required to move all n chips to the same coordinate (i.e. all xi should be equal after some sequence of moves).

Input
The first line of the input contains one integer n (1¡Ân¡Â100) ? the number of chips.

The second line of the input contains n integers x1,x2,¡¦,xn (1¡Âxi¡Â109), where xi is the coordinate of the i-th chip.

Output
Print one integer ? the minimum total number of coins required to move all n chips to the same coordinate.

*/

#include <iostream>
#include <algorithm>
using namespace std;
long long arr[101];
int main()
{
	int N;
	int i,j;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%lld", &arr[i]);
	int res = 210000000;
	for (i = 0; i < N; i++)
	{
		int cnt = 0;
		for (j = 0; j < N; j++)
		{
			if (i == j)
				continue;
			if (abs(arr[i] - arr[j]) % 2 == 1)
				cnt++;
		}
		res = min(res, cnt);
	}
	printf("%d", res);
}