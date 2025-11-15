#include <stdio.h>
#include "usuarios.h"
#include "productos.h"


int main()
{
  int intentos;
  char user[6];
  char opcion;
    do{
      printf("Ingrese usuario: \n")
      scanf("%s", &user);
      if(user.usuario!=txt.usuario){
        printf("Datos no coincidentes, intente nuevamente\n");
        intento++; 
      }
    }
    while(intentos<3);
    printf("Sesion cerrada presione X para cerrar: \n");
    scanf("%s", &pcion);
    if(opcion=="X"){
      exit(0);
    }
    
    
    
}