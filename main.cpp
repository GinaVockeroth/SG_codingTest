//
//  main.cpp
//  SG_test
//
//  Created by Gina Vockeroth on 5/26/18.
//  Copyright © 2018 Gina Vockeroth. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int birth[9] = {1900, 1900, 1900, 1900, 1950, 1950, 1950, 1950, 1950};
    int death[9] = {1910, 1912, 1913, 1914, 1999, 1998, 1997, 1996, 1995};
    
    int entries = sizeof(birth)/sizeof(birth[0]); // this gets the number of entries/people in the birth/death array
    
    printf("%d entries in birth array \n", entries);

    // initializing all of the variables outside the for loop
    int i = 0;
    int birthCounter = 0;
    int alive = 0;
    int deathCounter = 0; // so morbid
    int maxAlive = 0;
    int maxAliveYear = 0;
    
    for (i = 1900; i < 2001; i++) // iterates through each year between 1900-2000
    {
        // the first step is to count the number of people born in each year
        for (int j = 0; j < entries; j++)
        {
            if (i == birth[j])
            {
                birthCounter++;
            }
        }
        
        // the next step is to count the number of people who died in each year. need to keep track of not just how many people died this year, but also how many people died since 1900.
        int noDeath = 0;
        for (int k = 0; k < entries; k++)
        {
            if (i == death[k])
            {
                deathCounter++;
            }
            else
            {
                noDeath++; // no deaths in that year
            }
        }
        
        // next step is to determine the number of people alive each year: for each year, subtract the number of people who died from the number of people who were born
        // finding the number of people alive for each year will help us to find the maximum people alive over the entire century
        if (noDeath == 0)
        {
            alive = birthCounter;
        }
        else
        {
            alive = (birthCounter - deathCounter);
        }
        
        printf("%d people are alive in %d \n", alive, i);
        // lastly, we need to find the year with the most number of people alive
        // in other words, take the max of the alive varaible over all of the years
        // there can be multiple years with the most people alive. for simplicity we will print out the most recent year with the most people alive
        if (alive > 0)
        {
            if (alive >= maxAlive)
                {
                if (maxAlive == 0) // make the maxAlive variable nonempty by assgning it the value of the first year someone was born
                                   // doing this allows us to have something to compare future values to
                {
                    maxAlive = alive;
                }
                else if (alive >= maxAlive)
                {
                    maxAlive = alive;
                    maxAliveYear = i;
                }
            }
        }
    }
    printf("Most people alive in %d with %d people \n", maxAliveYear, maxAlive);
    
    return 0;
}

