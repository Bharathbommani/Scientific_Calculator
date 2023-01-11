//headerfiles
#include<stdio.h>
#include "header.h"

/**
 * @brief simple function which returns the desired result using answer variable
 * 
 * @param s1 
 * @param answer 
 * @return error 
 */

error simple(simple_cal s1,result* answer)
{
    //simple interest=(p*t*r)/100
    answer->final_answer=(s1.num_1*s1.num_2*s1.num_3)/100.0;
    return SUCCESS;
}