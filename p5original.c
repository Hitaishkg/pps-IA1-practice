#include<stdio.h>
float input(){
    float n;
    printf("Please enter the number\n");
    scanf("%f",&n);
    return n;
}
float my_sqrt(float n){
    float result=0;
    float i;
    for(i=0.01;i*i<n;i=i+0.01);
    
            result=i;
        
    return result;
}
void output(float n,float sqrt_result ){
    printf("The square root of %.2f is %.2f",n,sqrt_result);
}
int main(){
    float n;
    n=input();
    float sqrt_result;
    sqrt_result=my_sqrt(n);
    output(n,sqrt_result);
    return 0;
}