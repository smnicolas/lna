#include <stdio.h>
#include <gmp.h>
#include <string.h>
#include <print.h>
#include <digit.h>
#include <arit.h>
#include <aux-tests.h>
/* compilar con:
 * makefil
 *
 */


int main(int argc, char ** argv)
{
  
    if (argc != 3) {
        puts("Usage: prog NUMBER NUMBER\n");return 0;
    }
    char const * fst  = strdup(argv[1]);
    char const * snd  = strdup(argv[2]);
    
    char *s, *t;
    struct digit * d, * e, * lna_div;
    mpz_t w, z, mpz_mul_res, mpz_diff, cpy_lna;
    
    digits_init_set_decimal_string(&d, fst );
    digits_init_set_decimal_string(&e, snd );
    
    mpz_init_set_str (w, fst, 10);
    mpz_init_set_str (z, snd, 10);
    mpz_init ( mpz_mul_res );
    mpz_init ( mpz_diff );



    /*
    **
    **    Multiplico:
    **
    */

    //lna_div =
    digits_set_div(d, e);
    mpz_div (mpz_mul_res, w,z);

    /* gmp_lna_cmp_ask (mpz_mul_res, lna_div, 0); */
    /* digits_print_hex(lna_div); */

}
