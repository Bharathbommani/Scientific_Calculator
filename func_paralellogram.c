//headerfiles
#include<stdio.h>
#include "header.h"

/**
 * @brief paralellogram function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */

error parallelogram(calc_arthmetic n,result* answer)
{
    //area of a paralellogram=b*h
    answer->final_answer=n.num_1*n.num_2;
    return SUCCESS;
}