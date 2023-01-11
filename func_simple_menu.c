//headerfiles
#include<stdio.h>
#include "header.h"
#include<math.h>
#include<stdlib.h>

static result ans={0};
// simplemenu for taking simple interest inputs
void simple_menu(){
    float p,t,r;
    simple_cal c;
    printf("\nEnter principle Amount:");
    scanf(" %f",&p);
    printf("\nEnter time period in months:");
    scanf(" %f",&t);
    printf("\nEnter Rateof Interest:");
    scanf(" %f",&r);
    c.num_1=p;
    c.num_2=t;
    c.num_3=r;
    simple(c,&ans);
    printf("\nThe Simple Interest is : %.2f",ans.final_answer);
    printf("\n");
}