#include <stdlib.h>
#include "random.h"
#include <stdio.h>

double** randomWeights(int m, int n) {
	int i, j;
	double **weights = (double**) malloc(m * sizeof(double*));

	initSeed();
	for (i = 0; i < m; i++) {
		weights[i] = malloc(n * sizeof(double));

		for (j = 0; j < n; j++)
			weights[i][j] = randomDouble(-0.5, 0.5);
	}
	return weights;
}

void printWeights(double **weights, int rows, int cols) {
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++)
			printf("%f\t", weights[i][j]);
		printf("\n");
	}
}

int main() {
	int num_inputs, hidden_layer_size, num_outputs;
	double **weights;

	num_inputs = 2;
	hidden_layer_size = 2;
	num_outputs = 1;

	weights = randomWeights(hidden_layer_size, num_inputs);
	printWeights(weights, hidden_layer_size, num_inputs);
	return 0;
}