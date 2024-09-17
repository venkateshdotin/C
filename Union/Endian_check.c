#include <stdio.h>
#include <stdint.h>

typedef union
{
    uint32_t value;
    uint8_t bytes[4];
}data;

int main()
{
	data d1;
	d1.value  = 12345678;
	
	if(d1.bytes[0] == 12)
	{
		printf("%d is Big Endian\n", d1.bytes[0]);
	}
	else if(d1.bytes[0] == 78)
	{
		printf("%d is Littile Endian\n", d1.bytes[0]);
    	}

	return 0;
}
