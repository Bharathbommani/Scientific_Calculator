//header files
#include<stdio.h>
#include "header.h"
#include<math.h>
#include<stdlib.h>
//main_menu for displaying different types of calculators
void main_menu()
{
    int n;
    printf("----------------------------------------------------\n");
    printf("| WELCOME TO THE SCIENTIFIC CALCULATOR APPLICATION |\n");
    printf("|__________________________________________________|\n");
    printf("|        1.Arithmetic Operations                   |\n");
    printf("|        2.Scientific Operations                   |\n");
    printf("|        3.Trignometric Operations                 |\n");
    printf("|        4.Currency Converter                      |\n");
    printf("|        5.Unit Converter                          |\n");
    printf("|        6.Simple Interest                         |\n");
    printf("|        7.Compund Interest                        |\n");
    printf("|        8.BMI Calculator                          |\n");
    printf("|        9.Area of Shapes                          |\n");
    printf("|__________________________________________________|\n");
    scanf("%d",&n);
    //arthmetic operations
    if(n==1)
    {
        arthmetic_menu();
    }
    //scientific operations
    else if(n==2)
    {
        scientific_menu();
    }
    //triganometric  operations
    else if(n==3)
    {
        trignometric_menu();
    }
    // currency converter
    else if(n==4)
    {
        currency_menu();
    }
    // unit operations
    else if(n==5)
    {
        unit_menu();
    }
    //simple interest calculator
    else if(n==6)
    {
        simple_menu();
    }
    //compound interest calculator
    else if(n==7)
    {
        compound_menu();
    }
    //bmi calculator
    else if(n==8)
    {
        bmi_menu();
    }
    else if(n==9)
    {
        area_menu();
    }
    //wrong choice
    else
    {
      printf("Wrong choice\n");
      exit(0);
    }
}