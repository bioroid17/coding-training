#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
bool check[1005];
vector<int> vec[1001];
queue<int> q;
void dfs(int now)
{
	check[now] = 1;
	printf("%d ", now);
	for (int i = 0; i < vec[now].size();i++) 
	{
		int next = vec[now][i];
		if (check[next] == 0)
			dfs(next);
	}
}
int main(void)
{
	int n, m, v, a, b;
	scanf("%d %d %d", &n, &m, &v);
	while (m--)
	{
		scanf("%d %d", &a, &b);
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	for (int i = 1; i <= n; i++)
		sort(vec[i].begin(), vec[i].end());
	dfs(v);
	printf("\n");
	for (int i = 1; i <= n; i++)
		check[i] = 0;
	q.push(v);
	while (!q.empty())
	{
		int now = q.front();
		q.pop();
		if (check[now] == 1)
			continue;
		check[now] = 1;
		printf("%d ", now);
		for (int i = 0; i < vec[now].size(); i++)
		{
			int next = vec[now][i];
			if (check[next] == 1)
				continue;
			else
				q.push(next);
		}
	}
	printf("\n");
	return 0;
}