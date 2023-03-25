
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

    int ch,i,j,k,x;
    int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
    int veg=60,potato=50,paneer=80,singh=100,fried=120,chicken=140,amritsari=220,udhta=120,combo_1=180,combo_2=270;
    int total,total_1=0,total_2=0,total_3=0,total_4=0,total_5=0,total_6=0,total_7=0,total_8=0,total_9=0,total_10=0;


void menu()
{
    printf("  ______________________________________________________________________________________________________________________\n");

    printf("                                      |       -WELCOME TO BURGER SINGH-      | \n");
    printf("                                      | --FOR THE LOVE OF DILICIOUS BURGERS--|\n");
    printf("  ______________________________________________________________________________________________________________________\n");

    printf("                         ::MENU : VEG::                                  ::MENU : NON-VEG::\n\n");
    printf("                      dish                price           |                 dish                price\n\n");
    printf("                  1 : Veg snacker          60/-           |        5 : Fried chicken crunch       120/-\n");
    printf("                  2 : Potato crunch        50/-           |        6 : chicken snacker            140/-\n");
    printf("                  3 : Paneer crisp         80/-           |        7 : amritsari  murgh makhni    220/-\n");
    printf("                  4 : Singh crunchy       100/-           |        8 : udhta punjab               120/-\n\n\n");

printf("                                                     *SPECIAL COMBO*\n\n");
printf("                   9  : VEG     :         Veg snacker + Paneer Crisp + Fries + Coke(1.ltr)          180/-\n");
printf("                  10  : NON VEG :         chicken snacker + udhta punjab + Fries + Coke(1.ltr)      270/-\n\n");
printf("  ______________________________________________________________________________________________________________________\n");
}
void bill()
{
  total=total_1+total_2+total_3+total_4+total_5+total_6+total_7+total_8+total_9+total_10;
printf("\n::Total amount => %d",total);
printf("\n :Paid => ");
scanf("%d",&j);
        printf("____________________________________________\n");

if(j==total)
{
 goto greet;
}
else if(j>total)
{
    printf(" :: Returned = %d\n",j-total);
    goto greet;
}
else if(j<total)
    {
        x=total-j;
 remain : printf("\n:: Please pay remain amount = %d",x);
          printf("\n : Paid => ");
          scanf("%d",&k);
          printf("____________________________________________\n");
    }
if(k==x)
      {
      goto greet;
      }
if(k>x)
          {
       printf("\n:: Returned : %d/-rs",k-x);
          }
    else
      {
          x-=k;
          goto remain;
      }
        if(x==0)
        {
goto greet;
        }

greet :
printf("\n:: THANK YOU SO MUCH ! ::\n");
        printf("____________________________________________\n");
}

