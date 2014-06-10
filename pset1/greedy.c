/* 
*
*   greedy.c
*   
*   Author: Anton Sementsov
*
*   This code is a solution from pset1 Problem 2 of CS50.
*   Implementing greedy approach to cashier.
*   A programm, that calculates minimum number of coins to make any given amount of change.
* 
*/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float amount; // initial amount of coins, which user gives us
    float n; //for converting in cents and then round 

    float quarter = 25;
    float dim = 10;
    float nickel = 5;
    float penny = 1;
    
    int count = 0; // count for quarter, etc.
        
    //get amount in dollar
    do
    {
        printf("Please, tell me, how much change is owed?\n");
        amount = GetFloat();
    }
    while (amount<0);

    n = round((amount)*100);
    
    // while quarters can be used
    while (n>=quarter)
    {
        count++; //increase count
        n=n-quarter; //amount decrease by a quarter
    }

    // while dimes can be used
    while (n>=dim)
    {
        count++; //increase count
        n=n-dim; //amount decrease by a dim
    }
 
    // while nickels can be used
    while (n>=nickel)
    {
         count++; //increase count
         n=n-nickel; //amount decrease by a nickel
    }
  
    // while pennies can be used
    while (n>=penny)
    {
         count++; //increase count
         n=n-penny; //amount decrease by a penny
    }

    printf("%d\n",count);
}

