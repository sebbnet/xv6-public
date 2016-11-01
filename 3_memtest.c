#include "types.h"
#include "user.h"
#include "syscall.h"

int main(int argc, char *argv[])
{
	int * point = (void *) 0x0;
	printf(1, "VALUE AT: 0x0 is: %x\n", *point);
	exit();
}
