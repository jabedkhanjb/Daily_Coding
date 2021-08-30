#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1;a<=3;a++){
        for(b=1;b<=3 && b !=a;b++){
            for(c=1;c<=3 && c !=a && c !=b  ;c++){
    //one loop inside another loop called by nested loop

              printf("%d, %d, %d\n",a,b,c);
            }
          }
        }
    printf("\n\nSO we messed up. we have to clarify more.\n");
    printf("we have to add some if condition in each loop to get the exact output what we actually want.\n\n");

    int d,e,f;
    for (d=1;d<=3;d++){
        for (e=1;e<=3;e++){
            if(e!=d){
                for (f=1;f<=3;f++){
                    if(f!=e && f!=c){
                        printf("%d %d %d\n",d,e,f);
                    }
                }

            }
        }
    }
    return 0;
}
