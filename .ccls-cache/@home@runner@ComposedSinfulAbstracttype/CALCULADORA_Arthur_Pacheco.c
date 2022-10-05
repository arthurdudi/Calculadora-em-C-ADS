/*GitHub: arthurdudi */
#include <locale.h> /*Biblioteca que permite utilizar acentos e linguagem em PT-BR */
#include <math.h>  /* Inclui operações matemáticas básicas */
#include <stdio.h> /* Principal biblioteca utilizada na linguagem. Possibilita entrada e saída de dados. */

int main(void) { /* Função principal */
  setlocale(LC_ALL, "Portuguese");
  int menu;
  float n1, n2, resultado;
  int loop;

  printf(
      "Olá, boas vindas! \n \n"); /* \n serve para criar espaço entre linhas! */
  printf("Essa é UMA CALCULADORA NA LINGUAGEM DE PROGRAMAÇÃO C! \n \n");
  printf("Esse projeto foi desenvolvido por Arthur da Rosa Pacheco, estudante "
         "de ADS na Universidade La Salle. \n \n");
  printf("O trabalho é para a disciplina de Algoritmos e Programação. \n \n");
  printf("Vamos começar? \n \n");
  printf("***CALCULADORA EM C*** \n \n");
  do { /*ESTRUTURA DE REPETIÇÃO PARA CRIAR O LOOP */
    int operacaoInvalida = 0;
    printf("\n***Escolha a operação desejada!*** \n \n");
    printf("SOMA = 1 \nSUBTRAÇÃO = 2 \nMULTIPLICAÇÃO = 3 \nDIVISÃO = 4 "
           "\nPOTÊNCIA = 5 \nRAIZ QUADRADA = 6\n");
    scanf("%d", &menu); /* Essa vírgula me deu alguns problemas. Esqueci de
                           botar e quase ferrei o código. SEMPRE LEMBRAR! */
    switch (menu) {
    case 1:
      printf("\nVocê escolheu SOMA! ");
      printf("\nDigite o primeiro número: "); /*Sempre incluir espaço após os
                                                 dois pontos para que o código
                                                 fique mais limpo */
      scanf("%f", &n1);
      // Sempre incluir espaço após os dois pontos para que o código fique mais
      // limpo
      printf("\nDigite o segundo número: ");
      scanf("%f", &n2);
      resultado = n1 + n2;
      printf(
          "\nO RESULTADO É %.2f \n",
          resultado); /* A ordem dos números após a vírgula é a ordem que eles
                         apareceram na operação. O 2f é para limitar o número de
                         casas decimais após a vírgula, limitando a apenas 2. Se
                         fosse 1, seria 1f e assim por diante. */
      break;
    case 2:
      printf("\nVocê escolheu SUBTRAÇÃO! \n");
      printf("\nDigite o primeiro número: ");
      scanf("%f", &n1);
      printf("\nDigite o segundo número: ");
      scanf("%f", &n2);
      resultado = n1 - n2;
      printf("\nO RESULTADO É %.2f \n", resultado);
      break;
    case 3:
      printf("\nVocê escolheu MULTIPLICAÇÃO! \n");
      printf("\nDigite o primeiro número: ");
      scanf("%f", &n1);
      printf("\nDigite o segundo número: ");
      scanf("%f", &n2);
      resultado = n1 * n2;
      printf("\nO RESULTADO É %.2f \n", resultado);
      break;
    case 4:
      printf("\nVocê escolheu DIVISÃO! \n");
      printf("\nDigite o primeiro número: ");
      scanf("%f", &n1);
      do {
        printf("\nDigite o segundo número: ");
        scanf("%f", &n2);
        if (n2 == 0) {
          printf("\nNão é possivel divisao por zero");
        }
      } while (n2 == 0);

      resultado = n1 / n2;
      printf("\nO RESULTADO É %.2f \n", resultado);

      break;

    case 5:
      printf("\nVocê escolheu POTÊNCIA \n");
      printf("\nDigite o primeiro número: ");
      scanf("%f", &n1);
      printf("\nDigite o segundo número: ");
      scanf("%f", &n2);
      resultado = pow(n1, n2);
      printf("\nO RESULTADO DA POTÊNCIA É %.2f \n", resultado);
      break;
    case 6:
      printf("\nVocê escolheu RAIZ QUADRADA\n");
      printf("\nQuero saber a raiz quadrada de: ");
      scanf("%f", &n1);
      resultado = sqrt(n1);
      printf("\nO RESULTADO É %.2f \n", resultado);
      break;
    default:
      printf("OPERAÇÃO INVÁLIDA, TENTE NOVAMENTE!\n");
      operacaoInvalida = 1;
      break;
    } /* FIM DO SWITCH CASE */

    if (operacaoInvalida == 1) {
      loop = 1;
    } else {
      printf("\nDIGITE: \n1 PARA CONTINUAR \n2 PARA ENCERRAR\n");
      scanf("%i", &loop);
    }

    //

  } while (loop == 1); /*FIM DO LOOP */
  if (loop == 2) {
    printf("Obrigado, até a próxima! <3\n");
  }
  return 0; /* Precisa estar sempre ao final do código */
}