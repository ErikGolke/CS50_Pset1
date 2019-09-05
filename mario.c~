#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int rows;
    int sharps;
    int spaces;
    
    do
    {
        printf("How high you want this bitch? ");
        height = GetInt();
    }
    while ((height >= 24) || (height < 0));
    
    for(rows = 0; rows < height; rows++)
    {
        for(spaces = (height - (rows + 1)); spaces > 0; spaces--)
        {
            printf(" ");
        }
        
        for(sharps = 0; sharps < (rows+1); sharps++)
        {
            printf("#");
        }
        
        printf("  ");
        
        for(sharps = 0; sharps < (rows+1); sharps++)
        {
        printf("#");
        }
       
        printf("\n");
    }
    return 0;
}
