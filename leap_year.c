#include<stdio.h>

int main()
{
    int year;

    printf("Enter any Year: \t");
    scanf("%d",&year);

    if(year % 400 == 0)
        printf("%d is Leap Year",year);

    else if(year % 4 == 0 && year % 100 != 0)
        printf("%d is Leap Year",year);

    else
        printf("%d is not leap Year.",year);


    getch();
    return 0;
}

