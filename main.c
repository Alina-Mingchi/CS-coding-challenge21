//
//  main.c
//  Credit_Suisse_coding
//
//  Created by Felicity on 2021/10/10.
//  Copyright © 2021 Felicity. All rights reserved.
//

#include <stdio.h>

int solution(int n)
{
    int notes;
    if (n%3 != 0) {
        notes = n/3 *2 + 1;
    }
    else{
        notes = n/3 *2;
    }
    return notes;
}

/* Do not edit below code */
int main(void) {
    int n;
    scanf("%d",&n);
    int answer=solution(n);
    printf("%d",answer);
    return 0;
}
