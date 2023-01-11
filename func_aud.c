//header files
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"header.h"
/**
 * @brief aud function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */
error aud(calc_st n,result_t* answer)
{
     // 1 Inr= 0.0187 AUD
     answer->final_answer=n.num_1*0.0187;
     return SUCCESS;
}