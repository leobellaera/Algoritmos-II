ab_t* ab_espejar(const abb_t* arbol){
        if (arbol == NULL)
                return NULL;
        ab_t* arbol_espejado = crear_arbol(arbol->raiz);
        if (!arbol_espejado)
                return NULL;
        arbol_espejado->der = arbol_espejar(arbol->izq);
        arbol_espejado->izq = arbol_espejar(arbol->der);
        return arbol_espejado;

        
