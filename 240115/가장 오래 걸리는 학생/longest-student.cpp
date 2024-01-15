#include <iostream>
#include <vector>
#include <tuple>
#include <map>
using namespace std;

int n, m;
map<pair<int,int>,int> graph;
bool visited[100001];
int dist[100001];
int main() {
    int answer = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, d;
        cin >> x >> y >> d;
        graph.insert({{y,x},d});
        graph.insert({{x,y},d});
    }
    for (int i = 1; i <= n; i++)
        dist[i] = 1000000000;
    dist[n] = 0;

    for (int i = 1; i <= n; i++) {
        int min_index = -1;
        for (int j = 1; j <= n; j++) {
            if (visited[j]) continue;
            if (min_index == -1 || dist[min_index] > dist[j])
                min_index = j;
        }
        visited[min_index] = true;

        for (int j = 1; j <= n; j++) {
            if (graph[{min_index, j}] == 0) continue;
            dist[j] = min(dist[j], dist[min_index] + graph[{min_index, j}]);
        }
    }

    for (int i = 1; i <= n; i++) {
        
        answer = max(answer, dist[i]);
    }
    cout << answer;
    return 0;
}