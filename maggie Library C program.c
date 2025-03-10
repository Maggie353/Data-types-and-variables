/*
 Author: Raymond Ndoro Tsuma 
 Reg No: D33-2402-2023
 Course Unit: BMS 201
 Student Year & Sem: 2.2
 
 */
// Library charges 

    
#include <stdio.h>

int main() {
int bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount;

// prompting the user to enter bookID , dueDate and returnDate 
printf("Enter the bookID: \n");
scanf("%d",& bookID);

printf("Enter the due date(in days from start of month): \n");
scanf("%d",& dueDate);

printf("Enter the return date(in days from the start of month): \n");
scanf("%d",& returnDate);

//To get the days overdue 

daysOverdue = returnDate - dueDate ;

//Determining the fine amount based on overdue days 
if(daysOverdue<=0) {
fineRate =0;
fineAmount =0;
}
else if (daysOverdue>0 && daysOverdue<=7) {
fineRate=20;
fineAmount=daysOverdue*fineRate;
}
else if (daysOverdue>=8 && daysOverdue<=14){
fineRate=50;
fineAmount=daysOverdue*fineRate;
}
else {
fineRate=100;
fineAmount=daysOverdue*fineRate;
}

//Display results 
printf("The book ID is : %d\n", bookID);
printf("The due date is: %d\n", dueDate);
printf("The days overdue are %d\n",(daysOverdue>0) ? daysOverdue:0);
printf("The fine rate is ksh %d per day \n" , fineRate);
printf("The fine amount is ksh %d\n", fineAmount);
return 0; // Execution successful 
}

    