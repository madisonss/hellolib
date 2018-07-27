#include <stdio.h>
#include "hello.h"

void
hello_there (const char *label, unsigned long iteration)
{
	printf("%s%sHello from Flatland! [#%lu]\n",
	       (label ? label : ""), (label ? ": " : ""),
	       iteration);
}
