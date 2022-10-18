#include<stdio.h>

int main(){
    float a, b ,i,j,x,y;
    printf ("a= ");scanf("%f", &a);
    printf ("b= ");scanf("%f", &b);
    printf ("i= ");scanf("%f", &i);
    printf ("j= ");scanf("%f", &j);
    printf ("x= ");scanf("%f", &x);
    printf ("y= ");scanf("%f", &y);
    float jumlah= (a-b)*(i/j)-(x+y);
    printf("%.3f", jumlah);
}