#include<stdio.h>
int main()
{
    int n,m,sum,i;
    n=0;
    m=0;
    char option , select;
    printf("\t\t\tMultiple Choice Questions");
    printf("\n READ THE INSTRUCTION VERY CAREFULLY");
    printf("\n You can only one attempt");
    printf("\n This exam is consist of 5 questions only");
    printf("\n You have gven 4 marks for right question and -1 for wrong question");
    printf("\nAre you ready!!!");

    for ( int i = 1; i <=3; i++)
    {
        if (i==2||i==3)
        {
            printf("\n ARE YOU READY TO TRY AGAIN :");
        }
        scanf("%c",&option);
        if (option=='y');
        {
            printf("Starts the test now");
            //QUESTION-1;
            printf("\nQ1Who is invented c programming language?");
            printf("\n(a)dennis rithie");
            printf("\n(b)Guido van Rossum");
            printf("\n(c)James Gosling");
            printf("\n(d)Tim Berners-Lee");

            printf("\n\nWrite answer: ");
            scanf(" %c",&select);

                if (select=='a')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }
            //QUESTION-2;
            printf("\nQ2-All keywords in c?");
            printf("\n(a)Upper case letters");
            printf("\n(b)lower case letters");
            printf("\n(c)Camel case letters");
            printf("\n(d)None of these ");

            printf("\n \n write answer:");
            scanf("%c",&select);

            if (select=='b')
            {
                printf("\nThis is right answer");
                n++;
            }
            else
            {
                printf("\nThis is wrong answer");
                m++;
            }
            //question-3
            printf("\nQ3-Which of the following cannot be a variable name in c? ");
            printf("\n(a)True");
            printf("\n(b)friend");
            printf("\n(c)Import");
            printf("\n(d)volatile"); 
            printf("\n write answer:");
            scanf("%c",&select);
            if(select=='d')
            {
                printf("\nThis is right answer");
                n++;
            }
            else 
            {
                printf("\nThis is wrong answer");
                m++;
            }
            //question-4; 
             printf("\n\nQ4- C is a ________ programming language. ");
                printf("\n(a) Procedural");
                printf("\n(b) Object Oriented");
                printf("\n(c) Structural ");
                printf("\n(d) Machine Dependent ");
                printf("\n\nWrite answer: ");
                scanf(" %c",&select);

                if (select=='a')
                {
                    printf("\nThis is right answer");
                    n++;
                }
                else
                {
                    printf("\nThis is wrong answer");
                    m++;
                }
            //Question-5
            printf("\n Q5-What is an example of iteration in C?");
            printf("\n(a)for");
            printf("\n(b)while");
            printf("\n(c)do while");
            printf("\n(d) all of these");
            printf("\n write answer:");
            scanf("%c",&select);
            if (select=='d')
            {
                printf("\nThis is right answer");
                n++;
            }
            else
            {
                printf("\nThis is wrong answer");
                m++;
            }
                sum = (4*n)-m;
                printf("\n\nYour total score is %d",sum);

                if (sum>=20)
                  printf("\n\nYou are qualify for the next round");
                else
                  printf("\n\nSorry, better luck next time\n\n");
            }
         
            //else
                 printf("\n\nYou are not interested to do next round");
    }
    
            //else
                printf("\n\nSorry, try next time");
    return 0;
}
