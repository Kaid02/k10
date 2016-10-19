/*
Student Name : Kabir D Shrestha
Subject : Programming Fundamental
Lab No. : 06
Program : WAP to swap two numbers from users
Date : 2016-10-19
*/
#include<stdio.h>
#include<conio.h>

void main(){
    float a,b,temp;

    printf("Enter the first number:\n");
    scanf("%f",&a);

    printf("Enter the second number:\n");
    scanf("%f",&b);

    printf("\nBefore swapping");
    printf("\n Enter the value of first number:%f\n",a);
    printf("\nEnter the value of second number:%f\n",b);
    temp=a;
     a=b;
    b=temp;

    printf("\nAfter swapping\n");
    printf("\nEnter the value the first number:%f",a);
    printf("\nEnter the value of second number:%f",b);
    getch();


    }
