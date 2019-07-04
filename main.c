//
//  main.c
//  wj1
//
//  Created by 王京 on 2017/10/29.
//  Copyright © 2017年 王京. All rights reserved.
//

#include"stdio.h"
int main()
{
    int i,j,t,n,a[10][10],flag=1;
    scanf("%d\n",&t);
    for(i=1;i<t;i++)
    {
        scanf("%d\n",&n);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
                for(i=0;i<n;i++)
                    for(j=0;i<j;j++)
                        if(a[i][j]!=0)
                        {
                            flag=0;
                            break;}
                if(flag==1)
                    printf("YES\n");
                else printf("NO\n");
            }}
    
    return 0;
}

