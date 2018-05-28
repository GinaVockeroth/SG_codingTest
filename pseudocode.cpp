//
//  psuedocode.cpp
//  SG_test
//
//  Created by Gina Vockeroth on 5/26/18.
//  Copyright © 2018 Gina Vockeroth. All rights reserved.
//

// PROBLEM:
// given a list of people with their birth and end years (all between 1900 and 2000), find the year with the most number of people alive
// SOLUTION:
// create 2 arrays: one with birth year and second with death year for each person. e.g. birth[2] and death[2] represent the birth and death year of the third person in the array
// first: iteratate through each year (100 iterations since range is 1900-2000). for each year, check if the person has been born yet. also check if the person has died yet.
// NOTE: be careful with check for person born and person died, not yet sure in what place(s) I should put these checks
// start with an easy problem (something I can verify by hand) before I make it more complex
// NOTE: it's possible for there to be multiple years with the most number of people alive. need to figure out how to handle this. just print the list of years??
