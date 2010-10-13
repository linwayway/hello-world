#include<stdio.h>
#include<string.h>
#include"FileNameTools.h"
int GetDir(char *whole,char* dir)
{
    int i=0;
    char whole[100],dir[100],temp[100];
    
    gets(whole);
    
    while(whole[i++]!='/')
    {
       temp[i-1]=whole[i-1];
    }
    temp[i-1]='/';
    temp[i]='\0';  
    strcpy(dir,temp);
    return 0;
}



int GetName(char *whole,char* Name)
{
    return 0;
}


int GetExt(char *whole,char* Ext)
{
    return 0;
}
