/*
Student Name: Margaret Shikanda Shisia
Registration No:D33-2458-2023
Unit Code: BMS201
*/
// Program to find compound interest 
#include<stdio.h>
#include<math.h>
int main()
{
double principle;
double rate; 
double time;
double total_amount;
double compound_interest; 
int n;
printf("prigram to calculate compound interest:\n");
printf("enter the principle:\n");
scanf("%lf",&principle);
printf("enter the rate of interest:\n");
scanf("%lf",&rate);
printf("enter the time in years:\n");
scanf("%lf",& time);
printf("enter number times the interest is compounded:\n");
scanf("%d",&n);
rate= rate/100;
total_amount= principle * pow((1+rate/n),(n*time) );
compound_interest=total_amount-principle;
printf("the total_amount is%.2f",total_amount);
printf("the compound_interest is%.2f",compound_interest);
    return 0;
}