#include<stdio.h>
int input(){
    int a;
    printf("Enter the numbers to be compared\n");
    scanf("%d",&a);
    return a;
}
int cmp(int a ,int b,int c){
    int largest;
    if(a>b&&a>c){
        largest=a;
    }
    else if(b>c){
        largest=b;
    }
    else {
        largest=c;
    }
    
    return largest;
}
void output(int a, int b, int c, int largest){
    if(largest==a){
        printf("%d is the largest\n",a);
    }
    else if(largest==b){
        printf("%d is the largest\n",b);
    }
    else if(largest==c){
        printf("%d is the largest\n",c);
    }
}
int main(){
    int a,b,largest,c;
    a=input();
    b=input();
    c=input();
    largest=cmp(a,b,c);
    output(a, b, c, largest);
    return 0;

}