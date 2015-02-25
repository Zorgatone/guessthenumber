#ifndef CLIUTILUNIX_H
#define CLIUTILUNIX_H

#include <stdio.h>

/* __unix__ is usually defined by compilers targeting Unix systems */
#ifdef __unix__ 

#include <termios.h>

/* Read 1 character - echo defines echo mode */
char getch_(int echo);

/* Read 1 character without echo */
char getch(void);

/* Read 1 character with echo */
char getche(void);

#endif

#endif