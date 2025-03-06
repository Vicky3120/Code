// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
void main() {
  char name[50]="Vicky";
     char n[50]="1234";
  char r[50];
  char s[50];

  while(1){
      printf("enter name");
      scanf("%s",r);
      printf("enter num");
      scanf("%s",s);

      if(strcmp(name,r)==0 && strcmp(n,s)==0){
          printf("correct");
          return;
      }
      else
      {
          printf("wrong\n");
      }
  }


}
