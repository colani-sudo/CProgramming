//
//  main.c
//  PR111_1_0202
//
//  Created by Colani Matsenjwa on 2022/11/2.
//

#include <stdio.h>

int main() {
    
    float num;
    scanf("%f", &num);
    
    printf("%.2f\n", num);
    
    int num2 = (int) (num * 100);
    float num3 = (float)(num2)/100;
    printf("%.2f\n", num3);
    
    return 0;
}
