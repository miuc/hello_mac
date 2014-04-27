//
//  main.c
//  hello_world
//
//  Created by Tongqiang Chen on 14-4-15.
//  Copyright (c) 2014年 Tongqiang Chen. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void my_print()
{
    int i;
    int *p = &i;
    
    void * heap = malloc(sizeof(i));
    
    printf("int length:%ld\n", sizeof(i));
    printf("point length:%ld\n", sizeof(p));
    
    printf("stack position 1:%p\n", p);
    printf("stack position 2:%p\n", &p);
    
    if (heap == NULL)
    {
        printf("malloc heap data fail..\n");
        exit(-1);
    }
    
    printf("heap position 1:%p\n", heap);
    
    void * heap2 = malloc(sizeof(i));
    printf("heap position 2:%p\n", heap2);
}

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, World!\n");
    my_print();
    return 0;
}
