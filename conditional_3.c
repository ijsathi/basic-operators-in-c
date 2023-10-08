#include <stdio.h>
int main()
{
    int tour;
    scanf("%d", &tour);
    if(tour >= 1500)
    {
        printf("Dhaka\n");
        if(tour >= 2000)
        {
             printf("Coxs bzr");
        }
        else{
             printf("Ashe pashe ghurbo");
        }
    }
    else{
        printf("upay bnau");
    }
    return 0;
}