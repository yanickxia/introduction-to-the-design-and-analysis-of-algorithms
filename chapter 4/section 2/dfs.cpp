#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stack>

using namespace std;

#define N 5

int maze[N][N] = {
	{ 0, 0, 1, 0, 0 },
	{ 0, 0, 1, 0, 0 },
	{ 0, 0, 0, 1, 1 },
	{ 0, 0, 0, 0, 1 },
	{ 0, 0, 0, 0, 0 }
};

int visited[N + 1] = { 0, };
stack<int> st;



void dfs(int start) {
	visited[start] = 1;

	for (int i = 1; i <= N; i++)
	{
		if (!visited[i] && maze[start - 1][i - 1] == 1) {
			dfs(i);
		}
	}

	st.push(start);
}

int main(int args, char**argv) {
	for (int i = 1; i <= N; i++)
	{
		if (visited[i] != 1)
		{
			dfs(i);
		}
	}


	while (!st.empty())
	{
		printf(" %d ", st.top());
		st.pop();
	}

	return 0;
}
