int main() {
    
    double a, r, n, result;      /* start, ratio, number, result */
    int i;
    
    scanf("%lf %lf %lf", &a, &r, &n);
    
    for (i = 0; i < n-1; i++)
    {
        a = a * r;
        
        /*******************************
         * a=2, r=3, n=7               *
         * i=1 : a=2*3=6,   r=3        *
         * i=2 : a=6*3=18,  r=3        *
         * i=3 : a=18*3=54, r=3        *
         *******************************/
         
    }
    printf("%.0lf", a);
	return 0;
}
