#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempfahrenheit, tempcelcius;
    printf("Enter a Temp in Celcius: ");
    scanf("%f", &tempcelcius);
    tempfahrenheit = tempcelcius*9.0/5.0 + 32.0;
    printf("Your Temp in Farenheit is: %f\n", tempfahrenheit);
}
