#include <stdio.h>

int main() {
    int n, i, isPalindrome = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n/2; i++) {
        if(a[i] != a[n - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("Palindrome array");
    else
        printf("Not a palindrome");

    return 0;
}
