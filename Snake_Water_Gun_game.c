#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main()
 {
    int user,computer;
    srand(time(0));
    computer = (rand() % 3) + 1;
    printf("Enter the 1 for snake & Enter the 2 for water & Enter the 3 for gun :");
    scanf("%d",&user);
    printf("Computer\'s choice is %d\n",computer);
    if(user == computer)
    {
        printf("Draw");
    }
    else if((user == 1 && computer == 2) || (user == 2 && computer == 3) || (user == 3 && computer == 1))
    {
        printf("You Win");
    }
    else if((user == 2 && computer == 1) || (user == 3 && computer == 2) || (user == 1 && computer == 3))
    {
        printf("Computer Win");
    }
    else
    {
        printf("Invalid Choice");
    }
    return 0;
 }