int main()
{
  menu();
  again :

    printf("\n:: Enter your choice => ");
    scanf("%d",&ch);
    printf("____________________________________________\n");
if(ch==0||ch>10)
{
    printf(":: Enter valid choice");
    goto again;
}
    if(ch==1)
    {
        printf("\n:: You have selected =>  veg snacker ~ 60/-\n");
        printf("  :: How many plates => ");
        scanf("%d",&p1);
        printf("    ::Your bill is = %d/- \n",p1*veg);
        printf("____________________________________________\n");
        total_1+=p1*veg;
        printf("\n::Anything else ?\n");
        printf(" ::Press 1 for yes 0 for no => ");
        scanf("%d",&i);
if(i==1)
{
     menu();
     goto again;
}
    }
if(ch==2)
    {
         printf("\n:: You have selected =>  potato crunch ~ 50/-\n");
         printf(" :: How many plates => ");
         scanf("%d",&p2);
         printf("  :: Your bill is => %d/-\n",p2*potato);
         printf("____________________________________________\n");
         total_2+=p2*potato;
         printf("\n::Anything else ?\n");
         printf(" :: Press '1' for yes and '0' for no => ");
         scanf("%d",&i);
if(i==1)
{
    menu();
    goto again;
}
    }
if(ch==3)
    {
         printf("\n:: You have selected => paneer crisp ~ 80/-\n");
         printf(" :: How many plates => ");
         scanf("%d",&p3);
         printf("  :: Your bill is => %d/-\n",p3*paneer);
         printf("____________________________________________\n");
         total_3+=p3*paneer;
         printf("\n\n::anything else ?\n");
         printf(" :: Press '1' for yes and '0' for no => ");
         scanf("%d",&i);
if(i==1)
{
     menu();
     goto again;

}
    }
if(ch==4)
    {
         printf("\n:: You have selected => singh crunchy ~ 100/-\n");
         printf(" :: How many plates => ");
         scanf("%d",&p4);
         printf("  :: Your bill is => %d/-\n",p4*singh);
         printf("____________________________________________\n");
         total_4+=p4*singh;
         printf("\n::Anything else ?\n");
         printf(" : Press '1' for yes and '0' for no => ");
         scanf("%d",&i);
if(i==1)
{
     menu();
     goto again;
}
    }
if(ch==5)
    {
        printf("\n:: You have selected =>  fried chicken crunch ~ 120/-\n");
        printf(" :: How many plates => ");
        scanf("%d",&p5);

        printf("  ::Your bill is = %d/- \n",p5*fried);
        printf("____________________________________________\n");
        total_5+=p5*fried;
        printf("\n::Anything else ?\n");
        printf("    : Press 1 for yes 0 for no => ");
        scanf("%d",&i);
if(i==1)
{
     menu();
     goto again;
}
    }
if(ch==6)
    {
         printf("\n :: You have selected =>  chicken snacker ~ 140/-\n");
         printf("  :: How many plates => ");
         scanf("%d",&p6);
         printf("   :: Your bill is => %d/-\n",p6*chicken);
         printf("____________________________________________\n");
         total_6+=p6*chicken;
         printf("\n::Anything else ?\n");
         printf(" : Press '1' for yes and '0' for no => ");
         scanf("%d",&i);
if(i==1)
{
     menu();
     goto again;
}
    }
if(ch==7)
    {
        printf("\n:: You have selected => amritsari murgh makhni ~ 220/-\n");
        printf(" :: How many plates => ");
        scanf("%d",&p7);
        printf("  :: Your bill is => %d/-\n",p7*amritsari);
        printf("____________________________________________\n");
             total_7+=p7*amritsari;
        printf("\n\n::Anything else ?\n");
        printf(" : Press '1' for yes and '0' for no => ");
        scanf("%d",&i);
if(i==1)
{
     menu();
     goto again;
}
    }
if(ch==8)
    {
         printf("\n:: You have selected => udhta punjab ~ 120/-\n");
         printf(" :: How many plates => ");
         scanf("%d",&p8);
         printf("  :: Your bill is => %d/-\n",p8*udhta);
         printf("____________________________________________\n");
         total_8+=p8*udhta;
         printf("\n::Anything else ?\n");
         printf(" : Press '1' for yes and '0' for no => ");
         scanf("%d",&i);
if(i==1)
{
     menu();
     goto again;
}
    }
if(ch==9)
    {
         printf("\n:: You have selected => combo 1 ~ 180/-\n");
         printf(" :: Including=> veg snacker + paneer crisp + fries + coke(1 litre)\n");
         printf("  :: How many plates => ");
         scanf("%d",&p9);
         printf("   :: Your bill is => %d/-\n",p9*combo_1);
         printf("____________________________________________\n");
         total_9+=p9*combo_1;
         printf("\n::Anything else ?\n");
         printf(" : Press '1' for yes and '0' for no => ");
         scanf("%d",&i);
 if(i==1)
{
     menu();
     goto again;
}
    }
if(ch==10)
    {
         printf("\n:: You have selected => combo 2 ~ 270/-\n");
         printf(" :: Including = chicken snacker + udhta punjab + fries + coke(1 litre)\n");
         printf("  :: How many plates => ");
         scanf("%d",&p10);
         printf("   :: Your bill is => %d/-\n",p10*combo_2);
         printf("____________________________________________\n");
         total_10+=p10*combo_2;
         printf("\n::Anything else ?\n");
         printf(" : Press '1' for yes and '0' for no => ");
         scanf("%d",&i);
if(i==1)
{
     menu();
     goto again;
}
    }
     bill();
return 0;
}
