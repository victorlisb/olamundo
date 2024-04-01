#include<stdio.h>
#include<locale.h>

void main()
{
    float peso,volume,altura,largura,profundidade,peso_total=0,volume_total=0;
    int i=1;
    char carregado='nao';

    setlocale(LC_ALL,"Portuguese");

    while(carregado='nao')
    {
        printf("Digite o peso da carga %d \n",i);
        scanf("%f",&peso);
        printf("Digite a altura da carga %d\n",i);
        scanf("%f",&altura);
        printf("Digite a largura da carga %d\n",i);
        scanf("%d",&largura);
        printf("Digite a profundidade da carga %d \n",i);
        scanf("%f",&profundidade);
        printf("\n\n");

        volume=altura*largura*profundidade;


        if (peso+peso_total<2000&&volume+volume_total<10)
        {
            peso_total=peso_total+peso;
            volume_total=volume_total+volume;
            i++;
        }
        else
        {
            printf("\n\n");
            printf("Capacidade de carga da aeronave no limite:");
            carregado='sim';
        }
    }
    printf("O peso total da aeronave é %f \n",peso_total);
    printf("O volume total da aeronave é %f \n",volume_total);
}
