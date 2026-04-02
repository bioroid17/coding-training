#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
bool check[1005];
vector<int> vec[1001];
int cnt = 0;
int dfs(int now)
{
	check[now] = 1;
	for (int i = 0; i < vec[now].size();i++)
	{
		int next = vec[now][i];
		if (check[next] == 0)
		{
			cnt++;
			dfs(next);
		}
	}
	return cnt;
}
int main(void)
{
	int n, m, a, b;
	scanf("%d %d", &n, &m);
	while (m--)
	{
		scanf("%d %d", &a, &b);
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	for (int i = 1; i <= n; i++)
		sort(vec[i].begin(), vec[i].end());
	printf("%d\n", dfs(1));
	return 0;
}