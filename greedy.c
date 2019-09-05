#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float dollars, cents;
    int rcents;
    int quarters = 0, dimes = 0, nickels = 0;

    do
    {
    printf("How much change is owed?\n");
    dollars = GetFloat();
    (cents = dollars * 100);
    (cents = round(cents));
     rcents = cents;
    }
    while(rcents < 0);
    
     
    while(rcents >= 25)
    {
        quarters++;
        rcents -= 25;
    }
    while(rcents >= 10)
    {
        dimes++;
        rcents -= 10;
    }
    while (rcents >= 5)
    {
        nickels++;
        rcents -= 5;
    }
    
    
    printf("%d\n", quarters+dimes+nickels+rcents);
    
    
    return 0;
    
}


