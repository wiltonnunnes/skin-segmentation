#include "random"

struct Layer {
	int num_inputs;
	int size;
	double *weights;
	double *biasses;
};

Layer createLayer(int num_inputs, int size);