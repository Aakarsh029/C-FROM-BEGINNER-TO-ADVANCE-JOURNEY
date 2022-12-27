%{
#include<stdio.h>
#include<string.h>
int count=0,characters=0,spaces=0,lines=0;
%}
/* Rules Section*/
%%   /* match identifier */
([A-Za-z0-9])* {count++;}

" " {spaces++;}
"\n" {printf("words=%d, spaces=%d, lines=%d\n",count,spaces,++lines);
characters=spaces= count=0;
}
%%

int yywrap(void){}
int main(void) {

       yylex();
       //printf("number of identifiers = %d\n", count);
       return 0;
}