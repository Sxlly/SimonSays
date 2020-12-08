#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "simon.h"



void simon_gen() {


	char *simon[200];
	int ii;



	simon[0] = "                            -                      \n";
	simon[1] = "                         -     -                    \n";
	simon[2] = "                        -  * *  -                    \n";
	simon[3] = "                        -   0   -                    \n";
	simon[4] = "                          -   -                       \n";
	simon[5] = "                           - -  ---                    \n";
	simon[6] = "                       - -     - -                     \n";
	simon[7] = "                      -          -                      \n";
	simon[8] = "                        -       -                        \n";
	simon[9] = "                          -   -                          \n";
	simon[10] = "                         -   -                          \n";
	simon[11] = "                        -  -  -                         \n";
	simon[12] = "                       -  - -  -                        \n";



	for (ii = 0; ii < 13; ii++) {

		printf("%s", simon[ii]);

	}


}
