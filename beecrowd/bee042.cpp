#include <stdio.h>
#include <math.h>

int main () {

    int n1, n2, n3, aux;
    int v[3];
    //vetor de 3 posicoes
    scanf("%d %d %d", &n1, &n2, &n3);

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
    
    printf("%d\n%d\n%d\n", v[0], v[1], v[2]);

 

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);


    return 0;
}