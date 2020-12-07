#include <stdio.h>
int main()
{
    int y;

    printf("Enter year: ");
    scanf("%d",&y);

    if(y % 4 == 0)
    {
        if( y % 100 == 0)
        {
            if ( y % 400 == 0)
                printf("%d is a Leap Year", y);
            else
                printf("leap year will come after 3 years");
        }
        else
            printf("%d is a Leap Year", y );
    }
    else
        printf("leap year will come after 3 years");

    return 0;
}

/* 
    input year
    if(year / 4 || 100 || 400) {
        return its a leap year
    } else if(year / 4 || 100 ) {
        return its a leap year
    } else  if (!year / 4) {
        return its not a leap year
    } else {
        return its not a leap year
    }
*/