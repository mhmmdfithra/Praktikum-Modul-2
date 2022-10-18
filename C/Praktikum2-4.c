#include<stdio.h>

int main(){
float r,t,phi=3.14285714;
    printf("jari-jari ="); scanf("%f", &r);
    printf("Tinggi = "); scanf("%f", &t);
float volume = phi*r*r*t;
    printf("Volume = %.2f\n", volume);
float luas = 2*phi*r*(r+t);
    printf("Luas = %.2f\n", luas);
float keliling = 2*phi*r;
    printf("Keliling = %.2f", keliling);
}