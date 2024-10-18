//
//  main.c
//  Duo Calc POSIX
//
//  Created by Galahad L on 2024/10/9.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <string.h>
#include "method.h"
int main(int argc, const char * argv[]) {
    float max(float a,float b);
    float min(float a,float b);
    int intbasicinput1(int a);
    int intbasicinput2(int b);
    float floatbasicinput1(float a);
    float floatbasicinput2(float b);
    double fraction(int a);
    float a = 1;
    float b = 1;
    char c ;
    int count = 0;
    system("clear");
    printf("Welcome to use Duo-Calc!\n");
    sleep(1);
    system("clear");
    while(1){
        printf("Choose from '+' '-' '*' '/' '%%' '!' '^' 'sqrt' 'f'\nPress '$' to exit\nInput an operator:");
        scanf("%s",&c);
        if(c=='M'){
            float a = floatbasicinput1(a = 0),b = floatbasicinput2(b = 0);
            float i =max(a,b);
            printf("Max = %f\n",i);
        }
        else if(c=='m'){
            float a = floatbasicinput1(a = 0),b = floatbasicinput2(b = 0);
            float i = min(a,b);
            printf("Min = %f\n",i);
        }
        else if(c=='+'){
            float a = floatbasicinput1(a = 0),b = floatbasicinput2(b = 0);
            printf("a+b=%f\n",a+b);
        }
        else if(c=='-'){
            float a = floatbasicinput1(a = 0),b = floatbasicinput2(b = 0);
            printf("a-b=%f\n",a-b);
        }
        else if(c=='*'){
            float a = floatbasicinput1(a = 0),b = floatbasicinput2(b = 0);
            printf("a*b=%f\n",a*b);
        }
        else if(c=='/'){
            float a = floatbasicinput1(a = 0),b = floatbasicinput2(b = 0);
            if(b==0){
                printf("Invalid usage of operator '/'\n");
            }else{
                printf("a/b=%f\n",a/b);
            }
        }
        else if(c=='%'){
            int c = intbasicinput1(a = 0),e = intbasicinput2(b = 0);
            double f = c%e;
            printf("a%%b=%f\n",f);
        }
        else if(c=='!'){
            int a = intbasicinput1(a = 0);
            printf("x = %d\n",a);
            double result = 1;
            if (a<0) {
                printf("Invalid usage of operator '!'");
            }
            else{
                result = fraction(a);
                printf("a! = %e",result);
            }
        }
        else if (c=='^'){
            int x = intbasicinput1(a = 0),y = intbasicinput2(b = 0);
            double g = pow(x,y);
            printf("a^b=%e\n",g);
        }
        else if (strcmp(&c,"sqrt")==0){
            float a = floatbasicinput1(a = 0);
            if(a<0){
                printf("Invalid usage of square root.");
            }
            else{
                printf("The square root of a is %f\n",sqrt(a));
            }
        }
        else if (c=='f'){
            printf("Stop trigger a.\n");
            int a = intbasicinput1(a = 0);
            if(a<0){
                printf("Invalid usage, a should be greater than or equal to 0.");
            }else{
                double result = 0.0;
                for (int i = 1;i <= a;i++){
                    result += fraction(i);
                }
                printf("1!+2!+3!+...+a!=%e",result);
            }
        }
        else if (c=='$'){
            break;
        }
        else{
            printf("Invalid Operator\n");
        }
        printf("\n");
        getchar();
        count++;
        sleep(1);
        system("clear");
        sleep(1);
    }
    printf("\n********** Program Ended **********\n");
    printf("Total Cycle(s):%d\n",count);
    return 0;
}


