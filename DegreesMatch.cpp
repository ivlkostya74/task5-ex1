#include"DegreesMatch.h"
int degre(int x,int y) {
	int rez = 1;
	for (int i = 0; i < y; i++) {
		rez=rez*x;
}
	return rez;
}