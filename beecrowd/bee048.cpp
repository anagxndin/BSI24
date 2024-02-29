#include <stdio.h>
int main(){
    double salario, novoSalario, reajuste; 
    int percentual;
    scanf("%lf", &salario);

    if (salario >= 0 && salario <= 400){
        novoSalario = salario + (0.15 * salario);
        percentual = 15;
    }
    if (salario > 400 && salario <= 800){
        novoSalario = salario + (0.12 * salario);
        percentual = 12;
    }
    if (salario > 800 && salario <= 1200){
        novoSalario = salario + (0.10 * salario);
        percentual = 10;
    }
    if (salario > 1200 && salario <= 2000){
        novoSalario = salario + (0.07 * salario);
        percentual = 7;
    }
    if (salario > 2000){
        novoSalario = salario + (0.04 * salario);
        percentual = 4;
    }

    reajuste = novoSalario - salario;
    printf("Novo Salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);


}