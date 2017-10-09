lista_t* lista_abb_mayores(const ab_t* abb, const char* cadena){
        lista_t*  mayores = lista_crear();
        if (!mayores)
                return NULL;
        bool ok = aux_lista_abb_mayores(abb, mayores);
        if (!ok)
                return NULL;
        return mayores;
        
        
bool aux_lista_abb_mayores(const ab_t* arbol, lista_t* lista){
        if (!arbol)
                return NULL
        aux_lista_abb_mayores(arbol->izq);
        if (. .. . .)
                lista_insertar_ultimo(lista, arbol->clave);
        aux_lista_abb_mayores(arbol->der);
       
