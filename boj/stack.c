#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stack[10000] = {0};                      // stack

int main()
{
    int i, tmp, input, temp;
    int idx = -1;                         // array index
    
    char order[12];                    
    
    char *tkstr;
    
    scanf("%d", &tmp);
    
    for(i = 0; i<tmp; i++){ 
        scanf(" %[^\n]s", order);
        
        if(strcmp(order, "top") == 0) {            // top
            if(idx == -1) printf("%d\n", idx);
            else printf("%d\n", stack[idx]);
        }
        else if(strcmp(order, "size") == 0) {      // size
            printf("%d\n", idx+1);
        }
        else if(strcmp(order, "empty") == 0) {     // empty
            if(idx == -1) printf("1\n");
            else printf("0\n");
        }
        else if(strcmp(order, "pop") == 0) {       // pop
            if(idx == -1) printf("%d\n", idx);
            else {
                printf("%d\n", stack[idx--]);
            }
        }
        else {                                // push
            strtok(order, " ");
            tkstr = strtok(NULL, " ");
            stack[++idx] = atoi(tkstr);
            
        }
    }
    return 0;
}
