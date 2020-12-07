#include<stdio.h>
int main()
{
    int windSpeed;
    
    printf("enter wind speed: ");
    scanf("%d", &windSpeed);
    
    if(windSpeed < 25) {
        printf("Not a strong wind");
    } else if(windSpeed >= 25 && windSpeed <= 38) {
        printf("Strong wind");
    } else if(windSpeed >= 39 && windSpeed <= 54) {
        printf("Gale");
    } else if(windSpeed >= 55 && windSpeed <= 72) {
        printf("Whole gale");
    } else if(windSpeed > 72) {
        printf("Hurricane");
    } else {
        printf("enter correct number");
    }
}

/* 
    input windspeed

    if(windSpeed < 25) {
        return "Not a strong wind"
    } else if(windSpeed >= 25 && windSpeed <= 38) {
        return "Strong wind"
    } else if(windSpeed >= 39 && windSpeed <= 54) {
        return "Gale"
    } else if(windSpeed >= 55 && windSpeed <= 72) {
        return "Whole gale"
    } else if(windSpeed > 72) {
        return "Hurricane"
    } else {
        return "enter correct number"
    }
*/