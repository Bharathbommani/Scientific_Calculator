//headerfiles
#include<stdio.h>
#include "header.h"

/**
 * @brief triangle function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */

error triangle(calc_arthmetic n,result* answer)
{
    //area of a triangle is 1/2bh
    answer->final_answer=(n.num_1*n.num_2)/2;
    return SUCCESS;
}