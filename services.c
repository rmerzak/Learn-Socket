#define GNU_ SOURCE
#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>

int main(void)
{
    struct servent *service;
    struct servent *retour;
    char buffer[256];
    setservent(0);
    while ((service = getservent()) != NULL)
    {
        fprintf(stdout, "%s\n", service->s_name);
    }
    endservent();
    fprintf(stdout, "\n");
    return (0);
}