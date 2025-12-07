#include <stdio.h>

int main() {
    int users;
    printf("Enter number of users: ");
    scanf("%d", &users);

    char name[20];
    int f;

    for (int i = 0; i < users; i++) {
        printf("\nEnter user name: ");
        scanf("%s", name);

        printf("Enter number of files for %s: ", name);
        scanf("%d", &f);

        printf("Files under %s:\n", name);
        char files[f][20];
        for (int j = 0; j < f; j++) {
            scanf("%s", files[j]);
        }

        for (int j = 0; j < f; j++)
            printf(" -> %s\n", files[j]);
    }
    return 0;
}
