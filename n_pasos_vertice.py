'''Implementar una función, que dado un grafo G, un vértice V y un número natural N, devuelva una lista con todos los vértices
del grafo G que se encuentren a N pasos del vértice V. (Puede implementarse en pseudocódigo).
¿De qué orden es la solución implementada? Haga una mínima explicación de la implementación,
si cree que el código no es suficientemente claro.'''

def n_pasos(grafo,v,n):
    visitados = {}
    orden = {}
    visitados[v]=true
    orden[v] = 0
    q = cola()
    q.encolar(v)
    resul = []
    while !cola_esta_vacia(q):
        v = q.desencolar()
        for w in grafo.adyacentes(v):
            if not w in visitados:
                visitados[w] = true
                orden[w] = orden[v] + 1
                q.encolar(w)
    for v in orden:
        if orden[v] == n:
            resul.append(v)
    return resul
            
