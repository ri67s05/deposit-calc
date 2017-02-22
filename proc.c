#include<stdio.h>

int main()
{
int day,vklad,doxod,a,b,c;
    printf("Введите размер вашего вклада(в рублях): ");
    scanf("%d",&vklad);
    printf("Введите срок вашего вклада (не более 365 дней): ");
    scanf("%d",&day);
	if (vklad>=10000 && day<=365)
    {
        if (vklad<100000) {
            if (day<=30)
            {
                a = vklad*0.1;
                doxod = vklad-a;
            } else if (day>30 && day<=120)
            {
                a = vklad*0.02;
                doxod=vklad+a;
             } else {
                    if (day>120 && day<=240)
                    {
                        a=vklad*0.06;
                        doxod=vklad+a;
                    } else {
                         if (day>240 && day<=365)
                         {
                            a=vklad*0.12;
                            doxod=vklad+a;
                         }
                    }
              }
        } else {
            if (day<=30)
            {
                a = vklad*0.1;
                doxod = vklad-a;
            } else {
                if (day>30 && day<=120)
                {
                    a = vklad*0.03;
                    doxod=vklad+a;
                } else {
                    if (day>120 && day<=240)
                    {
                        a=vklad*0.08;
                        doxod=vklad+a;
                    } else {
                         if (day>240 && day<=365)
                         {
                            a=vklad*0.15;
                            doxod=vklad+a;
                         }
                    }
                }
            }
        }
    }
    printf ("Ваш доход будет составлять: %d", doxod);
                            
}