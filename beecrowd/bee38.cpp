#include <stdio.h>
    int main(){

        int code, quant;
        float total, valor;
        scanf("%d %d", &code, &quant);
        

        if (code == 1)
        {
            valor = 4.00;
        } 
        else if (code == 2)
        {
            valor = 4.50;
        } 
        else if (code == 3)
        {
            valor = 5.00;
        } 
        else if (code == 4)
        {
            valor = 2.00;
        } 
        else if (code == 5)
        {
            valor = 1.50;
        }

        total = quant * valor;
        

        printf("Total: R$ %.2f\n", total);




        return 0;
    }