/*
Student Name: Margaret Shikanda Shisia
Registration No:D33-2458-2023
Unit Code: BMS201
*/
// Program to find simple interest 
#include<stdio.h>


int main()
{
int principle;
int rate;
int time ;
int simple_interest;
printf("program to calculate the simple interest:\n");
printf("enter the principle amount:\n");
scanf("%d",&principle);
printf("enter the rate of interest :\n");
scanf("%d",& rate );
printf("enter the time in years:\n");
scanf("%d",&time);
simple_interest = (principle*rate*time)/100;
printf("simple interest is%d",simple_interest);
    return 0;
}