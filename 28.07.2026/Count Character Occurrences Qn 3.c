#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int i, j, count = 0;
    scanf("%s", str1);
    scanf("%s", str2);
    for(i = 0; i < strlen(str2); i++)
    {
        for(j = 0; j < strlen(str1); j++)
        {
            if(str2[i] == str1[j])
            {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}
