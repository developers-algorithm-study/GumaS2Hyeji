#include <string.h>

int main()
{
    char input[15] = {0};
    char front[7] = {0};
    char *gender[2] = {0};
    
    int y1;
    int y2;
    char sex;
    
    int i = 0;
    
    scanf("%s", input);
    char *split = strtok(input, "-");
    sprintf(front, "%s", split);
    
    gender[i] = split;
    i ++;
    split = strtok(NULL, " ");
    gender[i] = split;
    
    y1 = front[0] - '0';
    y2 = front[1] - '0';
    
    if (gender[1][0] == '1' || gender[1][0] == '3') sex = 'M';
    else sex = 'F';
    
    if (y1 > 0 || y1 <= 9) printf("19%d%d/%c%c/%c%c %c", y1, y2, front[2], front[3], front[4], front[5], sex);
    else if (y1 <= 2 || y1 >= 0) printf("20%d%d/%c%c/%c%c %c", y1, y2, front[2], front[3], front[4], front[5], sex);
    
    return 0;
}
