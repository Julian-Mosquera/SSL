#include <stdio.h>

int main()
{
    char hello[]="Hola Mundo";
    FILE *output = fopen("Output.txt","w");
    fprintf(output,"%s",hello);
}