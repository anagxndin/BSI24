#include <stdio.h>
int main(){
    double A,B,C, n1, n2, n3;
    int v[3], aux;
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    v[0] = n1;
    v[1] = n2;
    v[2] = n3;

     //percorrer o vetor
     for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                    if(v[i] < v[j]){
                            aux = v[j];
                            v[j] = v[i];
                            v[i] = aux;
                    }
            }
    }

    A = v[2];
    B = v[1];
    C = v[0];

    if(A >= (B+C)){
        printf("NAO FORMA TRIANGULO\n");
    } 
    else if (A*A > (B*B + C*C) || B*B > (A*A + C*C) || C*C > (A*A + B*B))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (A*A == (B*B + C*C) || B*B == (A*A + C*C) || C*C == (A*A + B*B))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (A*A < (B*B + C*C) || B*B < (A*A + C*C) || C*C < (A*A + B*B))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (A==B && A==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if ((A==B && A!=C) || (C==B && A!=C) || (A==C && A!=B)){
        printf("TRIANGULO ISOSCELES\n");
    }
    
    
    


    return 0;
}