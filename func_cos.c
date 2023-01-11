//header files
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"header.h"
/**
 * @brief coss function which returns the desired result using answer variable
 * 
 * @param n
 * @param answer 
 * @return error 
 */
error coss(calc_st n,result_t* answer)
{
     answer->final_answer=cos((n.num_1*3.14159)/180);
     return SUCCESS;
}