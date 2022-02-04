#include<stdio.h>
void input_two_string(char a[] , char b[]){
    printf("Enter two words to Compare\n");
    scanf("%s %s",a,b);
}
int  strcpm(char a[], char b[]){
    int i=0, result=0;
    
    while(a[i]!='\0'&&b[i]!='\0'){
        if(a[i]>b[i]){
            result =1;
            break;
        }
        else if(a[i]<b[i]){
            result=-1;
            break;
        }
        else{ 
        i++;
        }
    }
    if(a[i]=='\0'&& b[i]=='\0'){
        result=0;
    }
    
    else if(a[i]=='\0'){
        result=-1;
    }
    else if (b[i]=='\0'){
        result=1;
    }
    
    
   
    return result;
}
void output(char a[],char b[], int result){
    if(result>0){
        printf("%s is greater than %s",a,b);
    }
    else if(result<0){
         printf("%s is greater than %s",b,a);
    }
    else if(result==0){
        printf("Both the words are same\n");
    }
}
int main(){
    char a[25];
    char b[25];
    int result;
   input_two_string( a , b);
    result=strcpm(a,b);
    output(a,b,result);
    return 0;
}