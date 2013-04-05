//
//  main.c
//  Conditionals
//
//  Created by Adrian Bruce Cunanan on 4/5/13.
//  Copyright (c) 2013 ThriveStreams. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i = 20;
    int j = 25;
    
    int k = ( i > j ) ? 10 : 5;
    
    if ( 5 < j - k ) { //first expression
        printf("The first expression is true.");
    } else if ( j > i ) { //second expression
        printf("The second expression is true.");
    } else {
        printf("Neither expression is true.");
    }
    return 0;
}

