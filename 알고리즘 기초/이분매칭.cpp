#include<iostream>
#include<vector>
#define MAX 101
using namespace std;

vector<int> a[MAX];
int d[MAX];
bool c[MAX];
int m, s;

bool dfs(int x)
{ 
	for (int i = 0; i < a[x].size(); i++)
	{
		int t = a[x][i];//t는 방문 노드
		if (c[t]) continue;
		c[t] = true;
		if (d[t] == 0 || dfs(d[t]))
		{
			d[t] = x;
			return true;//방문 노드가 첫 방문이면 true return
		}
	}
	return false;
}

int main()
{
	a[1].push_back(1);
	a[1].push_back(2);
	a[1].push_back(3);
	a[2].push_back(1);
	a[3].push_back(2);
	int count = 0;
	for (int i = 1; i <= 3; i++)
	{
		fill(c, c + MAX, false);
		if (dfs(i))count++;
	}
	printf("%d개의 매칭이 이루어졌습니다.\n", count);
	for (int i=1;i<=100;i++)
	{
		if (d[i] != 0)
			printf("%d->%d\n", d[i], i);
	}
}
