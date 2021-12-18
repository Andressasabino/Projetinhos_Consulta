#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char vogais[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u','U'};
    char str[20];
    int i = 0, j= 0;
    int tamanho;

    printf("Escreva algo: ");
    scanf("%s", str);

    tamanho = strlen(str);
  
    for(i = 0; i< tamanho; i++){
        int vogal=0;
        for(j =0; j<10; j++){
            if(str[i] == vogais[j]) vogal= 1;
        }
        if(vogal == 1){
            str[i] = '*';
        }
    }
    printf("%s",str);
}
