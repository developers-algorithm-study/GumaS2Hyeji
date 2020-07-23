#include <stdio.h>

int main()
{
    double h, t, s, d;
    double result;
    
    scanf("%lf %lf %lf", &h, &s, &t);
    scanf("%lf", &d);
    
    result = ((1 - (100 - ((h/t/d)*100))/s) * 100);
    
    
    if (result > 100) printf("X\n");
    else if(result <= 0) printf("O\n");
    else printf("%0.6lf", result);
}
