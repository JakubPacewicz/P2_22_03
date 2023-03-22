#include <stdio.h>

const int SPACE_SIZE = 3;
const int NO_SPACE_SIZE = 3;


//
struct NODE {
    int liczbaI;
    float liczbaF;
    char ciag_no_spc[ NO_SPACE_SIZE ]; // ci¹g znakowy bez spacji
    char ciag_spc[ SPACE_SIZE ]; // ci¹g znakowy z mo¿liwymi spacjami
    char znak;
    unsigned long naturalna;
};
    



void PrintToFile(FILE* plik, NODE* struktura){
	plik = fopen("plik_output.txt", "w");
	fprintf(plik, "%", )
	
	fclose(plik);
};

void PrintFromFile(FILE* plik){
	
};
