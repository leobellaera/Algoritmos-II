"""Las bolsas de un supermercado se cobran por separado y soportan hasta un peso máximo P, por encima del cual se rompen.
Implementar el pseudocódigo de un algoritmo greedy que, teniendo una lista de pesos de n productos comprados,
encuentre la mejor forma de distribuir los productos en la menor cantidad posible de bolsas.
Realizar el seguimiento del algoritmo propuesto para bolsas con peso máximo 5 y para una lista con los pesos:
[ 4, 2, 1, 3, 5 ]. ¿El algoritmo implementado encuentra siempre la solución óptima? Justificar."""

P_MAX = 10 #kg

def bolsas_supermercado(prod_comprados):
	cant_bolsas = 0
	peso_restante = P_MAX
	#supongo que todo producto_comprados[i] es menor a P_MAX
	prod_comprados.sort() #pongo los mas pesados al principio
	for peso_producto in prod_comprados:
		if peso_restante > peso_producto:
			peso_restante -= peso_producto
			continue
		cant_bolsas+=1
		peso_restante = P_MAX
	  return cant_bolsas

