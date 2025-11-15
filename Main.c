#include <stdio.h>
#include "usuarios.h"
#include "productos.h"


int main()
{
  int intentos;
  char user[6];
    do{
      printf("Ingrese usuario: \n")
      scanf("%s", &user);
      if(user.usuario!=txt.usuario){
        printf("Datos no coincidentes, intente nuevamente\n");
        intento++; 
        
      }
     
    }
    while(intentos<3);
    exit(0);
    
    
    
}