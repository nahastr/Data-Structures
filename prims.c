#include <stdio.h>

int n, ne = 1, mincost = 0, cost[10][10], visited[10] = {0};

void main() {
    printf("\nEnter the number of nodes:");
    scanf("%d", &n);

    printf("\nEnter the adjacency matrix:\n");

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = 999;
        }

    visited[1] = 1;

    while (ne < n) {
        int min = 999, a, b, u, v;

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (cost[i][j] < min && visited[i] != 0) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }

        if (visited[u] == 0 || visited[v] == 0) {
            printf("\n Edge %d:(%d %d) cost:%d", ne++, a, b, min);
            mincost += min;
            visited[b] = 1;
        }

        cost[a][b] = cost[b][a] = 999;
    }

    printf("\n Minimum cost=%d", mincost);
}
