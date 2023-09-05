#include <stdio.h>
#define ex1

#ifdef ex1
//1.	Receba via teclado um número qualquer e exibir o seu sucessor e seu antecessor.
main()
{
    int d;

    printf("\n\ndigite um numero inteiro: ");
    scanf("%d", &d);
    printf("o antecessor do numero e': %d, e o seu sucessor e': %d ", d-1 ,d+1);

}
#endif

#ifdef ex2

main()
{
    float f;

    printf("\n\ndigite um valor para reajuste: ");
    scanf("%f", &f);
    printf("o valor com reajuste de 10%% e': %f", f*1.1);
}
#endif // ex1

#ifdef ex3
main()
{
    float f;

    printf("\n\nInforme o preco do produto para reajuste: ");
    scanf("%f", &f);
    printf("o valor com desconto de 9%% e': %f", f*0.91);
}
#endif // ex3

#ifdef ex4
main()
{
    float valorAula, qtdAulas, desconto;

    printf("\n\nInforme o valor de sua hora aula: ");
    scanf("%f", &valorAula);
    printf("\n\nInforme a quantidade de aulas dadas: ");
    scanf("%f", &qtdAulas);
    printf("\n\nInforme quantos %% e' pro INSS: ");
    scanf("%f", &desconto);
    printf("o seu salario e': %f", (valorAula*qtdAulas)*(1-(desconto/100)));
}
#endif // ex4

#ifdef ex5
main()
{
    float precoFabrica, lucroVendedor, imposto;

    printf("\n\nInforme o valor do preco de fabrica do carro: ");
    scanf("%f", &precoFabrica);
    printf("\n\nInforme em %% qual a porcentagem do distribuidor: ");
    scanf("%f", &lucroVendedor);
    printf("\n\nInforme a %% do imposto sobre o carro: ");
    scanf("%f", &imposto);
    printf("\no lucro recebido pelo distribuidor e': %f", precoFabrica*(lucroVendedor/100));
    printf("\no valor do imposto e': %f", precoFabrica*(imposto/100));
    printf("\no valor total do veiculo e': %f", precoFabrica*(1+(lucroVendedor/100)+(imposto/100)));
}
#endif // ex5

#ifdef ex6
main()
{
    float salario;

    printf("\n\nInforme o salario para reajuste: ");
    scanf("%f", &salario);

    printf("\no seu antigo salario era: %f", salario);

    if (salario < 800)
    {
    printf("\no seu novo salario e': %f", salario*1.15);
    } else if (salario >= 800 && salario <= 1000)
    {
    printf("\no seu novo salario e': %f", salario*1.1);
    } else {
    printf("\no seu novo salario e': %f", salario*1.05);
    }

}
#endif // ex6

#ifdef ex7

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
#endif // ex7

#ifdef ex8

main()
{
    float primeiroNumero, segundoNumero, terceiroNumero, quartoNumero, somaQuadrados;

    somaQuadrados = 0;

    while (somaQuadrados < 50000)
    {
        printf("\n\nDigite um numero entre 10 e 25: ");
        scanf("%f", &primeiroNumero);
        while (primeiroNumero >= 25 || primeiroNumero <= 10)
        {
            printf("\n\nNumero nao atende o requisito, digite um valor entre 10 e 25: ");
            scanf("%f", &primeiroNumero);
        }
        printf("\n\nDigite agora um numero maior ou igual 0: ");
        scanf("%f", &segundoNumero);
        while (segundoNumero < 0)
        {
            printf("\n\nInforme valor maior que 0: ");
            scanf("%f", &segundoNumero);
        }

        terceiroNumero = primeiroNumero + segundoNumero;

        quartoNumero = primeiroNumero * segundoNumero * terceiroNumero;

        printf("\n\no terceiro numero e' a soma dos dois numeros: %f", terceiroNumero);
        printf("\n\no quarto numero e' a multiplicacao dos tres numeros: %f", quartoNumero);

            somaQuadrados = (primeiroNumero * primeiroNumero) + (segundoNumero * segundoNumero) + (terceiroNumero * terceiroNumero) + (quartoNumero * quartoNumero);

        printf("\n\nA soma do quadrado de todos os numeros e': %f", somaQuadrados);

        if (somaQuadrados < 50000)
        {
            printf("\n\nA soma do quadrado de todos os numeros e' menor que 50000, tente novamente");
        }
    }

    printf("\n\nA soma do quadrado de todos os numeros e' maior que 50000, parabens");
}
#endif // ex8

#ifdef ex9
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

#endif // ex9

#ifdef ex10
main()
{
    float precoProduto;

    printf("\n\nInforme o preco do produto a ser inflacionado: ");
    scanf("%f", &precoProduto);
    if (precoProduto < 100)
    {
        printf("O preco do produto inflacionado e': %f", precoProduto * 1.1);
    } else {
        printf("O preco do produto inflacionado e': %f", precoProduto * 1.2);
    }
}
#endif // ex10

#ifdef ex11
main()
{
    float precoProduto;

    printf("\n\nInforme o preco do produto a ser inflacionado: ");
    scanf("%f", &precoProduto);
    if (precoProduto < 100)
    {
        printf("O preco do produto inflacionado e': %f", precoProduto * 1.1);
    } else {
        printf("O preco do produto inflacionado e': %f", precoProduto * 1.2);
    }
}
#endif // ex11
