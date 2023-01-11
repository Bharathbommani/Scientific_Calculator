//headerfiles
#include<stdio.h>
#include "header.h"

/**
 * @brief circle function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */

error circle(calc_st c,result* answer)
{
    //area of a circle
    answer->final_answer=3.14*(c.num_1*c.num_1);
    return SUCCESS;
}