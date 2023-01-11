//header files
#include<stdio.h>
#include<stdlib.h>
#include"header.h"

static result_t ans={0};
// currency_menu displaying options
void currency_menu()
{
 calc_st value;
    int choice=-1;
    int local_value1;
    printf("\n1. USD\n2. KWD\n3. AUD\n4. Exit\n");
    scanf("%d",&choice);
    if(choice>=1 && choice<=4)
    {
        /**
         * @brief Construct a new if object
         * 
         */
        if(choice==4)
        {
            exit(0);
        }
        printf("\nEnter currency to converter indian rupee to \n");
        scanf("%d",&local_value1);
        value.num_1=local_value1;
        switch(choice)
        {
            /**
             * @brief switch case for the performing required operation
             * 
             */
            case USD://choice usd
                usd(value,&ans);
                printf("\n INR %d :%.2f USD",local_value1,ans.final_answer);
                printf("\n");
                break;
            case KWD: //case kwd
                kwd(value,&ans);
                printf("\n INR %d : %.f KWD",local_value1,ans.final_answer);
                printf("\n");
                break;
            case AUD: //case aud
                aud(value,&ans);
                printf("\n INR %d : %.f AUD",local_value1,ans.final_answer);
                printf("\n");
                break;
            case EXIT: //exit
                printf("\n Closing the application...");
                exit(0);
                break;
            default:
                exit(0);
        }
    }
    else{
        printf("\n Wrong choice, Try again\n");
    }
}