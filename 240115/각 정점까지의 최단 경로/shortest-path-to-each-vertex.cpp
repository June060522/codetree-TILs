#include <iostream>
#include <queue>
#include <vector>
#include <tuple>
#include <map>
using namespace std;

int n, m;
vector<pair<int,int>> graph[20001];
priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
bool visited[20001];
int dist[20001];
int main() {
    int answer = 0;
    cin >> n >> m;
    int k;
    cin >> k;
    for (int i = 0; i < m; i++)
    {
        int x, y, d;
        cin >> x >> y >> d;
        graph[x].push_back({ y,d });
        graph[y].push_back({ x,d });
    }
    for (int i = 1; i <= n; i++)
        dist[i] = 200000;
    dist[k] = 0;
    pq.push({ 0,k });
    int min_index = 0;
    while(!pq.empty())
    {
        pair<int, int> p = pq.top();
        pq.pop();
        min_index = p.second;
        if (visited[min_index])
            continue;

        visited[min_index] = true;
        for (int i = 0; i < graph[min_index].size(); i++)
        {
            if (visited[graph[min_index][i].first]) continue;
            dist[graph[min_index][i].first] = 
                min(dist[graph[min_index][i].first], graph[min_index][i].second + dist[min_index]);
            pq.push({ dist[graph[min_index][i].first],graph[min_index][i].first });
        }


    }

    for (int i = 1; i <= n; i++) {
        cout << dist[i] << endl;
    }
}