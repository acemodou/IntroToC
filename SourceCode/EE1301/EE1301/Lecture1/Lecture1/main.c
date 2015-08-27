//
//  main.c
//  Lecture1
//
//  Created by المهاجرون on 8/3/15.
//  Copyright (c) 2015 UMN. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x, y;
    
    printf("Enter an Integer:");
    scanf("%d",&x);
    
    y = 4 * x * x * x - 2 * x + 5;
    
    printf("Results = %d \n",y);
    return 0;
}
