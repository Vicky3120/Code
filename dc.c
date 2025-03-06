#include<stdio.h>
#define MAX_USERS 3
struct user{
    int id;
    char name[100];
    int bal;

};

int main()
{

    struct  user user1[MAX_USERS];
    for(int i=0;i<MAX_USERS;i++){
        printf("enter the id:");
        scanf("%d",&user1[i].id);
         printf("enter the bal:");
        scanf("%d",&user1[i].bal);
    }
   for(int i=0;i<MAX_USERS;i++){
       printf("%d",&user1[i].id);
       printf("%d",&user1[i].bal);
   }
 int find;
 printf("enter the userID to check the balance");
 scanf("%d",&find);
 for(int i=0;i<MAX_USERS;i++){
    if(find == user1[i].id){
        printf("balance of user %d: %d",find,user1[i].bal);

    }
 }



}
