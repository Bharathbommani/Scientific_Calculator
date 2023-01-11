//headerfiles
#include<stdio.h>
#include "header.h"

/**
 * @brief square function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */

error square(calc_st n,result* answer)
{
    //area of a square=s*s
    answer->final_answer=n.num_1*n.num_1;
    return SUCCESS;
}