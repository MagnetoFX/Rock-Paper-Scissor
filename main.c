#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void clear_input_buffer()
{
    while (getchar() != '\n')
        ;
}

int main()
{
    char choice;
    int human, computer;

    srand(time(0));
    printf("Rock, Paper, and Scissors game by Magneto \n");

    do
    {
        computer = rand() % 3;
        do
        {
            printf("\nEnter 0 for Rock, 1 for Paper, 2 for Scissors: ");
            scanf("%d", &human);
            clear_input_buffer();
            if (human < 0 || human > 2)
            {
                printf("Invalid choice. Please enter 0, 1, or 2.\n");
            }
        } while (human < 0 || human > 2);

        printf("You Chose: %d\n", human);
        printf("Computer Chose: %d\n", computer);

        if (human == computer)
        {
            printf("It's a Draw! \n");
        }
        else if ((human == 0 && computer == 1) || (human == 1 && computer == 2) || (human == 2 && computer == 0))
        {
            printf("Computer Won! \n");
        }
        else if ((human == 0 && computer == 2) || (human == 1 && computer == 0) || (human == 2 && computer == 1))
        {
            printf("You Won! \n");
        }

        printf("Do you want to play again? (Y/N): ");
        scanf(" %c", &choice);
        clear_input_buffer();
    } while (choice == 'Y' || choice == 'y');
    return 0;
}
