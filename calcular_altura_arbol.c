size_t altura_arbol(abb_t* arbol)
	if (!arbol->dato)
		return 0
	if (!arbol->izq && !arbol->der)
		return 1
	if (arbol->izq || arbol->der)
		return 1 + max(altura_arbol(arbol->izq),altura_arbol(arbol->der));
