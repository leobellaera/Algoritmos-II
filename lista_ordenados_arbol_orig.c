/*Implementar una primitiva para el ABB, que reciba el ABB y devuelva una lista con las claves del mismo
ordenadas tal que si insertáramos las claves en un ABB vacío (con la misma función de comparación),
dicho ABB tendría la misma estructura que el árbol original. ¿Qué tipo de recorrido utilizaste?
Indicar el orden de la primitiva. Justificar. */


lista_t* lista_ordenados(abb_t* arbol){
        lista_t* lista_ordenados = lista_crear();
        if (!lista_ordenados)
                return NULL;
        bool ok = aux_lista_ordenados(arbol, lista_ordenados);
        if (!ok)
                return NULL;
        return lista_ordenados
        
bool aux_lista_ordenados(abb_t* arbol, lista_t* lista){
        if (!arbol)
                return true;
        bool ok = lista_insertar_ultimo(lista, arbol->clave));
        if (!ok)
                return false;
        aux_lista_ordenados(arbol->izq, lista);
        aux_lista_ordenados(arbol->izq, lista);
        return true;
