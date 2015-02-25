#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#include "utilities\cliutil.h"
#include "game\game.h"

#define MENULEN 1

typedef struct shortcut {
	char c;
	void (*func)(void);
} shortcut;

int main(void) {
	char c;
	shortcut menu[MENULEN] = {
		{
			'P', playgame
		}
	};

	fputs("Scegli un azione: ", stdout);
	scanf_s("%c", &c);
	c = toupper(c);

	for (int i = 0; i < MENULEN; i++) {
		if (menu[i].c == c) {
			menu[i].func();
		}
	}

	clipause("Premere un tasto per continuare...");

	exit(EXIT_SUCCESS);
}