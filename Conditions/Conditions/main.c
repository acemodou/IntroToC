//
//  main.c
//  Conditions
//
//  Created by المهاجرون on 8/8/15.
//  Copyright (c) 2015 UMN. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
  int n, reverse = 0;
    printf("Enter a number to reverse \n");
    scanf("%d",&n);
    
    while(n!=0)
    {
        reverse = reverse * 10;
        reverse = reverse + n%10;
        n = n / 10;
        
    }
     
  
    printf("The reverse of the number is %d",reverse);
  
       
    return 0;
}
