#ifndef PRODUCTOS
#define PRODUCTOS

typedef struct producto{
  char codigo[6];
  char nombre[25];
  int cantDispo;
  float costo;
  float precio_venta;
}producto;

#endif