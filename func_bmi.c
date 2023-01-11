#include<stdio.h>
#include "header.h"

/**
 * @brief bmi function which returns the desired result using answer variable
 * 
 * @param b 
 * @param answer 
 * @return error 
 */

error bmi(bmi_cal b,result* answer)
{
    // bmi=wight/height*height
    answer->final_answer=b.num_2/(b.num_1*b.num_1);
    return SUCCESS;
}