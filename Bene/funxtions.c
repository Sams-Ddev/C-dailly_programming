#include <stdio.h>

//main function---------------------------------------
int main()
{
    /*call the function func_print()*/
    //func_print();
    //crint1to10();
    Age();
    return 0;
}

//first funcyion****************************************
int func_print()
{
    printf("Hey am Bene, 😎😎😎😎\n");
}

//third function - prints from 1 to 10+++++++++++++++++++++
int crint1to10()
{
    int i;
    for (i = 1; i <= 10; ++i)
   {
        printf("%d\n", i);
    }
}

//scanf//////////////////////////////////////////////////
int Age()
{
    int date;
    printf("Please enter your age: \n");
    scanf("%d", &date);
    if (date < 0)
    {
        printf("bro, thats a negative real age");
    }
    else if (date = 0)
    {
        printf("You are small baby please");
    }
    else (date > 0);
    {
        printf("you country thanks you for ya service");
    }
}
