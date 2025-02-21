
#include<stdio.h>

int main(){
    int length, width,area;
    printf("Program to find the area of rectangle: \n"); 
    printf("Enter the length: \n");
    scanf("%d",&length);
    printf("Enter the width:\n");
    scanf("%d",&width);
    area=length*width;
    printf("The area is %d", area);
    return 0;
    
    
}