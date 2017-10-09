lista_t* hash_obtener_claves(const hash_t* hash){
        lista_t* claves = lista_crear();
        if (!claves)
                return NULL;
        for (size_t i = 0; i< hash_tam; i++){
                lista_t* lista_pos_tabla = hash->tabla[i];
                lista_iter_t* iterador_lista_hash = lista_iter_crear(lista_pos_tabla);
                while (!lista_iter_al_final(lista_pos_tabla)){
                        bool ok = lista_insertar_ultimo(claves,lista_iter_ver_actual(iterador_lista_hash)->clave);
                        if (!ok)
                                return NULL;
                }
        lista_iter_destruir(iterador_lista_hash);
        return claves;
                        
                
                
