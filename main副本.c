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
 long double n=0.0,temp,Pi;
    int i;
    
    for (i=1; i<=10000; i++)
    {
        temp=1.0/(i*i);
        n+=temp;
    }
    Pi=sqrt(n*6);
    printf("n=%Lf\n",n);
    printf("Pi=%Lf\n",Pi);
    return 0;
    

}