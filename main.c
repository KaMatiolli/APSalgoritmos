#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int menu;


printf("\t\t\t\tAPS - Algoritmos e Programação 2020\n\n\n");
printf("Karina de Oliveira Matiolli - 20773925\n");
;

printf("\t\t\t\t\t\t\tMenu\n\n");
printf("1 Simulador disparo\n");
printf("2 Mostrar estastística\n");
printf("3 Sair\n");
printf("\t\t\t\t\t\t\tEscolha uma opção:\n\n");
scanf("%d", &menu);
while (menu >= 3){

printf("\tOpção inválida!\n");
printf("\tEscolha uma opção:");
scanf("%d", &menu);
 }
 if (menu == 1){
   printf("Simulador de disparo:");} 

   if (menu == 2){
   printf("Mostrar estatísticas:");} 
 
   if (menu == 3){
   printf("Sair.");} 
   return 0;
  
  float v_inicial, angulo =0, distancia_alvo=0,    tamanho_alvo=0, resultado=0; 
  float g = 9.81, pi = 3.14, alcance_horizontal, tempo_trajeto, altura_maxima; 
  float desvio, distancia_mais, distancia_menos;
 
 
 
  do{
  printf("Qual a velocidade inicial: ");
  scanf("%f", &v_inicial);}
  
  while(v_inicial<=0);

  while(angulo<=0 || angulo >=90){
  printf("Qual o angulo do lancamento: ");
  scanf("%f", &angulo);}

  while(distancia_alvo<=0){
  printf("Qual a distância do alvo: ");
  scanf("%f", &distancia_alvo);
  }
  while(tamanho_alvo<20 || tamanho_alvo>50){
    printf("Qual tamanho do alvo: ");
    scanf("%f", &tamanho_alvo);
  }

  //Alcance horizontal
  angulo = (angulo*pi)/180; 
  printf("Seno do angulo: %.2f\n",sin(angulo));
  alcance_horizontal = ((2.0*v_inicial*v_inicial*cos(angulo)*sin(angulo))/g);
  printf("\n\nAlcance Horizontal: %.3f m", alcance_horizontal);
  //Tempo do trajeto
  tempo_trajeto = ((2*v_inicial*sin(angulo))/g);
  printf("\n\nTempo do Trajeto: %.3f", tempo_trajeto);
  //altura maxima
  altura_maxima = (v_inicial*v_inicial*sin(angulo))/(2.0*g);
  printf("\n\nAltura Máxima: %.3f m", altura_maxima);
  //atingiu o alvo
  desvio= tamanho_alvo/2.0;
  distancia_mais = distancia_alvo+desvio;
  distancia_menos = distancia_alvo-desvio; 
  printf("\n\nMais %.2f e menos %.2f\n", distancia_mais, distancia_menos);
    if(alcance_horizontal >= distancia_menos && alcance_horizontal <= distancia_mais){
    printf("\n\nVoce acertou o alvo!!");
  }else if(alcance_horizontal<distancia_menos){
    printf("\n\nAntes do alvo");
  }else{
    printf("\n\nDepois do alvo");
  }

}
