#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
#include <list>
#include <map>
using namespace std;
list<long long>L;
long long N;
long long Size;
list<long long>::iterator it;
map<long long, long long>m;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N >> Size;
	long long i;
	for (i = 0; i < N; i++)
	{
		long long num;
		int flag = 0;
		cin >> num;
		if (m[num])
		{
			flag = 1;
		}
		if (!flag)
		{
			if (L.size() == Size)
			{
				m[L.back()]--;
				L.pop_back();
				L.push_front(num);
			}
			else
			{
				L.push_front(num);
			}
			m[num] = 1;
		}
	}
	cout << L.size() << endl;
	for (it = L.begin(); it != L.end(); it++)
		cout << *it << " ";
}