#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>


/**
 * Malloc
 */
void Malloc() {
	printf("Method using malloc()/calloc()\n");
	//int *p = (int*)calloc(1, sizeof(int));
	int *p = (int*)malloc(1 * sizeof(int));
	if (p == NULL) {
		printf("Failed to allocate memory\n");
		return;
	}
	*p = 5;
	printf("%d\n", *p);
	//free(p);
	p = NULL;
	//free(p);

	/*Array*/
	//int *array_p = (int*)calloc(8, sizeof(int));
	int* array_p= (int*)malloc(8 * sizeof(int));
	if (array_p == NULL) {
		printf("Failed to allocate memory\n");
		return;
	}
	for(int i=0;i<8;i++){
		array_p[i] = i*i;
		printf("%d, ", array_p[i]);
	}
	printf("\n");
}

/**
 * New
 */
void New() {
	std::cout << "Using new/delete: " << std::endl;
	/*Single value*/
	int *p = new int();
	*p = 6;
	std::cout << *p << std::endl;
	delete p;
	p = nullptr;

	/*Array*/
	int *array_p = new int[8];
	for(int i=0;i<8;i++){
		array_p[i] = i*i;
		std::cout << array_p[i] << ", ";
	}
	delete []array_p;
	std::cout << std::endl;
}

/**
 * NewArrays
 */
void NewArrays() {
	std::cout << "One more array" << std::endl;
	int *p = new int[5]{1, 2, 3, 4, 5};
	for (int i = 0; i < 5; ++i) {
		// p[i] = i;
		std::cout << p[i] <<", ";
	}
	delete[]p;
	std::cout << std::endl;
}

/**
 * Strings
 */
void Strings() {
	std::cout << "A string: " << std::endl;
	char *p = new char[4];
	strcpy(p, "C++");
	// strcpy_s(p, 4, "C++");
	std::cout << p << std::endl;
	delete[]p;
}

/**
 * TwoD
 */
void TwoD() {
	std::cout << "Now do a matrix!" << std::endl;

	const int rowSize = 2;
	const int colSize = 2;
	int *p1 = new int[rowSize];
	int *p2 = new int[colSize];

	int **pData = new int *[2];
	pData[0] = p1;	// First row
	pData[1] = p2;	// Second row
	/*Print*/
	for(int i=0;i<rowSize;i++ ){
		for(int j=0;j<colSize;j++ ){
			std::cout << pData[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	/*Delete in the same order they were created*/
	delete[]p1;//delete []pData[0]
	delete[]p2;//delete []pData[1]
	delete [] pData;
}


/**
 * 
 * main()
 * 
 */
int main() {
	/**
	 * Video 35
	 */
	Malloc();

	/**
	 * video 36 
	 */
	New();

	/**
	 *  Video 37
	 */
	NewArrays();
	Strings();

	/**
	 * Video 38
	 */
	TwoD();

	/**
	 * Final stuff
	 */
	// int data[2][3] = {
	// 	1,2,3,
	// 	4,5,6
	// }; //1,2,3,4,5,6
	//    //data[0][1]
	// Strings();


	return 0;
}