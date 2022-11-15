#include <stdio.h>
#include <conio.h>
int main()
{
    int windspeed;
    float volume;

    printf("Enter wind speed");
    printf("\nEnter the windspeed : ");
    scanf("%d", &windspeed);

    if (windspeed < 74)
        printf("normal");
    else if (windspeed > 73 & windspeed < 96)
        printf("Minimal damage to property");
    else if (windspeed > 96 & windspeed < 111)
        printf("Moderate damage to property");
    else if (windspeed > 111 & windspeed < 131)
        printf("Moderate damage to property");
    else if (windspeed > 131 & windspeed < 155)
        printf("Extreme damage to property");
    else if (windspeed > 155)
        printf("Catastrophic damage to property");
}