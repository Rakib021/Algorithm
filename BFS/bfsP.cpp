#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;

int visited[N];
vector<int> adj_list[N];

void bfs(int src)
{
    queue<int> q;

    visited[src] = 1;
    q.push(src);
    while (!q.empty())
    {
        int head = q.front();
        q.pop();

        cout << head << endl;
        for (int adj_node : adj_list[head]) //adjacent list a head er shate ki ki adjacent node ache shegulu
        {
            if (visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }
    }
}

/*

   0-----1        2----3
         |        |
         |        |
         |        |
         5--------4

         node->6
         edge->6

         list of adj_node->
         6 6

         0 1
         2 3
          1 5
          2 4
          5 4
          1 2
*/

int main()
{
    int nodes, edge;

    cin >> nodes >> edge;

    for (int i = 0; i < edge; i++) // edge jader shate connected tader porjonto loop cholbe
    {
        int u, v; //j node er shate adjacent oi node duita
        cin >> u >> v;

        adj_list[u].push_back(v);// u er shate adjacent node v  2 3
        adj_list[v].push_back(u);//v er shate adjacent node u  2 3
    }
    int src = 0;
    bfs(src);
}