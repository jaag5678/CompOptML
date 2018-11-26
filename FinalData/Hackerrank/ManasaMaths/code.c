#include<stdio.h>
#include<math.h>
#include<string.h>

int CheckByEight(int a,int b,int c)
{
    if(((100*a)+(10*b)+c)%8==0)
        return 1;
    else
        return 0;
}
int CheckDivByEightPer(int a,int b,int c)
{
    if(((a+b+c)!=0)&&(CheckByEight(a,b,c)||CheckByEight(a,c,b)||CheckByEight(b,a,c)||CheckByEight(b,c,a)||CheckByEight(c,b,a)||CheckByEight(c,a,b)))
        return 1;
    else
        return 0;
}


int main()
{

    int t;
    char arr[110];
    int length;
    int i,j,k;
    t = 32;
    int flag=0;
    int map[10];
    int temp1=0;
    int temp2=0;
    while(t--)
    {
        scanf("%s",arr);
        memset(map,0,10*sizeof(int));
        length=0;
        flag=0;
        for(i=0;arr[i]!='\0';i++,length++);

        if(length<=3)
        {
            if(length==1)
            {
                if(((int)arr[0])%8==0)
                    flag=1;
            }
            else if(length==2)
            {
                temp1=((int)arr[0])-'0';
                temp2=((int)arr[1])-'0';
                if((((temp1*10)+temp2)%8==0)||(((temp2*10)+temp1)%8==0))
                    flag=1;
            }
            else if(length==3)
            {
                if(CheckDivByEightPer(((int)arr[2]),((int)arr[1]),((int)arr[0]))==1)
                    flag=1;
            }
        }
        else
        {
            for(i=0;i<length;i++)
                map[((int)arr[i]-'0')]=map[((int)arr[i]-'0')]+1;

            for(i=0;i<=9;i++)
            {
                for(j=0;j<=9;j++)
                {
                    for(k=0;k<=9;k++)
                    {
                        if(map[i]>=1)
                            map[i]=map[i]-1;
                        else
                            continue;

                        if(map[j]>=1)
                            map[j]=map[j]-1;
                        else
                        {
                            map[i]=map[i]+1;
                            continue;
                        }
                        if(map[k]>=1)
                            map[k]=map[k]-1;
                        else
                        {
                            map[i]=map[i]+1;
                            map[j]=map[j]+1;
                            continue;
                        }
                        if(CheckDivByEightPer(i,j,k)==1)
                        {
                            flag=1;
                            break;
                        }
                        map[i]=map[i]+1;
                        map[j]=map[j]+1;
                        map[k]=map[k]+1;
                    }
                    if(flag==1)
                        break;
                }
                if(flag==1)
                    break;
            }

        }

        if(flag==1)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}