#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float t;
    printf("Is the Temperature in \'F\' or \'C\'?:");
    scanf(" %c",&unit);
    unit = toupper(unit);
    if(unit == 'C')
    {
       printf("\n Enter the temp in Celsius: ");
       scanf(" %f",&t); 
       t = (t * 9 / 5) + 32;
       printf("The Temperature in Farenheit is %.1f F ",t);
    }
    else if(unit == 'F')
    {
       printf("\n Enter the temp in Farenheit: ");
       scanf(" %f",&t); 
       t = (t - 32) * 5 / 9;
       printf("The Temperature in Celsius is %.1f C",t);
    }
    else{
        printf("%c is not a valid unit of measurement ",unit);
    }
}