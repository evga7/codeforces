#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
long long arr[101];
int main(void)
{
	int T;
	scanf("%d", &T);
	int N;
	while (T--)
	{
		scanf("%d", &N);
		int i;
		double sum = 0;
		for (i = 0; i < N; i++)
		{
			scanf("%lld", &arr[i]);
			sum += arr[i];
		}
		int num = 1;
		while (1)
		{
			if (num * N >= sum)
				break;
			num++;
		}
		printf("%d\n", num);
	}
 
}