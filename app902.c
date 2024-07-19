#include <string.h>
#include <stdio.h>
void callUsername()
{
    //Declarative string
    char firstName[] = "";
    char lastName[] = "";

    printf("Enter stings of fist name : ");
    scanf("%s", &firstName);

    printf("Enter stings of fist name : ");
    scanf("%s", &lastName);

    printf("%s" ,firstName);
    printf("%s" ,lastName);

}