#include <stdio.h>
#include <math.h>
/*Só irá existir um triângulo se, somente se, os seus lados obedeceram à seguinte regra: um de seus lados deve ser maior que o valor absoluto (módulo) da diferença dos outros dois lados e menor que a soma dos outros dois lados.*/

int main(){
    double A, B, C;
    bool triangulo;
    scanf("%lf %lf %lf", &A, &B, &C);

    double diferencaA, somaA;
    diferencaA = abs(B-C);
    somaA = (B+C);

    double diferencaB, somaB;
    diferencaB = abs(A-C);
    somaB = (A+C);

    double diferencaC, somaC;
    diferencaC = abs(B-A);
    somaC = (B+A);

    if(A>diferencaA && A<somaA){
        triangulo = true;
    } else if (B>diferencaB && B<somaB){
        triangulo = true;
    } else if (C>diferencaC && C<somaC){
        triangulo = true;
    } else {
        triangulo = false;
    }
    
    if (triangulo == true)
    {
        double perimetro;
        perimetro = A+B+C;
        printf("Perimetro = %.1lf\n", perimetro);

    } else {
        double area;
        area = (A+B)*C;
        printf("Area = %.1lf\n", area/2);
    }
        

    return 0;
}