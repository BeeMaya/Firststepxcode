//
//  main.c
//  homework2
//
//  Created by Maya on 10/15/14.
//  Copyright (c) 2014 Maya. All rights reserved.
//

#include <stdio.h>

void multiply (int a, int b);       // тут должна быть декларация функции
int sum (int a, int b);
float tricky (float c, float d, float e);

int main()                          // тут должен быть вызов функции
{
    int a=5;
    int b=7;
    multiply(a,b);
    
    a=7;
    b=-8;
    multiply(a,b);
    
    a=0;
    b=15;
    multiply(a,b);
    
    a=23;
    b=42;
    sum(a,b);
    
    
    printf("Tricky result = %f\n", tricky(10.78, 0.76, 997.6));
    printf("Tricky result = %f\n", tricky(1.6, 60.76, 9.6));
    printf("Tricky result = %f\n", tricky(0, 0, 9.6));
    
    return 0;
};


void multiply (int a, int b)                                            // тут должна быть дефиниция (реализация) функции.
{
    int result = a*b;                                                   // тут должен быть код который выводит в консоль произведение a и b
    printf("Multiplication of a=%d and b=%d is : %d\n", a, b, result);
};


int sum(int a, int b)
{
    int result = a+b;
    printf("Decimal Sum of a=%d and b=%d is : %d\n", a, b, result);
    printf("Hexademical Sum of a=%d and b=%d is : %x\n", a, b, result);
    return result;
};

float tricky (float c, float d, float e)
{
    
    printf("Tricky get c=%f, d=%f, e=%f\n", c, d, e);
    
    float result = 0;
    if (c<d)
    {
        result=(c+d)*e;
    }
    else if (c>d)
    {
        result=(c-d)*e;
    }
    else
    {
        result=c+d+e;
    }
    
    return result;
    
};



/*
 
 #include<stdio.h>
 
 // это декларация функции name_of_fucntion1
 void name_of_fucntion1(int a, int b);
 
 int main()
 {
 
 // это вызов функции name_of_fucntion1
 name_of_fucntion1(10, -7);
 return 0;
 }
 
 // это дефиниция (реализация) функции name_of_fucntion1
 void name_of_fucntion1(int a, int b)
 {
 // тут должен быть код который выводит в консоль произведение a и b
 }
 
 */

