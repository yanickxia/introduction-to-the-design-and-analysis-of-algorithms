#include <iostream>
#include <queue>

using namespace std;

#define N 5

int maze[N][N] = {
	{ 0, 1, 1, 0, 0 },
	{ 0, 0, 1, 0, 1 },
	{ 0, 0, 1, 0, 0 },
	{ 1, 1, 0, 0, 1 },
	{ 0, 0, 1, 0, 0 }
};

int visited[N + 1] = { 0, };



void bfs(int start) {
	queue<int> Q;
	Q.push(start);
	visited[start] = 1;

	while (!Q.empty())
	{
		int front = Q.front();
		cout << front << " ";

		Q.pop();
		for (int i = 1;i <= N;i++) {
			if (!visited[i] && maze[front - 1][i - 1] == 1) {
				visited[i] = 1;
				Q.push(i);
			}
		}

	}

}






int main(int args, char**argv) {
	for (int i = 1; i <= N; i++)
	{
		if (visited[i] != 1)
		{
			bfs(i);
		}
	}

	return 0;
}
