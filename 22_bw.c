#include<stdio.h>
int main()
{
    int a, b, c, d, e;  /*0表示黑色，1表示白色*/
    for(a=0; a<=1; a++)  /*穷举五个人额头帖纸颜色的全部可能*/
        for(b=0; b<=1; b++)
            for(c=0; c<=1; c++)
                for(d=0; d<=1; d++)
                    for(e=0; e<=1; e++)
                        if( (a&&b+c+d+e==3 || !a&&b+c+d+e!=3) &&
                            (b&&a+c+d+e==0 || !b&&a+c+d+e!=0) &&
                            (c&&a+b+d+e==1 || !c&&a+b+d+e!=1) &&
                            (d&&a+b+c+e==4 || !d&&a+b+c+e!=4)
                        )
                        {
                            printf("A额头上的贴纸是%s色的.\n",a?"白":"黑");
                            printf("B额头上的贴纸是%s色的.\n",b?"白":"黑");
                            printf("C额头上的贴纸是%s色的.\n",c?"白":"黑");
                            printf("D额头上的贴纸是%s色的.\n",d?"白":"黑");
                            printf("E额头上的贴纸是%s色的.\n",e?"白":"黑");
                        }
    return 0;
}