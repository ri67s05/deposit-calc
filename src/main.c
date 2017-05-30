#include "deposit.h"

int main()
{
    int date, vklad;

    printf("Введите срок вклада:");
    scanf("%d", &date);
    printf("Введите сумму вклада:");
    scanf("%d", &vklad);
	
	if (date_date_date(date) == 0){
		printf("Ошибка в днях");
	}
	if (vklad_vklad_vklad(vklad) == 0){
		printf("Ошибка в сумме вклада");
	}
    if ((date_date_date(date) == 1) && (vklad_vklad_vklad(vklad) == 1)){
        printf("Корректно :)\n");
        vklad = proc_proc_proc(date, vklad);
        printf("Cумма вклада:%d",vklad );
    } 

    return 0;
}
