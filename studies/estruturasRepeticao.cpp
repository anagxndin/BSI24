#include <stdio.h>
int main(){

/* WHILE -> executa um trecho de código enquanto uma certa condição for verdadeira;
//Exemplo de Problema: programa que imprima os 20 primeiros inteiros positivos (um número por linha);*/

    int i = 1;
          //condição  
    while(i <= 20){
        //comando
        printf("%d\n", i);
        i = i + 1;
    }

//FOR -> semelhante ao while porém possibilita incluir um comando antes de executar a primeira verificação e um comando que vai ser executado ao final de cada repetição
// inicia -> testa condição -> executa código -> executa incremento;
//Exemplo de Problema: programa que leia um inteiro N e imprima N vezes a mensagem "Amo o Rafik!"

    /*for(inicialização; condição; incremento){
        código;
    }*/


    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    //i++ -> i=i-1
    //i-- -> i=i-1
    {
        printf("Amo o Rafik!\n");
    };
    
//DOWHILE -> semelhante ao while mas não testa condição antes da primeira interação
//Exemplo de Problema: ler um código até que seja digitado "1513"

    int codigo;
    do {
        printf("Digite o codigo: ");
        scanf("%d", &codigo);
    } while (codigo!=1513);
    printf("Codigo correto!\n");


//BREAK -> encerra um laço de repetição
//CONTINUE -> vai pra próxima interação de um laço de repetição
//Exemplo Continue:

    int contador;
    for(contador=0; contador<6; contador++){
        if (contador==2)
        {
            continue;
            // condição é verificada e comando é executado imediatamente (o print abaixo não é executado antes)
        }
        
        printf("%d\n", contador);
    }

//Exemplo Break:

    for(contador=0; contador<6; contador++){
        if (contador==2)
        {
             break;
             //o laço inteiro é encerrado e o programa acaba
        }
        
        printf("%d\n", contador);
    }

}
