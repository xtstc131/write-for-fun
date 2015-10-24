//
//  main.c
//  Pi
//
//  Created by 夏添 on 15/10/24.
//  Copyright © 2015年 夏添. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
 long double n=0.0,PI,temp;
    int i;
    
    for (i=1; i<=1e6; i++)
    {
        temp=1.0/(i*i);
        n+=temp;
    }
    (PI*PI)/6.0==n;
    printf("PI=%.6Lf\n",PI);
    
}