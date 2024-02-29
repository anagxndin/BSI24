#include <stdio.h>
int main(){

    char tipoAnimal1[11];
    char tipoAnimal2[11];
    char tipoAnimal3[11];
     

    scanf("%s", &tipoAnimal1);
    scanf("%s", &tipoAnimal2);
    scanf("%s", &tipoAnimal3);

    if (tipoAnimal1[0] == 'v')
    { if (tipoAnimal2[0] == 'a')
    {
        if (tipoAnimal3[0] == 'c')
        {
            printf("aguia\n");
        }
        if (tipoAnimal3[0] == 'o'){
            printf("pomba\n");
        }
        
    }
    if (tipoAnimal2[0] == 'm'){
        if (tipoAnimal3[0] == 'h')
        {
            printf("vaca\n");
        }
        if (tipoAnimal3[0] == 'o'){
            printf("homem\n");
        }
    }
    
    };

    if (tipoAnimal1[0] == 'i')
    { if (tipoAnimal2[0] == 'i')
    {
        if (tipoAnimal3[2] == 'm')
        {
            printf("pulga\n");
        }
        if (tipoAnimal3[2] == 'r')
        {
            printf("lagarta\n");
        }
        
    }

    if (tipoAnimal2[0] == 'a')
    {
        if (tipoAnimal3[0] == 'h')
        {
            printf("sanguessuga\n");
        }
        if (tipoAnimal3[0] == 'o')
        {
            printf("minhoca\n");
        }
        
    }
    
    
    }


    

     
}