#include <stdio.h>
#include <stdlib.h>

#define user 3

int u1(char name[100], int id, int sal){
    printf("Enter the Name: \n");
    scanf("%s", &name);
    printf("ID Number: ");
    scanf("%d",&id);
    printf("Your Salary My man: ");
    scanf("%d", &sal);
}

int main()
{
    int ch;
    printf("Enter your Choice: \n");
    printf("1. Create User, 2. Update User, 3. Delete User, 4. Credit Money, 5. Debit Money, 6. Transfer Money");
    while(1){
     scanf("%d", &ch);
        switch(ch){
            case 1:
            //u1();
            break;
        }
    }
}
