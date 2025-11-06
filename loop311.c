#include <stdio.h>
int main(){
    int day, month, i, j, k;
    int count = 0;
    scanf("%d", &day);
    scanf("%d",&month);
    day--;
    for(i = 0; i < day; i++){
        printf("    ");
        count++;
    }
    for(j = 1; j <= month; j++){
        if(j < 10){
            printf("%d   ", j);
        }  
        else{
            printf("%d  ", j);
        }
        count++;
        if(count % 7 == 0){
            printf("\n");
        }
    }
    for(k = 0; k < 2; k++){
        count = count % 7;
        for(j = 1; j <= month; j++){
            if(j < 10){
                printf("%d   ", j);
            }  
            else{
             printf("%d  ", j);
            }
            count++;
            if(count % 7 == 0){
            printf("\n");
            }
        }
    }
}