#include <stdio.h>

void guess(){
    int guess, num = 10;
    while(1){
        printf("Enter the number: ");
        scanf("%d", &guess);
        if(num ==  guess){
            printf("Correct!");
            return;
        }else{
            printf("Incorrect :(\n");
        }
    }
}
void main(){
    guess();
}
