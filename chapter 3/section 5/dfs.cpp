#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define N 5

int maze[N][N] = {
	{ 0, 1, 1, 0, 0 },
	{ 0, 0, 1, 0, 1 },
	{ 0, 0, 1, 0, 0 },
	{ 1, 1, 0, 0, 1 },
	{ 0, 0, 1, 0, 0 }
};

int visited[N + 1] = { 0, };

void dfs(int start) {
	visited[start] = 1;

	printf("visit point %d ", start);

	for (int i = 1; i <= N; i++)
	{
		if (!visited[i] && maze[start - 1][i - 1] == 1) {
			dfs(i);
		}
	}
}

int main(int args, char**argv) {
	for (int i = 1; i <= N; i++)
	{
		if (visited[i] != 1)
		{
			dfs(i);
		}
	}

	return 0;
}
