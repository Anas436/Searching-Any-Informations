#include<stdio.h>


// Student Informations.
void Anas()
{
    printf("\n Name: Md. Anas Mondol\n Gender: Male\n ID: 1935202011\n Student Types: Regular\n Math Marks: 16\n");
}
void Anika() // Function Declare.
{
   printf("\n Name: Anika Jahan\n Gender: Female\n ID: 1935202012\n Student Types: Regular\n Math Marks: 18\n");
}
void Jahid()
{
   printf("\n Name: Md. Jahid Hasanl\n Gender: Male\n ID: 1935202003\n Student Types: Regular\n Math Marks: 16\n");
}
void Miraz()
{
   printf("\n Name: Mahady Hasan Miraz\n Gender: Male\n ID: 1935202037\n Student Types: Regular\n Math Marks: 18\n");
}
void Hasna()
{
   printf("\n Name: Hsna Hena\n Gender: Female\n ID: 1935202053\n Student Types: Regular\n Math Marks: 17\n");
}
void Rakib()
{
   printf("\n Name: Md. Rakib Mia\n Gender: Male\n ID: 1935202029\n Student Types: Regular\n Math Marks: 18\n");
}

void main() // Main Function.

{
    int x; // Data Types.

    // Input and Output.
    printf(" ::::: Welcome to City University of Bangladesh :::::\n");
    printf("\n Welcome to My Mini Project of CSE Dept. in 52th-(A) Batch.\n");
    printf("\n Please Enter your Identity Number of Last Four Digits: ");
    scanf("%d",&x);

    // Base Conditions.
    if(x==2011)
    {
        Anas(); // Funion Call.
    }
    else if(x==2012)
    {
        Anika();
    }
    else if(x==2003)
    {
       Jahid();
    }
    else if(x==2037)
    {
        Miraz();
    }
    else if(x==2053)
    {
        Hasna();
    }
    else if(x==2029)
    {
        Rakib();
    }
    else
    {
        printf("\n Error ! Please try again.\n");
    }

}
