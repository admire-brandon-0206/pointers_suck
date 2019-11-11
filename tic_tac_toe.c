#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char checkVictory();

int main()
{
    char test_array[10] = "xxxxxxxxx";
    printf("%s\n", test_array);
    char *check = checkVictory(test_array);
    printf("The value is: %s\n", &*check);
    return 0;
}

char checkVictory(char *array)
{
    //takes a 1D tic tac toe board and returns the status as a pointer to a string.

    bool ongoing = true;
    bool horizontal = false;
    bool vertical = false;
    bool diagonal = false;
    bool tie = false;
    char current_victor = '0';

    //Check Horizontal
    for (int i = 0; i < 7; i = i + 3)
    {
        if (array[i] == array[i + 1] && array[i] == array[i + 2])
        {
            if (horizontal)
            {
                char *status = (char *)malloc(sizeof("error\0"));
                status = "error\0";
                printf("%s\n", &*status);
                return *status;
            }
            else
            {
                horizontal = true;
                current_victor = array[i];
            }
        }
    }
    //Check Vertical

    //Check Diagonal

    //Check Ties

    //Check bad board state
}
