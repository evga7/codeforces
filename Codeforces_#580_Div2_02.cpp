/*
¹®Á¦
B. Make Product Equal One
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given n numbers a1,a2,¡¦,an. With a cost of one coin you can perform the following operation:

Choose one of these numbers and add or subtract 1 from it.

In particular, we can apply this operation to the same number several times.

We want to make the product of all these numbers equal to 1, in other words, we want a1?a2 ¡¦ ?an=1.

For example, for n=3 and numbers [1,?3,0] we can make product equal to 1 in 3 coins: add 1 to second element, add 1 to second element again, subtract 1 from third element, so that array becomes [1,?1,?1]. And 1?(?1)?(?1)=1.

What is the minimum cost we will have to pay to do that?

Input
The first line contains a single integer n (1¡Ân¡Â105) ? the number of numbers.

The second line contains n integers a1,a2,¡¦,an (?109¡Âai¡Â109) ? the numbers.

Output
Output a single number ? the minimal number of coins you need to pay to make the product equal to 1.

*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int N;
	int i;
	int op = 0;
	long long num;
	long long cnt = 0;
	long long zero = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%lld", &num);
 
		if (num == 0)
		{
			zero++;
		}
		else if (num < 0)
		{
			cnt += abs(num)-1;
			op++;
		}
		else
		{
			cnt += num - 1;
		}
	}
	if (op % 2)
	{
		if (zero > 0)
		{
			zero--;
			cnt++;
		}
		else
		cnt += 2;
		cnt += zero;
	}
	else
		cnt += zero;
	printf("%lld", cnt);
}