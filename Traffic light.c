#include <stdio.h>

void main()
{
    int choice;

    printf("1. Red\n2. Yellow\n3. Green\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("STOP");
            break;

        case 2:
            printf("WAIT");
            break;

        case 3:
            printf("GO");
            break;

        default:
            printf("Invalid Choice");
    }
}
