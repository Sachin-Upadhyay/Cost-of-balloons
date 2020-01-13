#include<stdio.h>
#include<string.h>
void main()
{
    int test_cases,i,costG,costP,players,j,k,m,temp=0,length,l,counter=0;
    char result[100];
    int gameplayA[100],gameplayB[100];
    scanf("%d",&test_cases);
    for(i=0;i<test_cases;i++)
    {
        for(j=0;j<1;j++)
        {
            scanf("%d%d",&costG,&costP);
        }
        for(k=0;k<1;k++)
        {
            scanf("%d",&players);
        }
        for(m=0;m<players;m++)
        {
            scanf("%d%d",&gameplayA[m],&gameplayB[m]);
            if(counter==0)
            {
              if(gameplayA[m]==1)
                temp=temp+costG;
              if(gameplayB[m]==1)
                temp=temp+costP;
            }
            else
            {
                if(gameplayA[m]==1)
                temp=temp+costP;
              if(gameplayB[m]==1)
                temp=temp+costG;
            }
        }
        if(counter==0)
            counter=1;
        else
            counter=0;
        result[i]=temp;
        temp=0;
    }
    length=strlen(result);
    for(l=0;l<length;l++)
        printf("%d\n",result[l]);
}
