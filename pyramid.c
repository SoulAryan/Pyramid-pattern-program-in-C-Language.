#include <stdio.h>
int main()
{
    int i;
    int j;
    int e;

    for(i=1;i<=6;i++)  //for rows//
    {
        for(j=6;j>i;j--)  //for left space//
        {
            printf(" ");
        }
        for(e=1;e<=i;e++)  //to print *,middle and right-side space//
        {
            printf("* ");
        }

            printf("\n");
    }
    return 0;
}
