#include <stdio.h>
#include<math.h>

int main(){
    float A, B;
    printf("B= ");scanf("%f", &B);
    printf("A= ");scanf("%f", &A);
    float C = sqrt(B*B-A*A);
    float keliling= A+B+C;
    float luas= A*C/2;
    printf("Alas =%.f cm\n",C);
    printf("Tinggi = %.f cm\n", A);
    printf("Keliling = %.f cm\n",keliling);
    printf("Luas = %.f cm^2",luas);
}