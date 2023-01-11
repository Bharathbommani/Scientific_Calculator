//header files
#include<stdio.h>
#include "header.h"
#include<math.h>

/**
 * @brief compound function which returns the desired result using answer variable
 * 
 * @param c 
 * @param answer 
 * @return error 
 */

error compound(compound_cal c,result* answer)
{
    //compound interest=p*(1+r/100)^t
    float f=Pow((1+c.num_3/100),c.num_2);
    answer->final_answer=c.num_1*f;
    return SUCCESS;
}