#include <iostream>
#include <vector>
#include <tuple>
#include <map>
using namespace std;

int n, m;
vector<pair<int,int>> graph[100001];
bool visited[100001];
int dist[100001];
int main() {
    int answer = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, d;
        cin >> x >> y >> d;
        graph[x].push_back({ y,d });
        graph[y].push_back({ x,d });
    }
    for (int i = 1; i <= n; i++)
        dist[i] = 1000000000;
    dist[n] = 0;

    for (int j = 0; j < n; j++)
    {
        int min_index = -1;
        for (int i = 1; i <= n; i++)
            if (min_index == -1 || dist[min_index] > dist[i])
                if(!visited[i])
                    min_index = i;
        visited[min_index] = true;
        for (int i = 0; i < graph[min_index].size(); i++)
        {
            if (visited[graph[min_index][i].first]) continue;
            dist[graph[min_index][i].first] = 
                min(dist[graph[min_index][i].first], graph[min_index][i].second + dist[min_index]);
        }


    }

    for (int i = 1; i <= n; i++) {
        
        answer = max(answer, dist[i]);
    }
    cout << answer;
    return 0;
}