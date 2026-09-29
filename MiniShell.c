#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    //List of all the programs (names must match the .exe files)
    char programs[16][30] = {
        "AreaCalculator",
        "BaunaDetector",
        "Calculator",
        "DistanceConverter",
        "FindingCubes",
        "GCDFinder",
        "GreatestOfThree",
        "GrossSalaryFinder",
        "HelloWorld",
        "nPrCalaulator",
        "NumberSwapping",
        "OddEven",
        "ProfitLossCalculator",
        "RemainderWithoutModulo",
        "Sizeof",
        "UnaryAdditionSubtraction"
    };

    char command[50];
    int number;
    int i;

    printf("Welcome to MiniShell!\n");
    printf("Type help to see the commands.\n");

    while (1)
    {
        //Take input
        printf("\nminishell> ");
        scanf("%s", command);

        //Check which command was typed
        if (strcmp(command, "help") == 0)
        {
            printf("list      - show all programs\n");
            printf("run <no.> - run a program (example: run 3)\n");
            printf("clear     - clear the screen\n");
            printf("exit      - close the shell\n");
        }
        else if (strcmp(command, "list") == 0)
        {
            for (i = 0; i < 16; i++)
            {
                printf("%d. %s\n", i + 1, programs[i]);
            }
        }
        else if (strcmp(command, "run") == 0)
        {
            //If the user did not type a number, ask again
            if (scanf("%d", &number) != 1)
            {
                printf("Please type a number, like: run 3\n");
                while (getchar() != '\n');
            }
            else if (number < 1 || number > 16)
            {
                printf("Please select a number between 1 and 16.\n");
            }
            else
            {
                printf("\n--- Running %s ---\n", programs[number - 1]);
                system(programs[number - 1]);
                printf("\n--- Finished ---\n");
            }
        }
        else if (strcmp(command, "clear") == 0)
        {
            system("cls");
        }
        else if (strcmp(command, "exit") == 0)
        {
            printf("Goodbye!\n");
            break;
        }
        else
        {
            printf("Unknown command. Type help to see the commands.\n");
        }
    }
}