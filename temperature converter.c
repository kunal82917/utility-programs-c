#include<stdio.h>
#include<conio.h>

int main()
{
    int conversion,input;
    float temp,ConvertedTemp;
    printf("your input is in which form?\n 1.celcius\n 2.Farenheit\n 3.Kelvin\n");
    scanf("%d",&input);
    switch (input)
    {
    case 1:
        printf("enter the temperature in celcius:\n");
        scanf("%f",&temp);
        printf("do you want to convert  1.farenheit or 2.kelvin\n");
        scanf("%d",&conversion);
        switch (conversion)
        {
        case 1:
            ConvertedTemp = ( temp * 9 / 5 ) + 32 ;
            printf("Temperature in Farenheit is: %.1f\n",ConvertedTemp);
            break;
        case 2:
            ConvertedTemp = temp + 273.15 ;
            printf("Temperature in Kelvin is:%.2f\n",ConvertedTemp);
            break;
        default:
            printf("invalid choice\n");
        }
        break;
    case 2:
        printf("enter the temperature in farenheit:\n");
        scanf("%f",&temp);
        printf("do you want to convert in 1.celcius or 2. kelvin\n");
        scanf("%d",&conversion);
        switch (conversion)
        {
        case 1:
            ConvertedTemp = ( temp - 32 ) * 5/9 ;
            printf("Temperature in Celcius is: %.2f\n",ConvertedTemp);
            break;
        case 2:
            ConvertedTemp = ( ( temp - 32 ) * 5 / 9 ) + 273.15 ;
            printf("Temperature in Kelvin is: %.2f\n",ConvertedTemp);
            break;
        default:
            printf("invalid choice\n");
        }
        break;
    case 3:
        printf("enter the temperature in kelvin:\n");
        scanf("%f",&temp);
        printf("do want to convert in 1.celcius or 2.farenheit\n");
        scanf("%d",&conversion);
        switch (conversion)
        {
        case 1:
            ConvertedTemp = temp - 273.15 ;
            printf("Temperature in celcius is: %.2f",ConvertedTemp);
            break;
        case 2:
            ConvertedTemp = ( ( temp - 273.15 ) * 9 / 5 ) + 32 ;
            printf("Temperature in Farenheit is: %.2f",ConvertedTemp);
            break;
            default:
            printf("invalid choice\n");
        }
        break;
    }
    return 0;
}