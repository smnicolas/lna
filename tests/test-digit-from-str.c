#include <stdio.h>
#include <gmp.h>
#include "../print.h"
#include "../digit.h"
#include "../arit.h"
/* compilar con:
 * gcc ../digit/*.c test....c -o fromstr -lgmp -lm
 *
 */


int main(int argc, char ** argv)
{
    if (argc != 2) {
        puts("Usage: prog NUMBER\n");return 0;
    }

    char const * input = argv[1];
    
    struct digit * d = digits_new_decimal_string( input );
    puts("");
    digits_print_hex(d);

    mpz_t a;
    mpz_init_set_str (a, argv[1], 10);
    gmp_printf ("%#Zx", a); 

    
    return 0;
}