/*6. Dado un árbol binario, escriba una función recursiva que cuente la cantidad de nodos que tienen exacta-
mente dos hijos directos. ¿qué orden de complejidad tiene la función implementada?*/

size_t contar(abb_t* arbol){
	if (!arbol->dato) return 0
	if (arbol->izq && arbol->der)
		return 1 + contar(arbol->izq) + contar(arbol->der);
else
	return contar(arbol->izq) + contar(arbol->der)
}
