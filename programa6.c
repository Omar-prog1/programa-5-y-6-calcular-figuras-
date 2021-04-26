#include <stdio.h>

int main(){
    /* Hernandez Flores Ricardo Omar 
    Equipo Zener 
    21 abr 21
    programa 5 calcular el area de un triangulo y muestra resultado
    */

   float basemayor, basemenor, altura, cuarto;
   printf ("/n/n programa 5")
   printf ("/n/n calcular el volumen de un trapecio");
   printf ("/n/n dame la base mayor")
   scanf ("%f",&basemayor);//permite capturar un valor real y lo guarda en variable primer//
   printf ("/n/n dame la base menor");
   scanf ("%f",&basemenor); //permite capturar un valor real y lo guarda en variable primer//
   printf ("/n/n dame la altura");
   scanf ("%f",&altura); //permite capturar un valor real y lo guarda en variable primer//
   cuarto = (basemayor + basemenor)/2*altura;
   printf ("/n el volumen es %f", cuarto);
   return 0;
