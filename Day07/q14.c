#include<stdio.h>

#include <ctype.h>

int main() {

    char c;

    scanf(" %c",&c);

    c=tolower((unsigned char)c);

    if(c>="a"[0]&&c<="z"[0])printf(c=="a"[0]||c=="e"[0]||c=="i"[0]||c=="o"[0]||c=="u"[0]?"Vowel":"Consonant");

    else printf("Not an alphabet");

    return 0;

}

