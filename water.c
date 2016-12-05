//
//  water.c
//  cs50
//
//  Created by A Ang on 5/12/16.
//  Copyright © 2016 A Ang. All rights reserved.
//

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // assigns time variable
    int water;
    
    // Prompts user how long they're using the shower for in minutes
    do
    {
        printf("minutes: ");
        water = GetInt();
    }while(water < 1);
    
    // checks if a positive number is declared
    if(water > 0)
    {
        printf("bottles: %i", (water*192)/16);
    }
    
    // reminds user if incorrect number is used
    else
    {
        printf("must be positive\n");
    }
}