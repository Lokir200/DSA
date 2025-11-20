#include <stdio.h>
#include <conio.h>

#define MAX 20

int queue[MAX], front = -1, rear = -1;
int visited[MAX];

void enqueue(int x) {
    if (rear == MAX - 1)
        return;
    if (front == -1)
        front = 0;
    queue[++rear] = x;
}

int dequeue() {
    if (front == -1 || front > rear)
        return -1;
    return queue[front++];
}

void bfs(int adj[][MAX], int n, int start) {
    int i, node;

    for (i = 0; i < n; i++)
        visited[i] = 0;

    enqueue(start);
    visited[start] = 1;

    while ((node = dequeue()) != -1) {
        printf("%d ", node);

        for (i = 0; i < n; i++) {
            if (adj[node][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

void main() {
    int adj[MAX][MAX], n, i, j, start;

    clrscr();

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("\nEnter starting vertex: ");
    scanf("%d", &start);

    printf("\nBFS Traversal: ");
    bfs(adj, n, start);

    getch();
}
