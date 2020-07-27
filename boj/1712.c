int main()
{
    int a, b, c;         // a : 고정비용, b : 가변비용, c : 개당 가격
    int result;
    
    scanf("%d %d %d", &a, &b, &c);
    result = (a/(c-b)) + 1;
    
    if (b >= c) result = -1;
    
    printf("%d", result);
    
    
        
    return 0;
}
