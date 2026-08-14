#include <stdio.h>
enum day{
MON =1,
TUE,
WED,
THUR,
FRI,
SAT,
SUN
};
int main()
{
    enum day today = TUE;
    switch (today)
    {
case 1:
    printf("Today is Monday");
    break;
case 2:
    printf("Today  is Tuesday");
    break;
}
return 0;
}
