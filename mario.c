#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
    h = get_int ("Vusota : "); 
    }
    while (h < 1 || h > 8);
    for (int x = 0; x < h; x++)
    {
        for (int y = 0; y < h; y++)
        {
           if (x + y < h - 1) 
           printf(" ");
           else     
           printf("#");
        }    
        printf("\n");
    }
}