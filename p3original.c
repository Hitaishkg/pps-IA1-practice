#include<stdio.h>
int input(){
    int n;
    printf("Enter the number to find the sum\n");
    scanf("%d",&n);
    return n;
}
int sum_n(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
void output(int n,int sum){
    for(int i=1;i<n;i++){
        printf("%d+",i);
    }
    printf("%d ",n);
    printf(" is %d",sum);

}
int main(){
    int n, sum;
    n=input();
    sum=sum_n(n);
    output(n,sum);
    return 0;
}