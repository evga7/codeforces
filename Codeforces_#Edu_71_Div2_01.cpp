/*
¹®Á¦
A. There Are Two Types Of Burgers
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
There are two types of burgers in your restaurant ? hamburgers and chicken burgers! To assemble a hamburger you need two buns and a beef patty. To assemble a chicken burger you need two buns and a chicken cutlet.

You have b buns, p beef patties and f chicken cutlets in your restaurant. You can sell one hamburger for h dollars and one chicken burger for c dollars. Calculate the maximum profit you can achieve.

You have to answer t independent queries.

Input
The first line contains one integer t (1¡Ât¡Â100) ? the number of queries.

The first line of each query contains three integers b, p and f (1¡Âb, p, f¡Â100) ? the number of buns, beef patties and chicken cutlets in your restaurant.

The second line of each query contains two integers h and c (1¡Âh, c¡Â100) ? the hamburger and chicken burger prices in your restaurant.

Output
For each query print one integer ? the maximum profit you can achieve.
*/
#include <iostream>
#include <math.h>
#include <queue>
#include <string.h>
using namespace std;
vector<pair<int, int>> v;
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		int v1, v2;
		scanf("%d %d", &v1, &v2);
		v.push_back(make_pair(v1 > v2 ? b : c, v1 > v2 ? v1 : v2));
		v.push_back(make_pair(v1 > v2 ? c : b, v1 > v2 ? v2 : v1));
		int sum = 0;
		while (1)
		{
			if (a <=1)
				break;
			else if (v[0].first > 0)
			{
				sum += v[0].second;
				v[0].first--;
				a -= 2;
			}
			else
				break;
		}
		while (1)
		{
			if (a <=1)
				break;
			else if (v[1].first > 0)
			{
				sum +=v[1].second;
				v[1].first--;
				a -= 2;
			}
			else
				break;
		}
		v.pop_back();
		v.pop_back();
		printf("%d\n", sum);
	}
}