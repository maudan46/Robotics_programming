#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Este es un juego de adivinación totalmente escrito por mi. La suerte es un factor clave en éste código pues decidí utilizar el comando azar.
//Así que si el programa no acierta, fue por mala suerte :'V JAJAJ


int main(void) {
  char res[10];
  int numero;

  printf("Piensa en una carta de póker\n");
  printf("¿Es una carta roja?(y=si, n=no)\n");
 scanf("%s",res);

 if (strcmp (res,"y") == 0){
   printf("Es de corazones?\n");
   scanf("%s",res);

   if (strcmp (res,"y") == 0){
    printf("Es un número?\n");
    scanf("%s",res);

    if (strcmp (res,"y") == 0){
      printf("Es numero alto? (de 5 para arriba)\n");
      scanf("%s",res);

      if (strcmp (res,"y") == 0){
        printf("Es numero par?\n");
        scanf("%s",res);

        if (strcmp (res,"y") == 0){
          numero = rand() % 3;
          if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 6 de corazones... le atiné?\n");
            scanf("%s",res);      
          }
          else if (numero==1) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 8 de corazones... le atiné?\n");
            scanf("%s",res); 
          }
          else if (numero==2) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 10 de corazones... le atiné?\n");
            scanf("%s",res); 
          }

          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }

        }
        else {
          numero = rand() % 3;
          if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 5 de corazones... le atiné?\n");
            scanf("%s",res);      
          }
          else if (numero==1) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 7 de corazones... le atiné?\n");
            scanf("%s",res); 
          }
          else if (numero==2) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 9 de corazones... le atiné?\n");
            scanf("%s",res); 
          }

          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }
        }
      }
      else {
        printf("Es numero par?\n");
        scanf("%s",res);

        if (strcmp (res,"y") == 0){
          numero = rand() % 3;
          if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 2 de corazones... le atiné?\n");
            scanf("%s",res);      
          }
          else if (numero==1) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 4 de corazones... le atiné?\n");
            scanf("%s",res); 
          }
          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }

        }
        else {
          numero = rand() % 1;
         if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 3 de corazones... le atiné?\n");
            scanf("%s",res); 
          }

          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }
        }
      }
    }
    else {
      numero = rand() % 4;
      if (numero==0){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el As de corazones... le atiné?\n");
        scanf("%s",res);
      }
      else if (numero==1){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es la J de corazones... le atiné?\n");
        scanf("%s",res);
      }
      else if (numero==2){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es la Q de corazones... le atiné?\n");
        scanf("%s",res);
      }
      else if (numero==3){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es la K de corazones... le atiné?\n");
        scanf("%s",res);
      }
      if (strcmp (res,"y") == 0){
        printf("Siuuuuu\n");
      }
      else{
        printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
      }

    }
   }
   else{
     printf("Es un número?\n");
      scanf("%s",res);

    if (strcmp (res,"y") == 0){
      printf("Es numero alto? (de 5 para arriba)\n");
      scanf("%s",res);

      if (strcmp (res,"y") == 0){
        printf("Es numero par?\n");
        scanf("%s",res);

        if (strcmp (res,"y") == 0){
          numero = rand() % 3;
          if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 6 de diamantes... le atiné?\n");
            scanf("%s",res);      
          }
          else if (numero==1) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 8 de diamantes... le atiné?\n");
            scanf("%s",res); 
          }
          else if (numero==2) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 10 de diamantes... le atiné?\n");
            scanf("%s",res); 
          }

          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }

        }
        else {
          numero = rand() % 3;
          if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 5 de diamantes... le atiné?\n");
            scanf("%s",res);      
          }
          else if (numero==1) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 7 de diamantes... le atiné?\n");
            scanf("%s",res); 
          }
          else if (numero==2) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 9 de diamantes... le atiné?\n");
            scanf("%s",res); 
          }

          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }
        }
      }
      else {
        printf("Es numero par?\n");
        scanf("%s",res);

        if (strcmp (res,"y") == 0){
          numero = rand() % 3;
          if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 2 de diamantes... le atiné?\n");
            scanf("%s",res);      
          }
          else if (numero==1) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 4 de diamantes... le atiné?\n");
            scanf("%s",res); 
          }
          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }

        }
        else {
          numero = rand() % 1;
         if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 3 de diamantes... le atiné?\n");
            scanf("%s",res); 
          }

          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }
        }
      }
    }
    else {
      numero = rand() % 4;
      if (numero==0){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el As de diamantes... le atiné?\n");
        scanf("%s",res);
      }
      else if (numero==1){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es la J de diamantes... le atiné?\n");
        scanf("%s",res);
      }
      else if (numero==2){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es la Q de diamantes... le atiné?\n");
        scanf("%s",res);
      }
      else if (numero==3){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es la K de diamantes... le atiné?\n");
        scanf("%s",res);
      }
      if (strcmp (res,"y") == 0){
        printf("Siuuuuu\n");
      }
      else{
        printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
      }

    }
   }
  
 }
 else {
   printf("Es de tréboles?\n");
   scanf("%s",res);

   if (strcmp (res,"y") == 0){
    printf("Es un número?\n");
    scanf("%s",res);

    if (strcmp (res,"y") == 0){
      printf("Es numero alto? (de 5 para arriba)\n");
      scanf("%s",res);

      if (strcmp (res,"y") == 0){
        printf("Es numero par?\n");
        scanf("%s",res);

        if (strcmp (res,"y") == 0){
          numero = rand() % 3;
          if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 6 de tréboles... le atiné?\n");
            scanf("%s",res);      
          }
          else if (numero==1) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 8 de tréboles... le atiné?\n");
            scanf("%s",res); 
          }
          else if (numero==2) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 10 de tréboles... le atiné?\n");
            scanf("%s",res); 
          }

          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }

        }
        else {
          numero = rand() % 3;
          if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 5 de tréboles... le atiné?\n");
            scanf("%s",res);      
          }
          else if (numero==1) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 7 de tréboles... le atiné?\n");
            scanf("%s",res); 
          }
          else if (numero==2) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 9 de corazones... le atiné?\n");
            scanf("%s",res); 
          }

          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }
        }
      }
      else {
        printf("Es numero par?\n");
        scanf("%s",res);

        if (strcmp (res,"y") == 0){
          numero = rand() % 3;
          if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 2 de tréboles... le atiné?\n");
            scanf("%s",res);      
          }
          else if (numero==1) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 4 de tréboles... le atiné?\n");
            scanf("%s",res); 
          }
          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }

        }
        else {
          numero = rand() % 1;
         if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 3 de tréboles... le atiné?\n");
            scanf("%s",res); 
          }

          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }
        }
      }
    }
    else {
      numero = rand() % 4;
      if (numero==0){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el As de tréboles... le atiné?\n");
        scanf("%s",res);
      }
      else if (numero==1){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es la J de corazones... le atiné?\n");
        scanf("%s",res);
      }
      else if (numero==2){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es la Q de tréboles... le atiné?\n");
        scanf("%s",res);
      }
      else if (numero==3){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es la K de tréboles... le atiné?\n");
        scanf("%s",res);
      }
      if (strcmp (res,"y") == 0){
        printf("Siuuuuu\n");
      }
      else{
        printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
      }

    }
   }
   else{
     printf("Es un número?\n");
      scanf("%s",res);

    if (strcmp (res,"y") == 0){
      printf("Es numero alto? (de 5 para arriba)\n");
      scanf("%s",res);

      if (strcmp (res,"y") == 0){
        printf("Es numero par?\n");
        scanf("%s",res);

        if (strcmp (res,"y") == 0){
          numero = rand() % 3;
          if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 6 de picas... le atiné?\n");
            scanf("%s",res);      
          }
          else if (numero==1) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 8 de picas... le atiné?\n");
            scanf("%s",res); 
          }
          else if (numero==2) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 10 de picas... le atiné?\n");
            scanf("%s",res); 
          }

          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }

        }
        else {
          numero = rand() % 3;
          if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 5 de picas... le atiné?\n");
            scanf("%s",res);      
          }
          else if (numero==1) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 7 de picas... le atiné?\n");
            scanf("%s",res); 
          }
          else if (numero==2) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 9 de picas... le atiné?\n");
            scanf("%s",res); 
          }

          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }
        }
      }
      else {
        printf("Es numero par?\n");
        scanf("%s",res);

        if (strcmp (res,"y") == 0){
          numero = rand() % 3;
          if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 2 de picas... le atiné?\n");
            scanf("%s",res);      
          }
          else if (numero==1) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 4 de picas... le atiné?\n");
            scanf("%s",res); 
          }
          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }

        }
        else {
          numero = rand() % 1;
         if (numero==0) {
            printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el 3 de picas... le atiné?\n");
            scanf("%s",res); 
          }

          if (strcmp (res,"y") == 0){
            printf("Siuuu\n");
          }
          else {
            printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
          }
        }
      }
    }
    else {
      numero = rand() % 4;
      if (numero==0){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es el As de picas... le atiné?\n");
        scanf("%s",res);
      }
      else if (numero==1){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es la J de picas... le atiné?\n");
        scanf("%s",res);
      }
      else if (numero==2){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es la Q de picas... le atiné?\n");
        scanf("%s",res);
      }
      else if (numero==3){
        printf("Intentaré adivinar tu carta, necesitare un poco de suerte...Creo que tu carta es la K de picas... le atiné?\n");
        scanf("%s",res);
      }
      if (strcmp (res,"y") == 0){
        printf("Siuuuuu\n");
      }
      else{
        printf("Chale :(, seguro el proximo intento si funciona :'v JAJAJ\n");
      }

    }
   }
 }
  return 0;
}
