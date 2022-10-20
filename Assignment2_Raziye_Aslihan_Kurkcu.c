#include <stdio.h>

double streaming_a(int devices)
{
    double yearlyCost;
    if (devices <= 2)
        yearlyCost = 7.99 * 12;     // 7.99 is the monthly cost, so I multiplied by 12 to calculate the yearly cost
    else                             //(I did the same for other lines containing yearlyCost)
        yearlyCost = 12.99 * 12;
    return yearlyCost;
}

double streaming_b(int devices)
{
    double yearlyCost;
    if (devices <= 3)
        yearlyCost = 12.99 * 12;
    else if (4 <= devices && devices < 7)
        yearlyCost = 14.99 * 12;
    else
        yearlyCost = 24.99 * 12;
    return yearlyCost;
}
    
double streaming_c(int devices)
{
    double yearlyCost;
    if (devices <= 4)
        yearlyCost = 14.99 * 12;
    else if (5 <= devices && devices < 10)
        yearlyCost = 24.99 * 12;
    else
        yearlyCost = 34.99 * 12;
    return yearlyCost;
}

int main()
{
    int devices;
    char service;
    double yearlyMembershipCost;
    printf("Enter number of devices and streaming service: ");
    scanf("%d %c",&devices,&service);
    if (service == 'A')
        yearlyMembershipCost = streaming_a(devices);
    if (service == 'N')
        yearlyMembershipCost = streaming_b(devices);
    if (service == 'H')
        yearlyMembershipCost = streaming_c(devices);
    printf("yearly membership cost for %c: %.2lf$",service,yearlyMembershipCost);

    return 0;
}

