/*a) Muestre una implementación de la funcion heapify, que crea un heap sobre un arreglo, utilizando la función downheap (no hace falta que muestre la implementaciń de downheap)
b) ¿Qué diferencias tiene con la implementación de heapify utilizando la función upheap?*/

void heapify(void* arr[], size_t cant, cmp_t cmp){
  int k = (n-2)/2;
  while (k>0){
    downheap(arr,k,cmp);
    k--;
  return arr 
