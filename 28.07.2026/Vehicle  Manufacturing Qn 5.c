#include<stdio.h>
int main()
{
    int t,v,w;
    int two,four;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&v);
        scanf("%d",&w);
        if(w<2*v || w%2!=0)
        {
            printf("-1\n");
        }
        else
        {
            four=(w-(2*v))/2;
            two=v-four;
            if(two<0 || four<0)
                printf("-1\n");
            else
                printf("%d %d\n",two,four);
        }
    }
    return 0;
}
