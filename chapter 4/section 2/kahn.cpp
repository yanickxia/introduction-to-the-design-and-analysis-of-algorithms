#include<iostream>
#include<queue>
#include<list>
#include<vector>
using namespace std;

class Graph {
private:
	int V;
	list<int> *adj;

public:
	Graph(int V) {
		this->V = V;
		adj = new list<int>[V];
	}
	//有向图
	void addEdge(int src, int dest) {
		adj[src].push_back(dest);

	}

	void toplogicSortInd() {

		vector<int> indegree(V, 0);
		queue<int> q;
		vector<int>top; //用来存储拓扑排序的结果
		int count = 0;  //记录访问过的顶点个数
						//step1:计算入度
		for (int v = 0; v < V; v++) {
			list<int>::iterator itr;
			for (itr = adj[v].begin(); itr != adj[v].end(); itr++) {
				indegree[*itr]++;
			}
		}
		//step2:将入度为0的点入队
		for (int u = 0; u < V; u++) {
			if (indegree[u] == 0) q.push(u);
		}
		//step3 && step4
		while (!q.empty()) {
			int v = q.front();
			top.push_back(v);
			q.pop();
			count++;
			list<int>::iterator itr;
			for (itr = adj[v].begin(); itr != adj[v].end(); itr++) {
				if (--indegree[*itr] == 0)
					q.push(*itr);
			}

		}
		if (count != V) {
			cout << "\n图中存在环，拓扑排序无法完成。\n";
			return;
		}
		else {
			for (int i = 0; i < V; i++) {
				cout << top[i] << " ";
			}
			cout << endl;
		}
	}

};

// Driver program to test above functions
int main()
{
	// Create a graph given in the above diagram
	Graph g(6);
	g.addEdge(5, 2);
	g.addEdge(5, 0);
	g.addEdge(4, 0);
	g.addEdge(4, 1);
	g.addEdge(2, 3);
	g.addEdge(3, 1);

	cout << "拓扑排序的一种结果是 \n";
	g.toplogicSortInd();

	return 0;
}