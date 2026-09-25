#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <unistd.h>

int main()
{
    // using namespace std;
    int n = 10;

    //Sparse graph
    //No rights diagram
    std::vector<std::vector<int>> adj(n); 
    // n 个顶点，编号 0 ~ n-1
    
    //rights diagram
    std::vector<std::vector<std::pair<int, int>>> graph_rights(n);


    //Adjacency matrix
    std::vector<std::vector<int>>  g(n, std::vector<int>(n, 0));

    //List of borders
    struct Edge {
        int u, v, w;
    };
    std::vector<Edge> edges;


    // 添加无向边
    auto addEdge = [&](int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // 如果是“有向图”，删掉这一行
    };

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 4);

    // 打印邻接表
    for (int i = 0; i < n; ++i) {
        std::cout << i << ": ";
        for (int v : adj[i]) std::cout << v << " ";
        std::cout << '\n';
    }

    // BFS 广度优先遍历
    std::vector<bool> vis(n, false);
    std::queue<int> q;
    vis[0] = true;
    q.push(0);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        std::cout << u << " ";

        for (int v : adj[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    std::cout << '\n';
    return 0;
}