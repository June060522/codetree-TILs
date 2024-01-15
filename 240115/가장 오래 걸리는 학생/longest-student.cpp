#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int n, m;
int graph[1001][1001];
bool visited[1001];
int dist[1001];
int main() {
    int answer = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y, d;
        cin >> x >> y >> d;
        graph[x][y] = d;
        graph[y][x] = d;
    }
    for (int i = 1; i <= n; i++)
        dist[i] = (int)1e6;
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
            if (graph[min_index][j] == 0) continue;
            dist[j] = min(dist[j], dist[min_index] + graph[min_index][j]);
        }
    }

    for (int i = 1; i <= n; i++) {
        
        answer = max(answer, dist[i]);
    }
    cout << answer;
    return 0;
}