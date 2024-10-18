//
//  method.h
//  Duo Calc POSIX
//
//  Created by Galahad L on 2024/10/16.
//
#include <stdio.h>
#include <stdlib.h>
float max(float a,float b){
    float max;
    max = (a>b)?a:b;
    return max;
}
float min(float a,float b){
    float min;
    min = (a<b)?a:b;
    return min;
}
double fraction(int a){
    double result = 1.0;
    if(a == 0){
        result = 1;
    }else{
        for (int i = 1; i <= a; i++) {
            result =result* i;
        }
    }
    return result;
}
int intbasicinput1(int a){
    printf("Input a :");
    scanf("%d",&a);
    return a;
}
float floatbasicinput1(float a){
    printf("Input a :");
    scanf("%f",&a);
    return a;
}
int intbasicinput2(int b){
    printf("Input b :");
    scanf("%d",&b);
    return b;
}
float floatbasicinput2(float b){
    printf("Input b :");
    scanf("%f",&b);
    return b;
}
