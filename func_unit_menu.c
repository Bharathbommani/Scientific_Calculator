//header files
#include<stdio.h>
#include<stdlib.h>
#include"header.h"
//unit menu for unit conversions
void unit_menu()
{
    int choice=-1;
    float f;
    int local_value1;
    //menu for calculate unit functions
    printf("\n1.Kilometer to Meter\n");
    printf("2.Hector to Acre\n");
    printf("3.Liter to Milliliter\n");
    printf("4.Kilogram to gram\n");
    printf("5.Inches to Centimeters \n");
    printf("6.Kilograms to pounds\n");
    printf("7.Miles to Kilometers\n");
    printf("8.Yards to meters\n");
    printf("9.Meter to Feet\n");
    printf("10.Gallons to Liters");
    printf("\n11.Exit\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        //converting kilometers to meters
        printf("\nEnter kilometers \n");
        scanf("%d",&local_value1);
        // 1 kilometer = 1000 meters
        f=local_value1*1000;
        printf("%d kilometers= %f meters",local_value1,f);
        
    }
    else if(choice==2)
    {
        //converting hectors to acres
        printf("\n Enter hectors\n");
        scanf("%d",&local_value1);
        // 1 hector = 2.471 acre
        f=local_value1*2.471;
        printf("%d hectors= %f acres",local_value1,f);
    }
    else if(choice==3)
    {
        //converting liters to milliliters
        printf("\n Enter liters\n");
        scanf("%d",&local_value1);
        // 1 liter = 1000 milliliters
        f=local_value1*1000;
        printf("%d liters= %f millilters",local_value1,f);
    }
    else if(choice==4)
    {
        //converting kilograms to grams
        printf("\n Enter kilograms\n");
        scanf("%d",&local_value1);
        // 1 kilogram = 1000 grams
        f=local_value1*1000;
        printf("%d kilograms= %f grams",local_value1,f);
    }
    else if(choice==5)
    {
        //converting Inches to Centimeters
        printf("\n Enter inches\n");
        scanf("%d",&local_value1);
        // 1 Inch = 2.540 centimeter
        f=local_value1*2.540;
        printf("%d Inches= %f Centimeters",local_value1,f);
    }
    else if(choice==6)
    {
        //converting kilograms to pounds
        printf("\n Enter kilograms\n");
        scanf("%d",&local_value1);
        // 1 kilogram = 2.2046223 pounds
        f=local_value1*2.2046223;
        printf("%d kilograms= %f pounds",local_value1,f);
    }
    else if(choice==7)
    {
        //converting miles to kilometers
        printf("\n Enter miles\n");
        scanf("%d",&local_value1);
        // 1 meter = 1.6093419 kilometer
        f=local_value1*1.6093419;
        printf("%d Miles= %f Kilometers",local_value1,f);
    }
     else if(choice==8)
    {
        //converting yards to meters
        printf("\n Enter yards\n");
        scanf("%d",&local_value1);
        // 1 yard= 0.9144028  meters
        f=local_value1*0.9144028;
        printf("%d Yards= %f meters",local_value1,f);
    }
     else if(choice==9)
    {
        //converting Meter to feet
        printf("\n Enter Meter\n");
        scanf("%d",&local_value1);
        // 1 Meter = 3.281 Feet
        f=local_value1*3.281;
        printf("%d Meters= %f Feet",local_value1,f);
    }
     else if(choice==10)
    {
        //converting Gallons to liters
        printf("\n Enter Gallons\n");
        scanf("%d",&local_value1);
        // 1 Gallon = 3.785332 Liter
        f=local_value1*3.785332;
        printf("%d Gallon= %f liters",local_value1,f);
    }
    else if(choice==11)   
        exit(0);
    else    
        printf("\nWrong choice\n");

}