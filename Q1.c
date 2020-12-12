#include<stdio.h>
int main ()
{
    int oranges;
    int dozens;
    int dozen;

    printf("enter number of oranges: ");
    scanf("%d",&oranges);

    dozens = oranges / 12;
    dozen = oranges % 12;

    if(dozen == 0 ) {
        printf("%d oranges make %d dozens ", oranges, dozens);
    } else {
        printf("your required oranges cannot be given in dozens");
    }
    return 0;
};

/* input oranges
    if(oranges == 12)
        return you have 1 dozens
    else :
        return you dont have enough oranges to make in dozens
*/