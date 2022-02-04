#include<stdio.h>
int array_size(){
    int n;  
    printf("Enter the number of elements to be added\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n,int a[n]){
    printf("Enter the numbers to be added\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int sum_n_arrays(int n,int a[n]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
void output(int n,int a[n],int sum){
    printf("the sum of ");
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);
    }printf("is %d",sum);
}
int main(){
    int n;
    int sum;
    n=array_size();
    int a[n];
    input_array(n,a);
    sum=sum_n_arrays(n,a);
    output(n,a,sum);
    return 0;
}

