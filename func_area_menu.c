//header files
#include<stdio.h>
#include "header.h"
#include<math.h>
#include<stdlib.h>



static result ans={0};
void area_menu()
{
    /**
     * @brief area menu function to perfrom required  operations
     * 
     */
     calc_arthmetic value;
     calc_st s;
    
    int choice=-1;
    int local_value1,local_value2;
    // menu for arthmetic
    printf("\n1. Area of Triangle\n2. Area of Rectangle\n3. Area of Square\n4. Area of Parallelogram\n5.Area of a circle\n6. Exit\n");
    scanf("%d",&choice);
    if(choice>=1 && choice<=6)
    {
        /**
         * @brief Construct a new if object
         * 
         */
        if(choice==6)
        {
            exit(0);
        }
        switch(choice)
        {
            /**
             * @brief switch case for the performing required operation
             * 
             */
            case 1://area of a triangle
                printf("\nEnter the height and breadth \n");
                scanf("%d %d",&local_value1,&local_value2);
                value.num_1=local_value1;
                value.num_2=local_value2;
                triangle(value,&ans);
                printf("\nThe area of a triangle is : %.2f",ans.final_answer);
                printf("\n");
                break;

            case 2://area of a rectangle
                printf("\nEnter the length and breadth \n");
                scanf("%d %d",&local_value1,&local_value2);
                value.num_1=local_value1;
                value.num_2=local_value2;
                rectangle(value,&ans);
                printf("\nThe area of a rectangle is: %.2f",ans.final_answer);
                printf("\n");
                break;

            case 3:// area of a square
                printf("\n Enter side of square\n");
                scanf("%d",&local_value1);
                s.num_1=local_value1;
                square(s,&ans);
                printf("\nThe area of a square is: %.2f",ans.final_answer);
                printf("\n");
                break;

            case 4:// area of a paralellogram
                printf("\nEnter base and height \n");
                scanf("%d %d",&local_value1,&local_value2);
                value.num_1=local_value1;
                value.num_2=local_value2;
                parallelogram(value,&ans);
                printf("\nThe area of a paralellogram is : %.2f",ans.final_answer);
                printf("\n");
                break;

            case 5:// area of a circle
                printf("\nEnter radius of a circle\n");
                scanf("%d",&local_value1);
                s.num_1=local_value1;
                circle(s,&ans);
                printf("\nThe area of a circle is : %.2f",ans.final_answer);
                printf("\n");
                break;
            
            case 6:
                exit(0);

            default:
            exit(0);

        }
    }
    else
    {
        //choice greater than 6
        printf("\n Wrong choice, Try again\n");
    }
    
}