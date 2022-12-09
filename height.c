#include<stdio.h>
void main()
{
    int heights[]={10,6,8,5,11,9};
    int number[10];
    int buffer[10];
    int i,j,k;
    int max;
    int a=0;
    int count;
    for(i=0;i<6;i++)
    {
        count=0;
        max=0;
        for(j=i+1;j<6;j++)
        {
           if(heights[i]>var && heights[j]>max)
           {
               max=heights[j];
               count++;
           }
        }
        number[i]=count;
    }
    for(i=0;i<6;i++)
    {
        printf("%d ",number[i]);
    }

}
