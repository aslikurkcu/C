#include <stdio.h>
int factorial(int);
int power(int,int);
int combination(int,int);

int main(){
    int n,i,j,z;
    double sum1=0.0, sum2=0.0, sum3=0.0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        sum1=0.0,sum2=0.0;
        for(z=1; z<=n-i; z++){
            sum1+= power(i,z);
        }
        for(j=1; j<=i; j++){
            sum2+=(power(j,n)*combination(n,j))/(double)factorial(n);
        }
        sum3+= sum1/sum2;
    }
    printf("result is:%.2f\n",sum3);
    
    return 0;
}

int factorial(int n){
    int i,fac=1;
    for(i=1; i<=n; i++){
        fac= fac*i;
    }
    return fac;
} 

int power(int x,int y){
    int i,p=1;
    for(i=1; i<=y; i++){
        p= p*x;
    }
    return p;
}

int combination(int n,int r){
    int c,a;
    a= n-r;
    c= factorial(n)/(factorial(r)*factorial(a));
    return c;
}





