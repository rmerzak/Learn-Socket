#include <stdio.h>
#include <arpa/inet.h>
#include <netinet/in.h>
int main (int argc, char * argv[])
{
    int i;
    struct in_addr adresse;
    unsigned long int reseau;
    unsigned long int locale;
    for (i =1; i < argc; i++) {
        fprintf(stdout, "inet netof(%s) = ", argv[i]);
        if (inet_aton(argv[i], & adresse) == 0) {
        fprintf(stdout, "invalide \n");
        continue;
        }
        reseau = inet_netof (adresse);
        locale = inet_lnaof (adresse);
        fprintf(stdout, "%081lX + %081lX\n", reseau, locale);
    }
    return 0;
}