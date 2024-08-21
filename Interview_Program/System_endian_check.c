/*Program to find endianness of the system – I.e. Little endian or Big endian ?*/

#include <stdio.h>

int main() {
	unsigned int num = 1;
	unsigned char *bytePtr = (unsigned char*)&num;

    // Check the first byte of the integer
	if (*bytePtr) {
		printf("The system is Little-endian.\n");
	}
	else {
		printf("The system is Big-endian.\n");
	}
	
	return 0;
}
