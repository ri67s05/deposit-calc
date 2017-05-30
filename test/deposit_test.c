#include "../thirdparty/ctest.h"
#include <stdio.h>
#include "../src/deposit.h"

CTEST(suite1, test1)
{
    const int real = 81000;
    printf("Для штрафа 10 процентов и вклада до 100000");
    int data = 10;
    int vklad = 90000; 
  	int result = proc_proc_proc(data, vklad);
  	ASSERT_EQUAL(real, result);
    
}

CTEST(suite1, test2)
{
    const int real = 360000;
    printf("Для штрафа 10 процентов и штрафа от 100000");
    int data = 20;
    int vklad = 400000;
    int result = proc_proc_proc(data, vklad);
    ASSERT_EQUAL(real, result);
}

CTEST(suite2, test1)
{
    const int real = 81600;
    printf("Для увеличения на 2 процента:");
    int data = 40;
    int vklad = 80000;
    int result = proc_proc_proc(data, vklad);
    ASSERT_EQUAL(real, result);
}

CTEST(suite2, test2)
{
    const int real = 927000;
    printf("Для увеличения на 3 процента:");
    int data = 50;
    int vklad = 900000;
    int result = proc_proc_proc(data, vklad);
    ASSERT_EQUAL(real, result);
}

CTEST(suite3, test1)
{
    const int real = 74200;
    printf("Для увеличения на 6 процента");
    int data = 122;
    int vklad = 70000;
    int result = proc_proc_proc(data, vklad);
    ASSERT_EQUAL(real, result);
}

CTEST(suite3, test2)
{
    const int real = 756000;
    printf("Для увеличения на 8 процентов");
    int data = 135;
    int vklad = 700000;
    int result = proc_proc_proc(data, vklad);
    ASSERT_EQUAL(real, result);
}
CTEST(suite4, test1)
{
    const int real = 98560;
    printf("Для величения на 12 процентов");
    int data = 340;
    int vklad = 88000;
    int result = proc_proc_proc(data, vklad);
    ASSERT_EQUAL(real, result);
}
CTEST(suite4, test2)
{
    const int real = 690000;
    printf("Для увеличения на 15 процентов");
    int data = 300;
    int vklad = 600000;
    int result = proc_proc_proc(data, vklad);
    ASSERT_EQUAL(real, result);
}