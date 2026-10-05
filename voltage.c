#include <stdio.h>

void main()
{
    float voltage;

    printf("Enter battery voltage: ");
    scanf("%f", &voltage);

    if (voltage > 12.5)
    {
        printf("Battery Status : HIGH");
    }
    else if (voltage >= 11.5)
    {
        printf("Battery Status : NORMAL");
    }
    else
    {
        printf("Battery Status : LOW");
    }
}
