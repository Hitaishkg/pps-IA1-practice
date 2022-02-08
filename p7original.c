#include<stdio.h>
#include<string.h>
typedef struct complex{
    float real;
    float imaginary;
}complex_complex;
void input(complex_complex  *e1, complex_complex *e2){
    
    printf("Enter the value of 1st complex number\n ");
    scanf("%f %f",&e1->real,&e1->imaginary);
    printf("Enter the value of 2nd complex number\n ");
    scanf("%f %f",&e2->real,&e2->imaginary);
}
complex_complex sumcomplex(complex_complex e1,complex_complex e2){
    struct complex e3;
    e3.real=e1.real+e2.real;
    e3.imaginary=e1.imaginary+e2.imaginary;
    return e3;
    
}
void output(complex_complex e1,complex_complex e2,complex_complex e3 ){
    printf("the sum of %.2f+i%.2f +  %.2f+i%.2f = %.2f+i%.2f",e1.real,e1.imaginary,e2.real,
    e2.imaginary,e3.real,e3.imaginary);
}
int main(){
    complex_complex e1,e2,e3;
    input(&e1,&e2);
    e3=sumcomplex(e1,e2);
    output(e1,e2,e3);
    return 0;
    
}

