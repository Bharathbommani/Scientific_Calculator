//headerfiles
#include<stdio.h>
#include "header.h"

/**
 * @brief rectangle function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */

error rectangle(calc_arthmetic n,result* answer)
{
    //area of a rectangle=l*b
    answer->final_answer=n.num_1*n.num_2;
    return SUCCESS;
}