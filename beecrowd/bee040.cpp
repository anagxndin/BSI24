#include <stdio.h>
    int main(){

        double n1, n2, n3, n4, nota1, nota2, nota3, nota4, media, total;
        scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

        nota1 = n1 * 2;
        nota2 = n2 * 3;
        nota3 = n3 * 4;
        nota4 = n4 * 1;

        total = nota1 + nota2 + nota3 + nota4;
        media = total/10;

        printf("Media: %.1f\n", media);

        if (media >= 7.0) {
            printf("Aluno aprovado.\n");
        }
        else if (media < 5.0) {
            printf("Aluno reprovado.\n");
        }
        else if (media >= 5.0) {
            printf("Aluno em exame.\n");
            double n5;
            scanf("%lf", &n5);
            printf("Nota do exame: %.1f\n", n5);
            media = (media + n5)/2.0;

            if(media >= 5.0){
                printf("Aluno aprovado.\n");
            } else {
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1f\n", media);
        }
        

        

        return 0;
    }