#include <stdio.h>
int main()
{
    int rahim;
    scanf("%d", &rahim);
    if(rahim <= 40 || rahim > 100)
    {
        printf("Eating food");
    }
    else{
        printf("Watching movie");
    }
    return 0;
}