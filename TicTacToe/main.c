#include <stdio.h>
#include <stdlib.h>
char arr[]={'0','1','2','3','4','5','6','7','8'};
void computerEvilBrain()
{
    if(((arr[1]=='O'&&arr[2]=='O')||(arr[4]=='O'&&arr[8]=='0')||(arr[3]=='O'&&arr[6]=='O'))&&arr[0]!='X')
        arr[0]='O';
    else
    if(((arr[0]=='O'&&arr[2]=='O')||(arr[4]=='O'&&arr[7]=='O'))&&arr[1]!='X')
        arr[1]='O';
    else
    if(((arr[0]=='O'&&arr[1]=='O')||(arr[4]=='O'&&arr[6]=='O')||(arr[5]=='O'&&arr[8]=='O'))&&arr[2]!='X')
        arr[2]='O';
    else
    if(((arr[0]=='O'&&arr[6]=='O')||(arr[4]=='O'&&arr[5]=='O'))&&arr[3]!='X')
        arr[3]='O';
    else
    if(((arr[0]=='O'&&arr[8]=='O')||(arr[1]=='O'&&arr[7]=='O')&&(arr[2]=='O'&&arr[6]=='O')||(arr[3]=='O'&&arr[5]=='O'))&&arr[4]!='X')
        arr[4]='O';
    else
    if(((arr[2]=='O'&&arr[8]=='O')||(arr[3]=='O'&&arr[4]=='O'))&&arr[5]!='X')
        arr[5]='O';
    else
    if(((arr[0]=='O'&&arr[3]=='O')||(arr[2]=='O'&&arr[4]=='O')||(arr[7]=='O'&&arr[8]=='O'))&&arr[6]!='X')
        arr[6]='O';
    else
    if(((arr[1]=='O'&&arr[4]=='O')||(arr[6]=='O'&&arr[8]=='O'))&&arr[7]!='X')
        arr[7]='O';
    else
    if(((arr[0]=='O'&&arr[4]=='O')||(arr[2]=='O'&&arr[5]=='O')||(arr[6]=='O'&&arr[7]=='O'))&&arr[8]!='X')
        arr[8]='O';
    else
    {
        if(((arr[1]=='X'&&arr[2]=='X')||(arr[4]=='X'&&arr[8]=='X')||(arr[3]=='X'&&arr[6]=='X'))&&arr[0]!='O')
            arr[0]='O';
        if(((arr[0]=='X'&&arr[2]=='X')||(arr[4]=='X'&&arr[7]=='X'))&&arr[1]!='O')
            arr[1]='O';
        if(((arr[0]=='X'&&arr[1]=='X')||(arr[4]=='X'&&arr[6]=='X')||(arr[5]=='X'&&arr[8]=='X'))&&arr[2]!='O')
            arr[2]='O';
        if(((arr[0]=='X'&&arr[6]=='X')||(arr[4]=='X'&&arr[5]=='X'))&&arr[3]!='O')
            arr[3]='O';
        if(((arr[0]=='X'&&arr[8]=='X')||(arr[1]=='X'&&arr[7]=='X')&&(arr[2]=='X'&&arr[6]=='X')||(arr[3]=='X'&&arr[5]=='X'))&&arr[4]!='O')
            arr[4]='O';
        if(((arr[2]=='X'&&arr[8]=='X')||(arr[3]=='X'&&arr[4]=='X'))&&arr[5]!='O')
            arr[5]='O';
        if(((arr[0]=='X'&&arr[3]=='X')||(arr[2]=='X'&&arr[4]=='X')||(arr[7]=='X'&&arr[8]=='X'))&&arr[6]!='O')
            arr[6]='O';
        if(((arr[1]=='X'&&arr[4]=='X')||(arr[6]=='X'&&arr[8]=='X'))&&arr[7]!='O')
            arr[7]='O';
        if(((arr[0]=='X'&&arr[4]=='X')||(arr[2]=='X'&&arr[5]=='X')||(arr[6]=='X'&&arr[7]=='X'))&&arr[8]!='O')
            arr[8]='O';
        else
        {
            int i;
            start:
            srand(time(NULL));
            i = rand() % 8;
            if(arr[i]!='X'&&arr[i]!='O')
                arr[i]='O';
            else
                goto start;
        }
    }

}
void computerBrain()
{
    if(((arr[1]=='O'&&arr[2]=='O')||(arr[4]=='O'&&arr[8]=='0')||(arr[3]=='O'&&arr[6]=='O'))&&arr[0]!='X')
        arr[0]='O';
    else
    if(((arr[0]=='O'&&arr[2]=='O')||(arr[4]=='O'&&arr[7]=='O'))&&arr[1]!='X')
        arr[1]='O';
    else
    if(((arr[0]=='O'&&arr[1]=='O')||(arr[4]=='O'&&arr[6]=='O')||(arr[5]=='O'&&arr[8]=='O'))&&arr[2]!='X')
        arr[2]='O';
    else
    if(((arr[0]=='O'&&arr[6]=='O')||(arr[4]=='O'&&arr[5]=='O'))&&arr[3]!='X')
        arr[3]='O';
    else
    if(((arr[0]=='O'&&arr[8]=='O')||(arr[1]=='O'&&arr[7]=='O')&&(arr[2]=='O'&&arr[6]=='O')||(arr[3]=='O'&&arr[5]=='O'))&&arr[4]!='X')
        arr[4]='O';
    else
    if(((arr[2]=='O'&&arr[8]=='O')||(arr[3]=='O'&&arr[4]=='O'))&&arr[5]!='X')
        arr[5]='O';
    else
    if(((arr[0]=='O'&&arr[3]=='O')||(arr[2]=='O'&&arr[4]=='O')||(arr[7]=='O'&&arr[8]=='O'))&&arr[6]!='X')
        arr[6]='O';
    else
    if(((arr[1]=='O'&&arr[4]=='O')||(arr[6]=='O'&&arr[8]=='O'))&&arr[7]!='X')
        arr[7]='O';
    else
    if(((arr[0]=='O'&&arr[4]=='O')||(arr[2]=='O'&&arr[5]=='O')||(arr[6]=='O'&&arr[7]=='O'))&&arr[8]!='X')
        arr[8]='O';
    else

        if(((arr[1]=='X'&&arr[2]=='X')||(arr[4]=='X'&&arr[8]=='X')||(arr[3]=='X'&&arr[6]=='X'))&&arr[0]!='O')
            arr[0]='O';
        else
        if(((arr[0]=='X'&&arr[2]=='X')||(arr[4]=='X'&&arr[7]=='X'))&&arr[1]!='O')
            arr[1]='O';
        else
        if(((arr[0]=='X'&&arr[1]=='X')||(arr[4]=='X'&&arr[6]=='X')||(arr[5]=='X'&&arr[8]=='X'))&&arr[2]!='O')
            arr[2]='O';
        else
        if(((arr[0]=='X'&&arr[6]=='X')||(arr[4]=='X'&&arr[5]=='X'))&&arr[3]!='O')
            arr[3]='O';
        else
        if(((arr[0]=='X'&&arr[8]=='X')||(arr[1]=='X'&&arr[7]=='X')&&(arr[2]=='X'&&arr[6]=='X')||(arr[3]=='X'&&arr[5]=='X'))&&arr[4]!='O')
            arr[4]='O';
        else
        if(((arr[2]=='X'&&arr[8]=='X')||(arr[3]=='X'&&arr[4]=='X'))&&arr[5]!='O')
            arr[5]='O';
        else
        if(((arr[0]=='X'&&arr[3]=='X')||(arr[2]=='X'&&arr[4]=='X')||(arr[7]=='X'&&arr[8]=='X'))&&arr[6]!='O')
            arr[6]='O';
        else
        if(((arr[1]=='X'&&arr[4]=='X')||(arr[6]=='X'&&arr[8]=='X'))&&arr[7]!='O')
            arr[7]='O';
        else
        if(((arr[0]=='X'&&arr[4]=='X')||(arr[2]=='X'&&arr[5]=='X')||(arr[6]=='X'&&arr[7]=='X'))&&arr[8]!='O')
            arr[8]='O';
        else
        {
            int i;
            start:
            srand(time(NULL));
            i = rand() % 8;
            printf("%d",i);
            if(arr[i]!='X'&&arr[i]!='O')
                arr[i]='O';
            else
                goto start;
        }


}
void displayTable()
{
    system("cls");
    printf("################# Tic Tac Toe #################\n\n");

    printf("First player X\n");
    printf("Second player O\n\n");
    for(int i=0;i<9;i++)
    {
        printf("\t%c",arr[i]);
        if(i==0||i==1||i==3||i==4||i==6||i==7)
        {
            printf("\t|");
        }
        if(i==2||i==5)
            printf("\n-------------------------------------------\n");

        if(((i+1)%3)==0)
            printf("\n");
    }
    printf("\n\n###############################################");
}
int gameWin()
{
    if((arr[0]=='X'&&arr[1]=='X'&&arr[2]=='X')||
       (arr[0]=='X'&&arr[4]=='X'&&arr[8]=='X')||
       (arr[0]=='X'&&arr[3]=='X'&&arr[6]=='X')||
       (arr[1]=='X'&&arr[4]=='X'&&arr[7]=='X')||
       (arr[2]=='X'&&arr[4]=='X'&&arr[6]=='X')||
       (arr[2]=='X'&&arr[5]=='X'&&arr[8]=='X')||
       (arr[3]=='X'&&arr[4]=='X'&&arr[5]=='X')||
       (arr[6]=='X'&&arr[7]=='X'&&arr[8]=='X'))
        return 1;

    if((arr[0]=='O'&&arr[1]=='O'&&arr[2]=='O')||
       (arr[0]=='O'&&arr[4]=='O'&&arr[8]=='O')||
       (arr[0]=='O'&&arr[3]=='O'&&arr[6]=='O')||
       (arr[1]=='O'&&arr[4]=='O'&&arr[7]=='O')||
       (arr[2]=='O'&&arr[4]=='O'&&arr[6]=='O')||
       (arr[2]=='O'&&arr[5]=='O'&&arr[8]=='O')||
       (arr[3]=='O'&&arr[4]=='O'&&arr[5]=='O')||
       (arr[6]=='O'&&arr[7]=='O'&&arr[8]=='O'))
        return 2;
    return 3;
}
int game1()
{
    displayTable();
    int a;
    for(int i=0;i<6;i++)
    {
        first:
        printf("\nFirst player ");
        scanf("%d",&a);
        if(arr[a]=='X'||arr[a]=='O')
        {
            printf("Invalid Move");
            goto first;
        }
        arr[a]='X';
        displayTable();
        if(gameWin()==1)
            return 1;
        printf("\nSecond player ");
        computerBrain();
        displayTable();
        if(gameWin()==2)
            return 2;
    }
    return 3;
}
int game2()
{
    displayTable();
    int a;
    for(int i=0;i<6;i++)
    {
        first:
        printf("\nFirst player ");
        scanf("%d",&a);
        if(arr[a]=='X'||arr[a]=='O')
        {
            printf("Invalid Move");
            goto first;
        }
        arr[a]='X';
        displayTable();
        if(gameWin()==1)
            return 1;
        printf("\nSecond player ");
        computerEvilBrain();
        displayTable();
        if(gameWin()==2)
            return 2;
    }
    return 3;
}
int game3()
{
    displayTable();
    int a;
    for(int i=0;i<6;i++)
    {
        first:
        printf("\nFirst player ");
        scanf("%d",&a);
        if(arr[a]=='X'||arr[a]=='O')
        {
            printf("Invalid Move");
            goto first;
        }
        arr[a]='X';
        displayTable();
        if(gameWin()==1)
            return 1;
        second:
        printf("\nSecond player ");
        scanf("%d",&a);
        if(arr[a]=='X'||arr[a]=='O')
        {
            printf("Invalid move");
            goto second;
        }
        arr[a]='O';
        displayTable();
        if(gameWin()==2)
            return 2;
    }
    return 3;
}
void menu()
{
    int a;
    printf("Enter your choice\n");
    printf("1. Want to play with smart computer\n");
    printf("2. Want to play with evil computer\n");
    printf("3. Want to play with player\n");
    printf("4. Exit\n");
    scanf("%d",&a);
    system("cls");
    switch(a)
    {
    case 1:
        switch(game1())
        {
        case 1:
            system("cls");
            displayTable();
            printf("\n\nPlayer 1 won");
            break;
        case 2:
            system("cls");
            displayTable();
            printf("\n\nComputer won");
            break;
        case 3:
            system("cls");
            displayTable();
            printf("\n\nGame Draw");
            break;
        }
        printf("\n\n###############################################");
        break;

    case 2:
        switch(game2())
        {
        case 1:
            system("cls");
            displayTable();
            printf("\n\nPlayer 1 won");
            break;
        case 2:
            system("cls");
            displayTable();
            printf("\n\nComputer won");
            break;
        case 3:
            system("cls");
            displayTable();
            printf("\n\nGame Draw");
            break;
        }
        printf("\n\n###############################################");
        break;

    case 3:
        switch(game3())
        {
        case 1:
            system("cls");
            displayTable();
            printf("\n\nPlayer 1 won");
            break;
        case 2:
            system("cls");
            displayTable();
            printf("\n\nPlayer 2 won");
            break;
        case 3:
            system("cls");
            displayTable();
            printf("\n\nGame Draw");
            break;
        }
        printf("\n\n###############################################");
        break;
    case 4:
        exit(0);
    }
}
int main()
{
    menu();
    return 0;
}
