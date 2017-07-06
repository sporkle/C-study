// putchar() getchar() EOF
#include <stdio.h>

int main()
{
    char ch;

    while((ch = getchar()) != EOF)
        putchar(ch);

    return 0;
}

// this is for open a specified file
#include <stdio.h>
#include <stdlib.h>							//this for exit(1);

int main()
{
    int ch;
    FILE * fp;
    char fname[50];							//fname should be a direct file path

    printf("Please enter file name:");
    scanf("%s",fname);
    fp = fopen(fname,"r");
    if(fp == NULL)
    {
        printf("can't open the file.\n");
        exit(1);
        //exit(1)是异常退出,比如你的代码在出现不应该出现的分枝,要求终止程序的时候就用exit(1)
		//exit(0)是正常退出,就是你认为代码一切正常的时候的退出
    }
    while((ch = getc(fp)) != EOF)
        putchar(ch);
        
    return 0;
}

//a way deal with '\n' problem 
#include<stdio.h>

void display(char sign ,int row ,int num);

int main()
{
    int sign;
    int row = 0;
    int num = 0;

    printf("Please enter a char & two number:");
    while((sign = getchar()) != '\n')
    {
        if((scanf("%d %d",&row,&num)) != 2)				//there should be 2 rather then 1
            break;
        display(sign,row,num);
        while(getchar() != '\n')						//eat ever input line's '\n'[enter]
            continue;
        printf("Please enter a char & two number:");
    }
    printf("bye\n");
    return 0;
}

void display(char sign, int row, int num)
{
    int row_count,num_count;

    for(row_count = 0;row_count < row;row_count++)		//this twics circulation（循环） have problem .
    {
        for(num_count = 0;num_count < num;num_count++)
            putchar(sign);
        //printf("\n");
        putchar('\n');
    }
}

//输入确认
//-------