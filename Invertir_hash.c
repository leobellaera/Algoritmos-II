/*Sabiendo que se tiene un hash en que los valores son cadenas, implementar la función hash_t*
hash_invertir(const hash_t*); que devuelva un nuevo hash cuyas claves sean los valores del original
y sus valores asociados sean listas con las claves que tenían dichos valores en el primero. Indicar la
complejidad de la función. */

hash_t* hash_invertir(const hash_orig hash_t*){
        hash_iter_t* iterador_hash = hash_iter_crear(hash_t* hash_orig);
        if (!iterador_hash)
                return NULL;  
        hash_t* hash_invertido = hash_crear(NULL);
        if (!hash_invertido)
                return NULL;
        while (!hash_iter_al_final(iterador_hash)){
                const char* clave_actual = hash_iter_ver_actual(hash_orig);
                const char* valor = hash_obtener(hash_orig, clave_actual);
                bool ok = hash_guardar(hash_invertido, valor, clave_actual); 
                if (!ok)
                        return NULL;
                hash_iter_avanzar(iterador_hash);
        }
        return hash_invertido;
                
      
      
