#include <stdio.h>

int parent[10];
int n;

int find(int x) {
    int y = x;
    while (parent[x] > 0) {
        x = parent[x];
    }
    return x;
}

void Union() {
    int x, y;
    printf("Enter the union nodes : ");
    scanf("%d", &x);
    scanf("%d", &y);

    int rootX = find(x);
    int rootY = find(y);

    if (parent[rootX] < parent[rootY]) {
        parent[rootX] += parent[rootY];
        parent[rootY] = rootX;
    } else {
        parent[rootY] += parent[rootX];
        parent[rootX] = rootY;
    }
}

void display() {
    for (int i = 0; i < n; ++i) {
        printf("%d ", parent[i]);
    }
    printf("\n");
}

int main() {
    int ch;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        parent[i] = -1;
    }

    do {
        printf("Enter the choice: \n1. Union\n2. Find\n3. Display\n4. Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                Union();
                break;
            case 2:
                int x;
                printf("Enter the element : ");
                scanf("%d", &x);
                printf("Root of %d is %d\n", x, find(x));
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exited..\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (ch != 4);

    return 0;
}
