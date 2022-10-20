#include <stdio.h>
void printRoman(int);
int main()
{
    int number;
    do{
        printf("Enter a number between 1 and 89, Enter 0 to quit:\n");
        scanf("%d",&number);
        if(number>=1 && number<=89){
            printf("\n");
            printRoman(number);
            printf("\n\n");
        } 
        else if (number!=0) printf("Invalid number!\n");
    }while(number!=0);
    printf("Goodbye!");
    return 0;
}

void printRoman(int number){
    
    while(number/50){
        printf("L");
        number-=50;}
    if(number/40){
        printf("X");
        number+=10;}
    while(number/50){
        printf("L");
        number-=50;} 
        
    while(number/10){
        printf("X");
        number-=10;}
    if(number/9){
        printf("I");
        number+=1;}
    while(number/10){
        printf("X");
        number-=10;}
        
    while(number/5){
        printf("V");
        number-=5;}
    if(number/4){
        printf("I");
        number+=1;}
    while(number/5){
        printf("V");
        number-=5;}
        
    while(number%10!=0){
        printf("I");
        number-=1;} 
}

