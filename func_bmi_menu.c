//header files
#include<stdio.h>
#include "header.h"
#include<math.h>
#include<stdlib.h>
static result ans={0};
//function bmi_menu for displaying options
void bmi_menu(){
    bmi_cal b;
    float h,w;
    printf("\nEnter height in meter:");
    scanf(" %f",&h);
    printf("\nEnter weight in kgs:");
    scanf(" %f",&w);
    b.num_1=h;
    b.num_2=w;
    bmi(b,&ans);
    printf("\nYour Body Mass Index(BMI) is: %.2f",ans.final_answer);
    //bmi<15 then starvation category
    if(ans.final_answer< 15)
        printf("\nYour BMI category is: Starvation");
    //bmi>15.1 and bmi<17.5 then anorexic category
    else if(ans.final_answer> 15.1 && ans.final_answer< 17.5)
        printf("\nYour BMI category is: Anorexic");
    //bmi>17.6 and bmi<18.5 then under weight category
    else if(ans.final_answer> 17.6 && ans.final_answer< 18.5)
        printf("\nYour BMI category is: Underweight"); 
    //bmi>18.6 and bmi<24.9 then ideal category
    else if(ans.final_answer>18.6 && ans.final_answer<24.9)
        printf("\nYour BMI category is: Ideal"); 
    //bmi>25 and bmi<25.9 then overweight category    
    else if(ans.final_answer>25 && ans.final_answer<25.9)
        printf("\nYour BMI category is: Overweight");
    //bmi>30 and bmi<30.9 then obese category
    else if(ans.final_answer>30 && ans.final_answer<30.9)
        printf("\nYour BMI category is: Obese");  
    //above 40  then morbidly category
    else
        printf("\nYour BMI category is: Morbidly Obese");      
    printf("\n");   
}