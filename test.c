#include <sys/stat.h>
#include <stdio.h>

int
main(int argc, char **argv) {
	int i;

	for (i = 0; i < 16; i++)
		printf("%c%c%c%c%c%c%c%c\n",
			(i & 0x80 ? '1' : '0'),
			(i & 0x40 ? '1' : '0'),
			(i & 0x20 ? '1' : '0'),
			(i & 0x10 ? '1' : '0'),
			(i & 0x08 ? '1' : '0'),
			(i & 0x04 ? '1' : '0'),
			(i & 0x02 ? '1' : '0'),
			(i & 0x01 ? '1' : '0')
		);

	return 0;
}
