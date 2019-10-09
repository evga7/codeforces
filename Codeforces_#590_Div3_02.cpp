#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
#include <list>
using namespace std;
list<long long>L;
long long N;
long long Size;
list<long long>::iterator it;
int main(void)
{
	scanf("%d %lld", &N, &Size);
	long long i;
	for (i = 0; i < N; i++)
	{
		long long num;
		int flag = 0;
		scanf("%lld", &num);
		for (it=L.begin();it!=L.end();it++)
		{
			if (*it==num)
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			if (L.size() == Size)
			{
				L.pop_back();
				L.push_front(num);
			}
			else
			{
				L.push_front(num);
			}
		}
	}
	cout << L.size()<<endl;
	for (it = L.begin(); it != L.end(); it++)
		cout << *it<<" ";
}