//header files
#include<stdio.h>
#include "header.h"
#include<math.h>
#include<stdlib.h>

static result ans={0}; // static value ans
//compound_menu for taking p,t,r
void compound_menu(){
    float p,t,r;
    compound_cal c;
    printf("\nEnter principle Amount:");
    scanf(" %f",&p);
    printf("\nEnter time period in months:");
    scanf(" %f",&t);
    printf("\nEnter Rateof Interest:");
    scanf(" %f",&r);
    c.num_1=p;
    c.num_2=t;
    c.num_3=r;
    compound(c,&ans);
    printf("\nThe Compound Interest is : %.2f",ans.final_answer);
    printf("\n");
}