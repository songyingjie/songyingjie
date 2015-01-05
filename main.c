#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    double a[195][30];

    FILE* pFile = fopen("input.txt","r");
    if (pFile == NULL) perror ("Error opening file");
    else
    {
        for(i=0;i<194;i++)
            for(j=0;j<27;j++)
                fscanf(pFile,"%lf",&a[i][j]);
        //while (fscanf(pFile, "%*d,%d,%d,%d,%lf,%lf,%lf", &a,&b,&c,&d,&e,&f) != EOF)
        fclose (pFile);
    }
    //int i,j,k;
    //double a[195][30];
    //for(i=0;i<194;i++)
    //    for(j=0;j<27;j++)
    //        scanf("%lf",&a[i][j]);
    double c[15],t[15];

    while(1)
    {
        for(k=0;k<15;k++){c[k]=0;t[k]=0;}
        int n=0,m=0;
        printf("ÇëÊäÈë:1(landmass),2(zone),3(language),4(religion)\n");
        printf("ºÍ1bars,2stripes,3colours,4red,5green,6blue,7gold,8white,9black,10orange,11circles,12crosses,13saltires,14quarters,15sunstars,16crescent,17triangle,18icon,19animate,20text\n");
        scanf("%d%d",&n,&m);
        if(n==0 && m==0)break;
        if(n != 4)
        {
        for(i=0;i<194;i++)
        {
            for(k=1;k<=10;k++)
            {
                if(a[i][n-1]==k){c[k]=c[k]+a[i][m+3];t[k]++;}
            }
        }
        }
        if(n==4)
        {
            for(i=0;i<194;i++)
            {
            for(k=0;k<=10;k++)
                {
                if(a[i][n-1]==k){c[k]=c[k]+a[i][m+3];t[k]++;}
                }
            }
        }
    if(n==1){for(k=1;k<7;k++)printf("%.0lf %.0lf %lf\n",c[k],t[k],c[k]/t[k]);}
    if(n==2){for(k=1;k<5;k++)printf("%.0lf %.0lf %lf\n",c[k],t[k],c[k]/t[k]);}
    if(n==3){for(k=1;k<11;k++)printf("%.0lf %.0lf %lf\n",c[k],t[k],c[k]/t[k]);}
    if(n==4){for(k=0;k<8;k++)printf("%.0lf %.0lf %lf\n",c[k],t[k],c[k]/t[k]);}
    printf("\n");
    }
    return 0;
}
