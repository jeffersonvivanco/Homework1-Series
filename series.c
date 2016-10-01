#include <stdio.h>
/* author: Jefferson Vivanco 
 * Homework 1 Date: 2/3/16
 * Program: This program prints the sum of the first n terms of the specified series
 * 			in the instructions. 
 * Parameters: x: Type: Double
 * 				  It is the numerator in the series, it is to the nth power
 * 			   n: Type: Int
 * 				  It is the denominator in the series, and the exponent in the numerator
 * return: The main function doesn't return anything, but the function sum (the function
 * 		   that computes the sum of the series) returns the sum as a double. 
 * Functions: main: Calls the sum function and prints out the results according to the 
 * 					format described in the project description. 
 * 			  sum: Computes the sum of the series
 * */

double sum(double x, int n); //declaring the function so the main function can call it.
/*The main function, responsible for calling the sum function with the specified values */
int main()
{
	//initializing variables
    double x1 = 1.0;
    double x2 = 0.1;
    double x3 = 3.14;
    double x4 = 23.0;
	//The print statements and the loops below print the results
    printf("%4s %6s %15s\n", "x","n","series");
    printf("%s\n","--------------------------------------------------");
    int i1;
    for(i1=-2; i1<=10; i1++)
    {
        printf("%.2f%7i%21.10f\n",x1,i1,sum(x1,i1));
    }
    printf("%s\n","");
    printf("%4s %6s %15s\n", "x","n","series");
    printf("%s\n","--------------------------------------------------");
    int i2;
    for(i2=-2; i2<=10; i2++)
    {
        printf("%.2f%7i%21.10f\n",x2,i2,sum(x2,i2));
    }
    printf("%s\n","");
    printf("%4s %6s %15s\n", "x","n","series");
    printf("%s\n","--------------------------------------------------");
    int i3;
    for(i3=-2; i3<=10; i3++)
    {
        printf("%.2f%7i%21.10f\n",x3,i3,sum(x3,i3));
    }
    printf("%s\n","");
    printf("%4s %6s %15s\n", "x","n","series");
    printf("%s\n","--------------------------------------------------");
    int i4;
    for(i4=-2; i4<=10; i4++)
    {
        printf("%.2f%7i%31.10f\n",x4,i4,sum(x4,i4));
    }

}
/* 
 * This function computes the sum of the series.
 * return: Returns a double, this is the sum of the series with the x and n specified by
 * 		   the main function
 * */
double sum(double x, int n)
{
    if(n<=0)
        return -1;
    else{
        double result;
        double denominator = 0;
        double numerator = 0;
        double power=1;
        int i;
        int y;
        for(i=1; i<=n; i++){
            power=1;
            denominator =i;
            for(y=1; y<=i; y++){
                power = power*x;
            }
            numerator = power;
            result = result + (numerator/denominator);

        }
        return result;

    }

}
