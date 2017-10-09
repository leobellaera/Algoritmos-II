lista_t hash_obtener_valores(const hash_t* hash){
        lista_t* lista = lista_crear();
        if (!lista)
                return NULL;
        for (size_t i = 0; i<hash->tam; i++){
                if (hash->tabla[i]->linea_campo)
                        bool ok = lista_insertar_primero(linea_campo->valor);
                        if (!ok)
                                return NULL;                     
        }
        return lista;
        
                        
