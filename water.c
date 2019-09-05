#include <stdio.h>
#include <cs50.h>

int main (void)
{
    printf("How long was your shower, in minutes, you dirty lad?\n");
    int minutes = GetInt();
    printf("You used %d bottles of water, you dirty scamp!\n", minutes * 12);
}