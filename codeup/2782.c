#include <stdio.h>

int main()
{
    int i, j;
    int big, small;
    int cache[25001];     // map array reset for 1
    int w, h;                   // input value
    int result;                 // devide 1,000,000,000
    
    scanf("%d %d", &w, &h);
    
    if ( w > h )
    {
        big = w;
        small = h;
    }
    else
    {
        big = h;
        small = w;
    }
    
    for (i = 0; i < big; i++)
    {
        cache[i] = 1;
    }
    
    for (i = 0; i < small-1; i++)
    {
        for (j = 0; j < big-1; j++)
        {
            cache[j+1] = (cache[j] + cache[j+1]) % 1000000000;
        }
    }
    
    printf("%d\n", cache[big-1]);
    return 0;
}
