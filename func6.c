#include "headers6.h"
/***************************main****************************/
void choose_service(int t)
{
    if (t==exception_number)
        user ();
    else if(t==calculator_or_cinema_tickets)
        user_pick();
    else if(t==powers)
        power();
    else if (t==seq_stars)
        seq_star();
    else if (t==stars)
        stars_p();
    else if (t==swap_vari)
        swap_var();
    else if (t==swap_arrays)
         swap_var_arr ();
    else if(t==flip_array)
        swap_var_arr ();
    else if(t==array_entry)
        Array_Entry();
    else if (t==battery_statement)
        battery_low();

    else if (t==Fibonacci_series_program)
        input_Fibonacci ();
    else
        printf("\n Error \n");
}
/******************************PART ONE***********************************************************************/
/*************task 1*************/
void user ()
{
    int num,skip;
    int *ptn,*pts;
    ptn = &num;
    pts = &skip;

    printf("\n Please enter the number\n ");
    scanf("%i",&num);
    printf("\n please enter the skipped number\n");
    scanf("%i",&skip);

    except(ptn,pts);
}


void except(int *num , int *skip)
{
    for (int i=zero;i<=*num;i++)
    {

        if (i == *skip)
        {
            i++;
        }
        printf("\n num = %i \n",i);
    }

}
/***************task 2********************/
void user_pick()
{
    int user_pick;
    printf("\n Please choose between 1-calculator 2-cinema ticket \n ");
    scanf("%i",&user_pick);


    if (user_pick == calculator)
    {
        calculator_func();
    }
    else if (user_pick == cinema)
    {
        cinema_func();
    }
}
void calculator_func()
{
    int num1,num2,op;
    printf("\n Please enter 1st  num  \n ");
    scanf("%i",&num1);
    printf("\n Please enter 2nd num  \n ");
    scanf("%i",&num2);
    printf("\n Please choose the operation 1/add 2/sub 3/mul \n ");
    scanf("%i",&op);
    if (op == add )
    {
        printf("\n add=%i \n ",num1+num2);
    }
    else if (op == sub)
    {
        printf("\n sub=%i \n ",num1-num2);
    }
    else if (op == mul)
    {
     printf("\n mul=%i \n ",num1*num2);
    }

}
void cinema_func()
{
    int ticket;
    printf("\n  choose your ticket 1/normal 2/vip 3/vip + popcorn \n ");
    scanf("%i",&ticket);
    if(ticket == normal)
    {
         printf("\n you choose  ticket 1/normal , 50LE \n ");
    }
    else if (ticket == vip)
    {
         printf("\n you  choose ticket  2/vip  \n ");
    }
    else if (ticket == vvip )
    {
         printf("\n you  choose  ticket  3/vvip --> vip + popcorn \n ");
    }
}
/***********task 3**************************/
void advanced_calculator()
{
    int user_p;
    printf("\n  choose between exception program and calculator and cinema tickets  \n ");
    scanf("%i",&user_p);
    if(user_p == exception)
    {
       user();
    }
    else if (user_p == calculators)
    {
        calculator_func();
    }
    else if (user_p == cinema_tickets)
    {
        cinema_func();
    }
}
/*****************task 4************************/
void power()
{
    int num,power=1;
    printf("\n enter the num \n ");
    scanf("%i",&num);
    for (int i=zero ; i< num ; i++)
    {
        power = power*num;
    }

    printf("\n power of %i = %i  \n ",num , power);

}
/**************task 5**********************/
void seq_star()
{
    int num_line;
    printf("\n Please Enter the number of lines \n ");
    scanf("%i",&num_line);
    for(int i=zero;i<num_line;i++)
    {
        for(int j=zero;j<=i;j++)
        {
            printf("*");
        }
       printf("\n");
    }
}
/**********************task 6***************/
void stars_p()
{
    int line,star,space;
    printf("\n Please Enter the number of lines \n ");
    scanf("%i",&line);

    for (int i=one;i<=line;i++)
    {
        star = stars_equ;
        space = spaces_equ;
        for(int j=zero;j<space;j++)
        {
            printf(" ");
        }
        for(int k=zero;k<star;k++)
        {
            printf("*");
        }

        printf("\n");

    }
}
/******************************PART TWO***********************************************************************************/
/****************task 1********************/
void swap_var ()
{
    int x,y,*ptx,*pty,plate,*ptp;
    ptx = &x;
    pty = &y;
    ptp = &plate;

    printf("\n enter 1st num x \n");
    scanf("%i",&x);
    printf("\n enter 2nd num  y\n");
    scanf("%i",&y);

    *ptp = *ptx;
    *ptx = *pty;
    *pty = *ptp;

    printf("\n x= %i \n",x);
    printf("\n  y= %i \n",y);
}

