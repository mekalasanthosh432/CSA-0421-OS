#include <stdio.h>

int main() {
    int b, p;
    printf("Enter number of blocks: ");
    scanf("%d", &b);

    int block[b];
    printf("Enter block sizes:\n");
    for (int i = 0; i < b; i++)
        scanf("%d", &block[i]);

    printf("Enter number of processes: ");
    scanf("%d", &p);

    int process[p], alloc[p];
    printf("Enter process sizes:\n");
    for (int i = 0; i < p; i++)
        scanf("%d", &process[i]);

    for (int i = 0; i < p; i++) alloc[i] = -1;

    for (int i = 0; i < p; i++)
        for (int j = 0; j < b; j++)
            if (block[j] >= process[i]) {
                alloc[i] = j;
                block[j] -= process[i];
                break;
            }

    for (int i = 0; i < p; i++) {
        if (alloc[i] != -1)
            printf("Process %d allocated to Block %d\n", i + 1, alloc[i] + 1);
        else
            printf("Process %d Not Allocated\n", i + 1);
    }
    return 0;
}
