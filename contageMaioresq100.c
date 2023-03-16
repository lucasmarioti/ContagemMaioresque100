
#include <stdio.h>

int main()
{
    
    int vet1[5];
    int cont;
    
    for(int i=0; i<5; i++){
        printf("digite numeros inteiros:");
        scanf("%d",&vet1[i]);
    }
    cont =0;
    for(int i=0; i<5; i++)
        if (vet1[i] > 100){
            cont+=1;
        }
            
    printf("quantidade de numeros maior que 100 é:%d\n",cont);

    return 0;
}
