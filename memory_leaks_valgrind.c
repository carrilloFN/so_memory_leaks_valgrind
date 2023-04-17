#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"


char* generar_saludo(){
    char* saludo = malloc(12);
    strcpy(saludo,"Hola mundo!");
    //free(saludo);
    return saludo;
}

int main (int argc, char* argv[]){

    char* mensaje = generar_saludo();

    printf(CYN"\n\tDireccion en memoria: [%p]\n"WHT,mensaje);
    printf(MAG"\tMensaje: [%s]\n"WHT,mensaje);

    //free(mensaje);

    /*
    printf(WHT"\n\t =============== Después de hacer el free =============== \n"WHT);
    printf(YEL"\n\tDireccion en memoria: [%p]\n"WHT,mensaje);
    printf(GRN"\tMensaje: [%s]\n\n"WHT,mensaje);
    */
    return EXIT_SUCCESS;
}