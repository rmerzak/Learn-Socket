#include <stdio.h>
#include <stdlib.h>
#include <netdb.h>
int main (void)
{
int j;
struct hostent * hote;
sethostent (1);
while ((hote = gethostent()) != NULL)
{
    fprintf(stdout, "%s ", hote->h_name);
    fprintf (stdout, "\n");
}
hote = gethostbyname("localhost");
fprintf(stdout, "%s ", hote->h_name);
fprintf(stdout, "-%s- ", hote->h_addr);
for (j = 0; hote->h_aliases[j] != NULL; j++)
    fprintf(stdout, "%s", hote->h_aliases[j]);
for (j = 0; hote->h_aliases[j] != NULL; j++)
    fprintf(stdout, "%s", hote->h_aliases[j]);
endhostent ();
return 0;
}