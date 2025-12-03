#include <stdio.h>
#include <stdlib.h>
#define maxvolt 12.6
#define minvolt 10.5
#define maxamper 5.0

    int main()
{
    float volt,amper,power;
    printf("What'is the current volt of drone's battery right know ?\n");
    scanf("%f",&volt);
    printf("What'is the current amper of drone's battery right know ?\n");
    scanf("%f",&amper);
    power = volt * amper;
    printf("The power consumption is %.2f watt.\n",power);
    printf("Is there any high voltage problem ? %d\n",(volt>=maxvolt));
    printf("Is there any low voltage problem ? %d\n",(volt<=minvolt));
    printf("Is there ang high current problem ? %d\n",(amper>maxamper));
    printf("The system is in safe right know ? %d\n",(10.5<=volt<=12.6)&&(amper<maxamper));
    return 0;
}
