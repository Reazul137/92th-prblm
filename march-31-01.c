#include<stdio.h>
int main()
{
    int m, p, c, t, mp;

    printf("Eligibility criteria : ");

    printf("Marks in MAT >=65\n");
    printf("Marks in PHY >=55\n");
    printf("Marks in CHE >=50\n");
    printf("Marks in total in three subjects >=180");
    printf("Marks in math and physics subjects >=140");
    printf("----------------------------------------");

    printf("Input marks obtained in physics : ");
    scanf("%d",&p);

    printf("Input marks obtained in chemistry : ");
    scanf("%d",&c);

    printf("input marks obtained in math : ");
    scanf("%d",&m);

    printf("Total marks of math+physics+chemistry : %d\n",m+p+c);
    printf("Total marks of math+physics : %d\n",m+p);

    if(m >= 65)
        if(p >= 55)
            if(c >= 50)
                if((m+p+c) >= 180 || (m+p) >= 140)
                    printf("The candidate is eligible for admission");
                else
                    printf("The candidate is not eligible for admission");
            else
                printf("The candidate is not eligible for admission");
        else
            printf("The candidate is not eligible for admission");
    else
        printf("The candidate is not eligible for admission");

    return 0;
}
