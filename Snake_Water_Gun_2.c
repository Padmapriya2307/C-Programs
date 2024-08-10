#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char get_computers_choice()
{
    srand(time(0));
    int comp = (rand() % 3);
    if(comp == 0)
    {
        return 's';
    }
    else if(comp == 1)
    {
        return 'w';
    }
    else{
        return 'g';
    }
}

int get_winner(char u,char c)
{
    if(u == c)
        return -1;
    else if((u == 's' && c== 'w') || (u == 'w' && c == 'g') || (u == 'g' && c == 's'))
    {
        return 1;
    }
    return 0;
}

 int main()
 {
    char user,computer;
    int result;
    int user_count = 0,computer_count = 0; 
    while(user_count < 5 && computer_count < 5)
    {
        printf("Enter the \'s\' for snake & Enter the \'w\' for water & Enter the \'g\' for gun : ");
        scanf(" %c",&user);
        computer = get_computers_choice();
        printf("You chose: %c\n", user);
        printf("Computer chose: %c\n", computer);
        result = get_winner(user,computer);
        if(result == -1)
        {
            printf("It\'s a Draw\n");
        }
        else if(result == 1)
        {
            printf("You Win this round!\n");
            user_count++;
        }
        else if(result == 0)
        {
            printf("Computer Win this round!\n");
            computer_count++;
        }
    }
    if(user_count == 5)
    {
        printf("You Win! by scoring %d/%d \n",user_count,computer_count);
    }
    else{
        printf("You Lose! by scoring %d/%d \n",user_count,computer_count);
    }
    return 0;
 }