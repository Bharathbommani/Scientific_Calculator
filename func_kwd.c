//headerfiles
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"header.h"
/**
 * @brief kwd function which returns the desired result using answer variable
 * 
 * @param n
 * @param answer 
 * @return error 
 */
error kwd(calc_st n,result_t* answer)
{
     // 1 Inr= 0.4087 KWD
     answer->final_answer=n.num_1*0.4087;
     return SUCCESS;
}