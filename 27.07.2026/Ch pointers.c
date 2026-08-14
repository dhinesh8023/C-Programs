#include<stdio.h>
int main()
{
    float f[] = {1.1, 2.2, 3.3, 4.4};
    float *ptr = f;
    for(int i=0;i<4;i++)
    {
        printf("%.1f\t",*ptr);
        ptr++;
    }
}