/**************task 2*********/
void swap_var_arr ()
{
   insert_arrays ();
}
 void insert_arrays ()
    {
    int a[size]={zero};
   int b[size] = {zero};
    int *pti,*ptj,user;
    pti = a;
    ptj = b;
    printf("please enter 1st array  a \n");
    for (int i =zero ; i<=size-1 ; i++)
    {
        scanf("%i",pti);
        pti++;
    }
    printf("please enter 2nd array  b \n");
    for (int d =zero ; d<=size-1 ; d++)
    {
        scanf("%i",ptj);
        ptj++;
    }
    printf("\n choose between 1 swap 2 flip array a 3 flip array b\n");
    scanf("%i",&user);
   if (user==swap)
   {
       swap_a(a,b);
   }
   else if (user==flipa)
   {
     flip_arr (a);
   }
   else if (user==flipb)
   {
     flip_arr (b);
   }
}
void swap_a(int *a , int *b)
{
   int *pti,*ptj;
   pti=a;
   ptj=b;
   int plate;
   for(int w=zero;w<size;w++)
    {
    plate = *(a+w);
   *(a+w) = *(b+w);
   *(b+w)= plate;
   }
   for (int i =zero ; i<=size-1 ; i++)
    {
      printf(" a = %i \n",pti[i]);
    }
    for (int f =zero ; f<=size-1 ; f++)
    {
      printf(" b = %i \n",ptj[f]);
    }
}
/************task 3***********//*error*/
void flip_arr (int *a)
{
   int plate=zero;
   int *ptrs,*ptre;
   ptrs = a;
   ptre = a+size-1;

   for (int i=zero ; i<(size/2) ; i++)
    {

     plate = *ptrs;
    *ptrs = *ptre;
    *ptre = plate;

    printf(" a = %i \n",*(a+i));

    ptre--;
    ptrs++;



    }
}
/****************task 4*************/
void three_tasks()
{
  insert_arrays ();
}
/**********************task 5*************/

void Array_Entry()
{
    int a[size]={zero};
    int *pti;
    pti = a;
    printf("\n enter the array \n ");
    for (int i =zero ; i<=size-1 ; i++)
    {
        scanf("%i",pti);
        pti++;
    }

    pti=a;
     for (int i =zero ; i<=size-1 ; i++)
    {

      printf("%i \n",pti[i]);
    }
}
/********************task 6-7-8 is repeated ***********************/
/********************task 9 ***********************/
void battery_low()
{
   int state;
   printf("\n enter the battery curent value  \n");
   scanf("%i",&state);

   if(state==remove_the_battery)
   {
      printf("\n  Remove the battery  \n");
   }
   else if (state>=motafagera_hazeena)
   {
       printf("\n  Motafagera Hazeena  \n");
   }
   else if(state>zero || state < min_battery)
   {
       printf("\n  Battery is low \n");
   }

}

/*****************************Fibonacci series program**********************/
void input_Fibonacci ()
{

   /* int n, i, j;

    printf("\n Fibonacci series program \n");
    printf("\n Enter a number: \n");
    scanf("%d",&n);

    printf("\n Fibonacci series: \n");
    j = zero;
    for ( i = one ; i <= n ; i++ )
    {
        printf("%d ", fibonacci(j));
        j++;
    }*/

//with pointer
    int n ;
    int *fib;
    printf("\n Fibonacci series program \n");
    printf("\n Enter a number: \n");
    scanf("%i",&n);
    //can implm user input if want


    //calling
    fibonacci(fib,n);

}
void fibonacci (int * fibArr,int numberOfSeries)
{
//with pointer
    int n;

    //allocate memory size
    fibArr = malloc (sizeof(int) * numberOfSeries);
    //first val, fib = 0
    *fibArr = zero;//100
    fibArr++;
    //second val, fib = 1
    *fibArr = one;//104
    fibArr++;

    //printing first two fib values 0 and 1
    printf("%i\n%i\n", *(fibArr- two),*(fibArr- one));

    //loop for fib arr
    for(n=one;n<numberOfSeries -two;n++,fibArr++){
        //108 looking back at 104 looking back at 100
        //112 looking back at 108 looking back at 104
        *fibArr = *(fibArr-one) + *(fibArr -two);
        //printing fib arr
        printf("%i\n", *fibArr);
    }

}
