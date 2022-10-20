#include <stdio.h>

float AccelerationTime(float acc,float speed)
{
    float AccTime = speed/acc;
    return AccTime;
}    

float DistanceAccelerating(float acc)
{
    float Distance, speed;
    Distance = 1/2 * acc * AccelerationTime(acc,speed) * AccelerationTime(acc,speed); 
    return Distance;
}
    
float TimeTopSpeed(int length, float speed, float acc) // I've added float acc in TimeTopSpeed Function to indicate which acc is used in DistanceAccelerating Funtion.
{                                                       //Therefore, I don't need to use DistanceAccelerating Function again on line 23. 
                                                       //Because I have already calculated the distance using acc1 in TimeTopSpeed Function.
    float TimeLeft = (length - DistanceAccelerating(acc))/speed;
    return TimeLeft;
}

int FindWinner(int length,float acc1, float speed1, float acc2, float speed2)
{
    float TotalTime1= AccelerationTime(acc1,speed1) + TimeTopSpeed(length,speed1,acc1); 
    float TotalTime2 = AccelerationTime(acc2,speed2) + TimeTopSpeed(length,speed2,acc2);
    if (TotalTime1>TotalTime2) return 2;  
    if (TotalTime1<TotalTime2) return 1;
    if (TotalTime1==TotalTime2) return 0;
    
    return 0;
}

int main()
{
    int length;
    float acc1, speed1, acc2, speed2;
    
    printf("Enter the length of the race: \n");
    scanf("%d", &length);
    
    printf("Enter the acceleration of athlete 1: \n");
    scanf("%f", &acc1);
    
    printf("Enter the top speed of athlete 1: \n");
    scanf("%f", &speed1);
    
    printf("Enter the acceleration of athlete 2: \n");
    scanf("%f", &acc2);
    
    printf("Enter the top speed of athlete 2: \n");
    scanf("%f", &speed2);
    
    printf("Winner is athlete %d\n", FindWinner(length,acc1,speed1,acc2,speed2));
    
    return 0;
}


