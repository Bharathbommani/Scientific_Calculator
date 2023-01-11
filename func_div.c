//headerfiles
#include<stdio.h>
#include "header.h"

/**
 * @brief divv function which returns the desired result using answer variable
 * 
 * @param n 
 * @param answer 
 * @return error 
 */

error divv(calc_arthmetic n,result* answer)
{
    if(n.num_1==0 || n.num_2==0)
    {
       
        return ERROR_DIV_ZERO;//case divided by zero error
    }
    else
    {
        //division=a/b
    answer->final_answer=n.num_1/n.num_2;
    return SUCCESS;
    }
}