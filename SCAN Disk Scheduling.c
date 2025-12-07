#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, head, size;
    printf("Enter number of requests: ");
    scanf("%d", &n);

    int req[n], left[n], right[n];
    printf("Enter requests:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &req[i]);

    printf("Enter head position: ");
    scanf("%d", &head);

    printf("Enter disk size: ");
    scanf("%d", &size);

    int l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        if (req[i] < head) left[l++] = req[i];
        else right[r++] = req[i];
    }

    for (int i = 0; i < l - 1; i++)
        for (int j = i + 1; j < l; j++)
            if (left[i] < left[j]) {
                int t = left[i]; left[i] = left[j]; left[j] = t;
            }

    for (int i = 0; i < r - 1; i++)
        for (int j = i + 1; j < r; j++)
            if (right[i] > right[j]) {
                int t = right[i]; right[i] = right[j]; right[j] = t;
            }

    int total = 0;
    for (int i = 0; i < r; i++) {
        total += abs(right[i] - head);
        head = right[i];
    }
    total += abs(size - 1 - head);
    head = size - 1;

    for (int i = 0; i < l; i++) {
        total += abs(left[i] - head);
        head = left[i];
    }

    printf("Total Head Movement = %d\n", total);
    return 0;
}
