//
//  main.c
//  practice
//
//  Created by 이민우 on 2021/09/29.
//
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int h,m;
    
    scanf("%d %d", &h, &m);
    
    if(m>=45){
        printf("%d %d", h, m-45);
    }
    else {
        if(h>0){
            printf("%d %d", h-1, m+15);
        }
       else if(h==0){
               h=23;
                printf("%d %d",h,m+15 );
            }
    }
        
    return 0;
}
