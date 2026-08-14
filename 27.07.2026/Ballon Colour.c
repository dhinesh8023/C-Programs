#include <stdio.h>
int main() {
    int n, i, j, count;
    char b[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf(" %c", &b[i]);

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++)
            if (b[i] == b[j]) count++;

        if (count % 2 != 0) {
            printf("%c", b[i]);
            return 0;
        }
    }
    printf("All are even");
}
