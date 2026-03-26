#include <stdio.h>
int main() {

char estado, estado2;
char codigo[20], codigo2[20];
char nome[40], nome2[40];
int populacao, populacao2;
float area, area2;
float pib, pib2;
int pontos, pontos2;

float densidade, densidade2, pibpc, pibpc2;
float superPoder, superPoder2;
float inversoDensidade, inversoDensidade2;

//CARTA 1
printf("CARTA 1\n");
printf("Digite a o estado: ");
scanf(" %c", &estado);
printf("Digite  o codigo: ");
scanf("%s", codigo);
printf("Digite o nome da cidade: ");
scanf("%s", nome);
printf("Digite a populacao da cidade: ");
scanf("%d", &populacao);
printf("Digite a area da cidade: ");
scanf("%f", &area);
printf("Digite o pib da cidade: ");
scanf("%f", &pib);
printf("Digite a quantidade de pontos turisticos: ");
scanf("%d", &pontos);

printf("\n");

//CARTA 2
printf("CARTA 2\n");
printf("Digite o estado: ");
scanf(" %c", &estado2);
printf("Digite  o codigo: ");
scanf("%s", codigo2);
printf("Digite o nome da cidade: ");
scanf("%s", nome2);
printf("Digite a populacao da cidade: ");
scanf("%d", &populacao2);
printf("Digite a area da cidade: ");
scanf("%f", &area2);
printf("Digite o pib da cidade: ");
scanf("%f", &pib2);
printf("Digite a quantidade de pontos turisticos: ");
scanf("%d", &pontos2);

//calculos (sofri pra descobrir q tinha q ficar aqui kkk)

densidade = (float) populacao / area;
densidade2 = (float) populacao2 / area2;
pibpc = (float) pib / populacao;
pibpc2 = (float) pib2 / populacao2;

inversoDensidade = (float) area / populacao;
inversoDensidade2 = (float) area2 / populacao2;

 //superpoder

superPoder = (float) populacao + area + pib + pontos + pibpc + inversoDensidade;
superPoder2 = (float) populacao2 + area2 + pib2 + pontos2 + pibpc2 + inversoDensidade2;

printf("\n");

printf("CARTA 1: \n");
printf("Estado: %c \n", estado);
printf("Codigo: %s \n", codigo);
printf("Nome da cidade: %s \n", nome);
printf("Populacao: %d \n", populacao);
printf("Area: %f km \n", area);
printf("Pib: R$%f \n", pib);
printf("Pontos Turisticos: %d \n", pontos);
printf("Densidade populacional: %.2f hab/km \n", densidade);
printf("Pib per Capita: R$%.2f \n", pibpc);
printf("Superpoder: %f \n", superPoder);

printf("\n");

printf("CARTA 2: \n");
printf("Estado: %c \n", estado2);
printf("Codigo: %s \n", codigo2);
printf("Nome da cidade: %s \n", nome2);
printf("Populacao: %d \n", populacao2);
printf("Area: %f km \n", area2);
printf("Pib: R$%f \n", pib2);
printf("Pontos Turisticos: %d \n", pontos2);
printf("Densidade populacional: %.2f hab/km \n", densidade2);
printf("Pib per Capita: R$%.2f \n", pibpc2);
printf("Superpoder: %f \n", superPoder2);

printf("\n");

//COMPARACAO

printf("Comparacao das cartas \n");
printf("\n");

printf("Populacao: Carta %d venceu (%d)\n", (populacao > populacao2) ? 1 : 2, (populacao > populacao2));
printf("Area: Carta %d venceu (%d)\n", (area > area2) ? 1 : 2, (area > area2) );
printf("Pib: Carta %d venceu (%d)\n", (pib > pib2) ? 1 : 2, (pib > pib2));
printf("Pontos turistiscos: %d venceu (%d)\n", (pontos > pontos2) ? 1 : 2, (pontos > pontos2));
printf("Densidade Populacional: Carta %d venceu (%d) \n", (densidade < densidade2) ? 1 : 2, (densidade < densidade2));
printf("Pib per Capita: Carta %d venceu(%d)\n", (pibpc > pibpc2) ? 1 : 2, (pibpc > pibpc2));
printf("Super Poder: Carta %d venceu (%d)\n", (superPoder > superPoder2) ? 1 : 2, (superPoder > superPoder2));




return 0;

}