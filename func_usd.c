//header files
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"header.h"
/**
 * @brief usd function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */
error usd(calc_st n,result_t* answer)
{
     // 1 Inr= 1.3578 USD
     answer->final_answer=n.num_1*1.3578;
     return SUCCESS;
}