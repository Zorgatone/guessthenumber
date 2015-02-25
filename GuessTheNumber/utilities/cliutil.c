#include <stdio.h>
#include <string.h>

/* __unix__ is usually defined by compilers targeting Unix systems */
#ifdef __unix__ 
#include <termios.h>

/* _Win32 is usually defined by compilers targeting 32 or 64 bit Windows systems */
#elif defined _WIN32 

#include <windows.h>

#endif

#include "cliutil.h"
#include "cliunix.h"

void clipause(char *message) {
	if (message != NULL && strlen(message) > 0) {
		fputs(message, stdout);
	}
	getch();
	putchar('\n');
}
