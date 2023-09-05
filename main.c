#include <stdio.h>
#define ex1



#ifdef ex1
//1.	Receba via teclado um número qualquer e exibir o seu sucessor e seu antecessor.
int main()
{
    int d;

    printf("\n\ndigite um numero inteiro: ");
    scanf("%d", &d);
    printf("o antecessor do numero e': %d, e o seu sucessor e': %d ", d-1 ,d+1);

    return 0;

}
#endif

#ifdef ex2

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}

#endif


#ifdef ex3

main()
{
    float nota1, nota2, nota3, nota4, media;

    printf("\n\nInforme sua nota no primeiro bimestre: ");
    scanf("%f", &nota1);
    while (nota1 > 10 || nota1 < 0)
    {
     printf("\n\nInforme uma nota entre 0 e 10: ");
     scanf("%f", &nota1);

    }

    printf("\n\nInforme sua nota no segundo bimestre: ");
    scanf("%f", &nota2);
    while (nota2 > 10 || nota2 < 0)
    {
     printf("\n\nInforme uma nota entre 0 e 10: ");
     scanf("%f", &nota2);

    }
    printf("\n\nInforme sua nota no terceiro bimestre: ");
    scanf("%f", &nota3);
    while (nota3 > 10 || nota3 < 0)
    {
     printf("\n\nInforme uma nota entre 0 e 10: ");
     scanf("%f", &nota3);

    }
    printf("\n\nInforme sua nota no quarto bimestre: ");
    scanf("%f", &nota4);
    while (nota4 > 10 || nota4 < 0)
    {
     printf("\n\nInforme uma nota de 0 a 10: ");
     scanf("%f", &nota4);

    }

    media = (nota1+nota2+nota3+nota4)/4;

    if (media >= 6)
    {
        printf("\n\n Voce foi aprovado com media: %f", media);
    } else
    {
        printf("\n\nVoce foi reprovado com media: %f", media);
    }
}
#endif // ex3



#ifdef ex4
main()
{
    int num1, num2;

    printf("\n\nInforme um numero: ");
    scanf("%d", &num1);
    printf("\n\nInforme outro numero: ");
    scanf("%d", &num2);

    if((num1 % num2) == 0 || ( num2 % num1) == 0) {
        printf("\n\nOs numeros sao multiplos");
    } else {
        printf("\n\nOs numeros nao sao multiplos");
    }
}
#endif

