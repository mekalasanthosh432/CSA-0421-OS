#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of files: ");
    scanf("%d", &n);

    char files[n][20];
    printf("Enter file names:\n");
    for (int i = 0; i < n; i++)
        scanf("%s", files[i]);

    printf("Files in directory:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", files[i]);

    return 0;
}
