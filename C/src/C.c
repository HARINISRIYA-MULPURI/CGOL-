/*
 ============================================================================
 Name        : COGL-1.c
 Author      : Harini Sriya
 Version     :
 Copyright   : Your Copyright notice
 Description : Hello World in c, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, j;

	int Z[6][6] = { { 0, 1, 1, 0, 0, 1 }, { 0, 0, 0, 0, 1, 0 }, { 0, 0, 0, 0, 0,
			0 }, { 0, 0, 1, 0, 0, 1 }, { 1, 0, 1, 0, 0, 0 },
			{ 0, 0, 0, 1, 0, 0 }

	};

	// printing present generation
	printf("                                 Present generation");

	for (int i = 0; i < 6; i++) {

		printf("\n");

		for (int j = 0; j < 6; j++) {

			printf("%d   ", Z[i][j]);

		}
	}

// Initializing second array elements to "0".
	int Z2[6][6] = { { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0,
			0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0,
			0 }

	};

	int neighbours; //  label for storing neighbours.

	for (i = 0; i < 6; i++) {

		for (j = 0; j < 6; j++) {

			neighbours = 0;

//  Computing for row 1.
			if (i == 0) {

				if (Z[i][j - 1] == 1)

					neighbours++;

				if (Z[i][j + 1] == 1)

					neighbours++;

				if (Z[i + 1][j] == 1)

					neighbours++;

				if (Z[i + 1][j - 1] == 1) //  diagonal elements
					neighbours++;

				if (Z[i + 1][j + 1] == 1) // diagonal elements
					neighbours++;

				if (Z[i][j] == 0 && neighbours == 3)

					Z2[i][j] = 1;

				else if (Z[i][j] == 1 && (neighbours == 2 || neighbours == 3))

					Z2[i][j] = 1;

				else if (Z[i][j] == 1 && neighbours < 2)

					Z2[i][j] = 0;

				else if (Z[i][j] == 1 && neighbours > 3)

					Z2[i][j] = 0;

				else

					Z2[i][j] = Z[i][j];

				continue;

			}

// Computing for last row.

			if (i == 5) {

				if (Z[i - 1][j] == 1)

					neighbours++;

				if (Z[i][j - 1] == 1)

					neighbours++;

				if (Z[i][j + 1] == 1)

					neighbours++;

				if (Z[i - 1][j - 1] == 1) // diagonal element
					neighbours++;

				if (Z[i - 1][j + 1] == 1) // diagonal element
					neighbours++;

				if (Z[i][j] == 0 && neighbours == 3)

					Z2[i][j] = 1;

				else if (Z[i][j] == 1 && (neighbours == 2 || neighbours == 3))

					Z2[i][j] = 1;

				else if (Z[i][j] == 1 && neighbours < 2)

					Z2[i][j] = 0;

				else if (Z[i][j] == 1 && neighbours > 3)

					Z2[i][j] = 0;

				else

					Z2[i][j] = Z[i][j];

				continue;

			}

// Computing for column 1.
			if (j == 0) {

				if (Z[i - 1][j] == 1)

					neighbours++;

				if (Z[i][j + 1] == 1)

					neighbours++;

				if (Z[i + 1][j] == 1)

					neighbours++;

				if (Z[i - 1][j + 1] == 1) // Diagonal element
					neighbours++;

				if (Z[i + 1][j + 1] == 1) // Diagonal element
					neighbours++;

				if (Z[i][j] == 0 && neighbours == 3)

					Z2[i][j] = 1;

				else if (Z[i][j] == 1 && (neighbours == 2 || neighbours == 3))

					Z2[i][j] = 1;

				else if (Z[i][j] == 1 && neighbours < 2)

					Z2[i][j] = 0;

				else if (Z[i][j] == 1 && neighbours > 3)

					Z2[i][j] = 0;

				else

					Z2[i][j] = Z[i][j];

				continue;

			}

// Computing for last column.

			if (j == 5) {

				if (Z[i - 1][j] == 1)

					neighbours++;

				if (Z[i][j - 1] == 1)

					neighbours++;

				if (Z[i + 1][j] == 1)

					neighbours++;

				if (Z[i - 1][j - 1] == 1) //  Diagonal element
					neighbours++;

				if (Z[i + 1][j - 1] == 1) // Diagonal element
					neighbours++;

				if (Z[i][j] == 0 && neighbours == 3)

					Z2[i][j] = 1;

				else if (Z[i][j] == 1 && (neighbours == 2 || neighbours == 3))

					Z2[i][j] = 1;

				else if (Z[i][j] == 1 && neighbours < 2)

					Z2[i][j] = 0;

				else if (Z[i][j] == 1 && neighbours > 3)

					Z2[i][j] = 0;

				else

					Z2[i][j] = Z[i][j];

				continue;

			}

			if (Z[i - 1][j] == 1)

				neighbours++;

			if (Z[i][j - 1] == 1)

				neighbours++;

			if (Z[i][j + 1] == 1)

				neighbours++;

			if (Z[i + 1][j] == 1)

				neighbours++;

			// Diagonal elements
			if (Z[i - 1][j - 1] == 1)

				neighbours++;

			if (Z[i - 1][j + 1] == 1)

				neighbours++;

			if (Z[i + 1][j - 1] == 1)

				neighbours++;

			if (Z[i + 1][j + 1] == 1)

				neighbours++;

			if (Z[i][j] == 0 && neighbours == 3)

				Z2[i][j] = 1;

			else if (Z[i][j] == 1 && (neighbours == 2 || neighbours == 3))

				Z2[i][j] = 1;

			else if (Z[i][j] == 1 && neighbours < 2)

				Z2[i][j] = 0;

			else if (Z[i][j] == 1 && neighbours > 3)

				Z2[i][j] = 0;

			else

				Z2[i][j] = Z[i][j];

		}

	}

// Printing next generation array
	printf("            Next  generation\n\n");

	for (i = 0; i < 6; i++) {

		printf("\n");

		for (j = 0; j < 6; j++) {

			printf("%d   ", Z2[i][j]);

		}

	}

	printf(
			"\n\n           ******************* Author: Harini Sriya  || 180019 **********************");

	return 0;

}
