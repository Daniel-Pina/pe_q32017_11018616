#include <stdio.h>
#include <stdlib.h>

typedef struct simple {
	int n;
	char c;
} simple;

void print_simple(simple d[10])
{
	int i;
	for (i=0; i<10; i++) {
		printf("%d", d[i].n);
	}
	printf("\n");
	for (i=0; i<10; i++) {
		printf("%c", d[i].c);
	}
	printf("\n");
}

int main ( int argc, char ** argv ){
	simple d[10];
    int i;
	for (i=0; i<10; i++) {
		d[i].n = i;
	}
	d[0].c = 'D';
	d[1].c = 'a';
	d[2].c = 'n';
	d[3].c = 'i';
	d[4].c = 'e';
	d[5].c = 'l';
	d[6].c = 'P';
	d[7].c = 'i';
	d[8].c = 'n';
	d[9].c = 'a';
	
	FILE * fopen(textstruct, wb);
    
    return 0;
}
