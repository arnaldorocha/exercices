#include <stdio.h>
#include <locale.h> 
int main()

{
    
int total = 150,resto; 
float porcentagem1, porcentagem2, M, F, X, Z; 

setlocale(LC_ALL, "Portuguese");

printf("SOU O ALUNO DE ENGENHARIA DA COMPUTAÇÃO DA UNINTER \n"); 
printf("NOME: ARNALDO ROCHA\n\n"); 
printf("Na pesquisa logo abaixo mostra uma pesquisa de 150 pessoas no total que gostaram ou não do último produto lançado\n"); 

printf("\nDigite o número de pessoas do sexo feminino que disseram SIM do 1 ao 150: "); 
scanf_s("%f", &M);
printf("\nDigite o número de pessoas do sexo masculino que disseram NÃO do 1 ao 150: "); 
scanf_s("%f", &F);
X = M + F;

resto = total - X; 
total = X + resto; 

Z = resto + M; 
total = Z + M; 

porcentagem1 = 100 * F / 150; 
porcentagem2 = 100 * Z / 150;
    

if (total <=150) 

{
printf("\n\nTotal de pessoas que votaram no sim foi: %.f", Z); 
printf("\n\nTotal de pessoas que votaram no não foi: %.f", F);
}
else

{
printf("\n\nTotal de pessoas que votaram no sim foi: %.f", Z);
printf("\n\nTotal de pessoas que votaram no não foi: %.f", F); 

}
printf("\n\nPorcentagem da votação feminina que responderam sim é: %.2f Porcento", porcentagem2);
printf("\n\nPorcentagem da votação masculina que responderam não é: %.2f Porcento ", porcentagem1); 
printf("\n\n\n");

return 0;

}



