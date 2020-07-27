#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*Total KW consumidos e o valor a pagar de cada cadastro.
Listar o número da conta, o total de KW consumidos e o valor a pagar do comumidor que
mais gastou e que menos gastou.
Mostrar a média de consumo da cidade.
Mostrar o número de consumidores que ultrapassaram o consumo de 170 KW*/
struct individuo //estrutura de dados
{
char nome[20];
float conta, consumo, media;
};
int main()
{
int cadastro, consumidores[20], consumo, maior, menor, Maior, Menor, c, total =
0;
float valor, media, Mnr, Mr;
struct individuo i[10];
setlocale(LC_ALL, "portuguese");
printf("SOU O ALUNO DE ENGENHARIA DA COMPUTAÇÃO DA UNINTER \n"); // IMPRIMIR NA TELA INTRODUÇÃO
printf("NOME: ARNALDO ROCHA, RU:3112775 \n\n"); // IMPRIMIR NA TELA INTRODUÇÃO
printf("Se você deseja ver seu consumo e ver quem mais gastou ou o que menos gastou, faça esse cadastro!\n"); // IMPRIMIR NA TELA INTRODUÇÃO
printf("Você deseja se cadastrar? Se sim, siga as instruções logo abaixo.\n");

for (cadastro = 0; cadastro < 1; cadastro++) //loop para cadastro
printf("\nEscreva seu nome: "); {
gets_s(i[cadastro].nome);
printf("\nDigite o número da sua conta do 1 ao 10: ");
scanf_s("%d", &i[cadastro].conta);
printf("\nDigite o consumo em KW : ");
scanf_s("%d", &i[cadastro].consumo);
}
printf("\
n___________________________________________________________________________________________________");
printf("\nSeu nome é: %s", i[cadastro].nome);
printf("\nParabéns você esta cadastrado!");
printf("\n\nAgora vamos ver o total KW consumidos e o valor a pagar");
printf("\nDigite seu consumo em KW: ");
scanf_s("%d", &consumo);//guarda valor digitado
valor = (consumo) * 1.75; //valor correspondete a reais tem que ser float, determina o valor em reais do KW
printf("\nSeu consumo é de %d KW e o valor a pagar será de %.2f Reais", consumo, valor); // imprimir resultado
printf("\n\n_________________________________________________________________________________________________");
printf("\n\nSão 10 contas: Tem que digitar o consumo em sua determinada conta");// imprimir instrução
printf("\nPara saber qual é sua conta, apenas aguarde em forma crescente."); //imprimir instrução
printf("\nEntão quando chegar na posição que escolheu conforme o numero de conta digite seu consumo."); // imprimir instrução
for (c = 0; c < 10; c++) { //preenche o vetor
printf("\n\nDigite o consumo na sua conta: ");
scanf_s("%i", &consumidores[c]);
}
maior = consumidores[0]; //encontra o maior valor
Maior = 0;
for (c = 1; c < 10; c++) {
if (consumidores[c] > maior) {
maior = (consumidores[c]);
Maior = c;
}
}
menor = consumidores[0]; //encontra o menor valor
Menor = 0;
for (c = 1; c < 10; c++) {
if (consumidores[c] < menor) {
menor = (consumidores[c]);
Menor = c;
}
}
for (c = 0; c < 10; c++) { //determina a media
total = total + consumidores[c];
}
media = total / (float)10;
printf("\n\nA média do consumo é: %.2f KW", media); // imprimi o resultado da  media

Mr = maior * 1.75;
Mnr = menor * 1.75;
printf("\n\nMaior valor: %.2f Reais - conta: %i", Mr, Maior + 1); // imprimi o resultado em reais do maior valor
printf("\nMenor valor: %.2f Reais - conta: %i", Mnr, Menor + 1); // imprimi o esultado em reais do menor valor
printf("\nContas que consumiram mais que 170KW: ");
for (c = 0; c < 10; c++) {
printf("\n\n%i ", consumidores[c] > 170); // imprimi os valores que forammaiores que 170 kw
}
printf("\n\nNúmero que corresponde ao 1 significa que é verdadeiro ou seja, o campo que estiver 1 correspondente acima é maior que 170.");
printf("\n\n\n");

return 0;
}
