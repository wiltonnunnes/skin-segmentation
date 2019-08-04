#include "layer.h"

Layer createLayer(int num_inputs, int size) {
	Layer layer;
	int i, j;

	layer.num_inputs = num_inputs;
	layer.size = size;

	initSeed();

	for (i = 0; i < size; i++) {
		
	}


	for (i = 0; i < num_inputs; i++)
		*(layer.biasses + 1) = randomDouble(-0.5, 0.5);

	return layer;
}