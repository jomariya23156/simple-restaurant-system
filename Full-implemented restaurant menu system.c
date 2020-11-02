#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand((time(NULL)));
    int tnum,choice,a,c,taste,indc,discount,gender,age,environment,decoration,fquantity[4]={0,0,0,0},dquantity[3]={0,0,0},fdeli[4]={0,0,0,0},ddeli[3]={0,0,0},dchoice,foodcount=0,tablecount=0,recordcount=0;
    char q,ans3,dc,confirmation,house_no,city,province,road,postal,fname,lname,pass[4],email;
    const char *food[4];
    const char *drink[3];
    float allprice[10]={0,0,0,0,0,0,0,0,0,0},deliprice[7];
    float price[10][7],rating_average,alldeliprice=0;
    const float fprice[4]={45.0,45.0,50.0,60.0};
    const float dprice[3]={20.0,30.0,10.0};
    int allmenu[7]={0,0,0,0,0,0,0},delivery[7];
    int recordtable[10][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};
    int table[10]={1,1,1,1,1,1,1,1,1,1};
    int menu,people,tnumber,restroom,service,registage,phonenum;
    const char *tstatus[3];
    tstatus[0]="Occupied";
    tstatus[1]="Available";
    tstatus[2]="Not enough seat";
    srand((unsigned int)(time(NULL)));
    MainMenu:
    printf("============================================================\n");
    printf("ICT Restaurant System\n");
    printf("============================================================\n");
    printf("[1] Book a table\n");
    printf("[2] Order food & drink\n");
    printf("[3] Display and clear a bill\n");
    printf("[4] Feedback Questionnaire\n");
    printf("[5] Food Delivery\n");
    printf("[6] Become a member to get a discount code FOR FREE!\n");
    printf("[0] Exit\n");
    printf("------------------------------------------------------------\n");
    printf("Enter a choice :");
    scanf("%d",&menu);
    system("cls");
    switch(menu){
        case 1:
            printf("[Book a table]\n");
            printf("\n");
            do{
            printf("Enter the number of people:");
            scanf("%d",&people);
            if(people<=0){
                printf("Invalid Numbers.\n");
            }
            }
            while(people<=0);
            printf("============================================================\n");
            printf("List of tables                              Status\n");
            printf("============================================================\n");
            for(int i=0;i<10;i++){
                if(table[i]!=0){
                    table[i]=1;
                }
            }
            if(people>2 && people<=4){
                for(int i=0;i<4;i++){
                    if(table[i]!=0){
                    table[i]=2;
                    }
                }
            }
            else if(people>4 && people<=8){
                for(int i=0;i<8;i++){
                    if(table[i]!=0){
                    table[i]=2;
                    }
                }
            }
            else if(people>8){
                for(int i=0;i<10;i++){
                    if(table[i]!=0){
                    table[i]=2;
                    }
                }
            }
            if(table[0]==1){
                printf("Table 1: 2 seats %36s\n",tstatus[1]);
            }
            else if(table[0]==2){
                printf("Table 1: 2 seats %42s\n",tstatus[2]);
            }
            else if(table[0]==0){
                printf("Table 1: 2 seats %35s\n",tstatus[0]);
            }
            if(table[1]==1){
                printf("Table 2: 2 seats %36s\n",tstatus[1]);
            }
            else if(table[1]==2){
                printf("Table 2: 2 seats %42s\n",tstatus[2]);
            }
            else if(table[1]==0){
                printf("Table 2: 2 seats %35s\n",tstatus[0]);
            }
            if(table[2]==1){
                printf("Table 3: 2 seats %36s\n",tstatus[1]);
            }
            else if(table[2]==2){
                printf("Table 3: 2 seats %42s\n",tstatus[2]);
            }
            else if(table[2]==0){
                printf("Table 3: 2 seats %35s\n",tstatus[0]);
            }
            if(table[3]==1){
                printf("Table 4: 2 seats %36s\n",tstatus[1]);
            }
            else if(table[3]==2){
                printf("Table 4: 2 seats %42s\n",tstatus[2]);
            }
            else if(table[3]==0){
                printf("Table 4: 2 seats %35s\n",tstatus[0]);
            }
            if(table[4]==1){
                printf("Table 5: 4 seats %36s\n",tstatus[1]);
            }
            else if(table[4]==2){
                printf("Table 5: 4 seats %42s\n",tstatus[2]);
            }
            else if(table[4]==0){
                printf("Table 5: 4 seats %35s\n",tstatus[0]);
            }
            if(table[5]==1){
                printf("Table 6: 4 seats %36s\n",tstatus[1]);
            }
            else if(table[5]==2){
                printf("Table 6: 4 seats %42s\n",tstatus[2]);
            }
            else if(table[5]==0){
                printf("Table 6: 4 seats %35s\n",tstatus[0]);
            }
            if(table[6]==1){
                printf("Table 7: 4 seats %36s\n",tstatus[1]);
            }
            else if(table[6]==2){
                printf("Table 7: 4 seats %42s\n",tstatus[2]);
            }
            else if(table[6]==0){
                printf("Table 7: 4 seats %35s\n",tstatus[0]);
            }
            if(table[7]==1){
                printf("Table 8: 4 seats %36s\n",tstatus[1]);
            }
            else if(table[7]==2){
                printf("Table 8: 4 seats %42s\n",tstatus[2]);
            }
            else if(table[7]==0){
                printf("Table 8: 4 seats %35s\n",tstatus[0]);
            }
            if(table[8]==1){
                printf("Table 9: 8 seats %36s\n",tstatus[1]);
            }
            else if(table[8]==2){
                printf("Table 9: 8 seats %42s\n",tstatus[2]);
            }
            else if(table[8]==0){
                printf("Table 9: 8 seats %35s\n",tstatus[0]);
            }
            if(table[9]==1){
                printf("Table 10: 8 seats %35s\n",tstatus[1]);
            }
            else if(table[9]==2){
                printf("Table 10: 8 seats %41s\n",tstatus[2]);
            }
            else if(table[9]==0){
                printf("Table 10: 8 seats %34s\n",tstatus[0]);
            }

            do{
                printf("Enter a table number (input 0 to cancel): ");
                scanf("%d",&tnumber);
                if(tnumber>=1 && tnumber<=10){
                    if(table[tnumber-1]==1){
                        table[tnumber-1]=0;
                        printf("You have Booked!\n");
                    }
                    else{
                        printf("Please enter the available table.\n");
                    }
                }
                else if(tnumber==0){
                system("cls");
                goto MainMenu;
                }
                else{
                    printf("Invalid choice!\n");
                }
            }
            while(tnumber!=0);

            break;

        case 2:

            food[0]="[F] Kao Pad Kra Pao";
            food[1]="[F] Fried Rice";
            food[2]="[F] Kha Nar Mhoo Krob";
            food[3]="[F] Tom Yum Koong Nam Khon";
            drink[0]="[D] Coca Cola";
            drink[1]="[D] Orange Juice";
            drink[2]="[D] Still Water";
            printf("List of occupied tables:\n");
            for(int i=0;i<10;i++){
                if(table[i]==0){
                    printf("Table %d\n",i+1);
                }
            }
            do
            {
            printf("\nEnter the table number [1-10] (0 to exit): ");
            scanf("%d",&tnum);
            if (tnum==0)
                {
                system("cls");
                goto MainMenu;
                }
            else if (table[tnum-1]!=0)
                {
                printf("invalid table");
                }
            else if (tnum <0 || tnum> 10){
                printf("invalid table");
                }
            }
            while (table[tnum-1]!=0 || tnum<0 || tnum>10);

            printf("\n\n============================================================\n");
            printf("Order food & drink\n");
            printf("============================================================\n");
            printf("\nFood Menu                             Price (Baht)\n");
            printf("------------------------------------------------------------\n");
            printf("[1] Kao Pad Kra Pao %22.1f\n",45.0);
            printf("[2] Fried Rice %27.1f\n",45.0);
            printf("[3] Kha Nar Mhoo Krob %20.1f\n",50.0);
            printf("[4] Tom Yum Koong Nam Khon %15.1f\n",60.0);
            printf("------------------------------------------------------------\n");
            do  {   printf("Enter the choice(input 0 to stop): ");
                    scanf("%d",&choice);

                if(choice==0){
                    printf("\n");
                    break;
                }
                else if(choice<0 || choice>4)
                    printf("Invalid choice\n");
                else if(choice==1)
                    fquantity[0]+=1;
                else if(choice==2)
                    fquantity[1]+=1;
                else if(choice==3)
                    fquantity[2]+=1;
                else if(choice==4)
                    fquantity[3]+=1;
                }
            while(choice!=0);

            printf("Drink Menu                            Price (Baht)\n");
            printf("------------------------------------------------------------\n");
            printf("[1] Coca Cola %28.1f\n",20.0);
            printf("[2] Orange Juice %25.1f\n",30.0);
            printf("[3] Still Water %26.1f\n",10.0);
            printf("------------------------------------------------------------\n");
            do  {   printf("Enter the choice(input 0 to stop): ");
                    scanf("%d",&choice);
                if(choice==0){
                    printf("\n");
                    break;
                }
                else if(choice<0 || choice>4)
                    printf("Invalid choice\n");
                else if(choice==1)
                    dquantity[0]+=1;
                else if(choice==2)
                    dquantity[1]+=1;
                else if(choice==3)
                    dquantity[2]+=1;
                }
            while(choice!=0);
            printf("\nYour have order the following:\n");
            for(int i=0;i<4;i++)
            {
                if(fquantity[i]>0)
                    printf("%s x%d\n",food[i],fquantity[i]);

            }
            for(int i=0;i<3;i++)
            {
                if(dquantity[i]>0)
                    printf("%s x%d\n",drink[i],dquantity[i]);
            }

            allmenu[0]=fquantity[0];
            allmenu[1]=fquantity[1];
            allmenu[2]=fquantity[2];
            allmenu[3]=fquantity[3];
            allmenu[4]=dquantity[0];
            allmenu[5]=dquantity[1];
            allmenu[6]=dquantity[2];
            printf("Confirm? (y|n): ");
            scanf(" %c",&q);
            if(q=='y')
            {
               for(int i=0;i<7;i++){
               recordtable[tnum-1][i]+=allmenu[i];
               }
               for(int i=0;i<7;i++){
               printf("%d ",recordtable[tnum-1][i]);
               }
               printf("\n Array Tnum = %d\n",tnum-1);
               for(int i=0;i<4;i++){
                    fquantity[i]=0;
                }
                for(int i=0;i<3;i++){
                    dquantity[i]=0;
                }
            }
            else if(q=='n')
            {
                for(int i=0;i<4;i++){
                    fquantity[i]=0;
                }
                for(int i=0;i<3;i++){
                    dquantity[i]=0;
                }
                system("cls");
                goto MainMenu;
            }
            printf("You have already ordered food and drink for table %d\n",tnum);
            printf("Press any key to go back to Main Menu\n");
            _getch();
            system("cls");
            goto MainMenu;
            break;

        case 3:

            printf("[Display and clear a bill]\n\n");
            printf("List of occupied tables:\n");

            for(int i=0;i<10;i++)
            {
                if(table[i]==0)
                {
                    printf("Table %d\n",i+1);
                    tablecount++;
                }
            }
            if(tablecount==0)
                    printf("NONE\n");
            do
            {
            printf("\nEnter the table number [1-10] (0 to exit): ");
            scanf("%d",&tnum);
            if (tnum==0){
                system("cls");
                goto MainMenu;
            }
            else if (table[tnum-1]!=0)
                {
                printf("There is no one sitting at the table.\n");
                printf("Press Enter to go back to the main menu");
                getch();
                system("cls");
                goto MainMenu;
                }
            }
            while (table[tnum-1]!=0);

            for (int i=0;i<7;i++)
            {
                if (recordtable[tnum-1][i]!=0)
                {
                    recordcount++;
                }
            }

            if (recordcount==0)
            {
                printf("There is no any ordered food or drink.\n");
                printf("Press Enter to go back to the main menu");
                getch();
                system("cls");
                goto MainMenu;
            }
            else if (recordcount!=0){
            printf("You have order the following: \n\n");
            printf("Food Menu             \t\tQty.        Price (Baht)\n");
            printf("------------------------------------------------------------\n");
            for(int i=0;i<4;i++)
            {
                if (recordtable[tnum-1][i]!=0)
                    foodcount++;
            }

            if (foodcount!=0)
            {
                for(int i=0;i<4;i++)
                {
                    price[tnum-1][i] =  recordtable[tnum-1][i]*fprice[i];
                    if(recordtable[tnum-1][i]>0)
                        printf("%-31s %-11d %-8.1f\n",food[i],recordtable[tnum-1][i],price[tnum-1][i]);

                }
            }
            else if (foodcount==0)
            {
                printf("NONE\n");
                for(int i=0;i<4;i++)
                {
                    price[tnum-1][i]=0;
                }
            }

            foodcount=0;

            printf("------------------------------------------------------------\n\n");


            printf("Drink Menu            \t\tQty.        Price (Baht)\n");
            printf("------------------------------------------------------------\n");
            for(int i=4;i<7;i++)
            {
                if (recordtable[tnum-1][i]!=0)
                    foodcount++;
            }
            if (foodcount!=0)
            {
                for(int i=4;i<7;i++)
                {
                    price[tnum-1][i] =  recordtable[tnum-1][i]*dprice[i-4];
                    if(recordtable[tnum-1][i]>0)
                        printf("%-31s %-11d %-8.1f\n",drink[i-4],recordtable[tnum-1][i],price[tnum-1][i]);
                }
            }
            else if (foodcount==0)
            {
                printf("NONE\n");
                for(int i=4;i<7;i++)
                {
                    price[tnum-1][i]=0;
                }
            }


            foodcount=0;


            printf("------------------------------------------------------------\n\n");
                for(int i=0;i<7;i++)
                    allprice[tnum-1] = allprice[tnum-1]+price[tnum-1][i];


            printf("** Total amount: %.2f\n",allprice[tnum-1]);
            do{
            printf("Do you have a discount code? (extra feature) (y|n):");
            scanf(" %c",&dc);
            if(dc=='y'){
                while(indc!=discount){
                    printf("Input your discount code (input 0 to stop) : ");
                    scanf("%d",&indc);
                    if(indc==0){
                        break;
                    }
                    else if(indc==discount){
                        printf("20 percent off.\n");
                        printf("Total discounted amount: %.2f \n",allprice[tnum-1]-(allprice[tnum-1]*0.2));
                    }
                    else if(indc!=discount){
                        printf("Invalid discount code.\n\n");
                    }
                }
            }
            else if(dc=='n'){
                break;
            }
            else{
                printf("Invalid answer.\n");
            }
            }
            while(dc!='y' && dc!='n');
            printf("Do you want to clear the bill? (y|n): ");
            scanf(" %c",&ans3);
            if(ans3=='y')
            {
               table[tnum-1]=1;
               allprice[tnum-1]=0;
               for (int i=0;i<7;i++)
                {
                recordtable[tnum-1][i]=0;
               }
               system("cls");
                goto MainMenu;
            }
            else if(ans3=='n')
            {
                allprice[tnum-1]=0;
                system("cls");
                goto MainMenu;
            }
            printf("You have already ordered food and drink for table %d\n",tnum);
            printf("Press any key to go back to Main Menu\n");
            _getch();
            system("cls");
            goto MainMenu;
            }
            break;

        case 4:
            printf("\n\n============================================================\n\n");
            printf("                     ++Questionnaire++                   \n");
            printf("\n------------------------------------------------------------\n");
            do{
                printf("\nInput Gender\n[1]Male\n[2]Female\n");
                scanf(" %d",&gender);
                if(gender!=1 && gender!=2)
                {
                    printf("Invalid\n");
                }
            }
            while(gender!=1 && gender!=2);
            printf("\n------------------------------------------------------------\n");
            do{
                printf("\nInput Age : ");
                scanf(" %d",&age);
                if(age<0)
                {
                    printf("Invalid\n");
                }
            }
            while(age<0);
            printf("\n------------------------------------------------------------\n");
            do{
                printf("\nRate food&drink taste (1-10) : ");
                scanf(" %d",&taste);
                if(taste<1 || taste>10)
                {
                    printf("Invalid\n");
                }
            }
            while(taste<1 || taste>10);
            printf("\n------------------------------------------------------------\n");
            do{
                printf("\nRate food decoration (1-10) : ");
                scanf(" %d",&decoration);
                if(decoration<1 || decoration>10)
                {
                    printf("Invalid\n");
                }
            }
            while(decoration<1 || decoration>10);
            printf("\n------------------------------------------------------------\n");
            do{
                printf("\nRate the environment quality (1-10) : ");
                scanf(" %d",&environment);
                if(environment<1 || environment>10)
                {
                    printf("Invalid\n");
                }
            }
            while(environment<1 || environment>10);
            printf("\n------------------------------------------------------------\n");
            do{
                printf("\nRate staffs service (1-10) : ");
                scanf(" %d",&service);
                if(service<1 || service>10)
                {
                    printf("Invalid\n");
                }
            }
            while(service<1 || service>10);
            printf("\n------------------------------------------------------------\n");
            do{
                printf("\nRate restrooms cleanness (1-10) : ");
                scanf(" %d",&restroom);
                if(restroom<1 || restroom>10)
                {
                    printf("Invalid\n");
                }
            }
            while(restroom<1 || restroom>10);
            printf("\n------------------------------------------------------------\n");
            do{
                printf("\nDo you want to make any changes?[y/n]");
                scanf(" %c",&confirmation);
                if (confirmation != 'y' && confirmation != 'n')
                    {
                        printf("Invalid\n");
                    }
                else if(confirmation == 'y')
                    {
                        printf("Press any key to go back to Main Menu");
                        getch();
                        system("cls");
                        goto MainMenu;
                    }
                else if(confirmation == 'n')
                    {
                        rating_average=(taste+decoration+environment+restroom+service)/5;
                        printf("Average rating = %.2f\n",rating_average);
                        printf("Thanks for doing the feedback :)\n\n");
                        printf("Press any key to go back to Main Menu");
                        getch();
                        system("cls");
                        goto MainMenu;
                    }
            }
            while(confirmation != 'y' && confirmation != 'n');
            break;

        case 5:
            food[0]="[F] Kao Pad Kra Pao";
            food[1]="[F] Fried Rice";
            food[2]="[F] Kha Nar Mhoo Krob";
            food[3]="[F] Tom Yum Koong Nam Khon";
            drink[0]="[D] Coca Cola";
            drink[1]="[D] Orange Juice";
            drink[2]="[D] Still Water";
            printf("Food Delivery");
            printf("\n\n============================================================\n");
            printf("Order food & drink\n");
            printf("============================================================\n");
            printf("\nFood Menu                             Price (Baht)\n");
            printf("------------------------------------------------------------\n");
            printf("[1] Kao Pad Kra Pao %22.1f\n",45.0);
            printf("[2] Fried Rice %27.1f\n",45.0);
            printf("[3] Kha Nar Mhoo Krob %20.1f\n",50.0);
            printf("[4] Tom Yum Koong Nam Khon %15.1f\n",60.0);
            printf("------------------------------------------------------------\n");
            do  {   printf("Enter the choice(input 0 to stop): ");
                scanf("%d",&choice);

            if(choice==0)
                {
                    printf("\n");
                    break;
                }
            else if(choice<0 || choice>4)
                    printf("Invalid choice\n");
            else if(choice==1)
                    fdeli[0]+=1;
            else if(choice==2)
                    fdeli[1]+=1;
            else if(choice==3)
                    fdeli[2]+=1;
            else if(choice==4)
                    fdeli[3]+=1;
                }
            while(choice!=0);

            printf("Drink Menu                            Price (Baht)\n");
            printf("------------------------------------------------------------\n");
            printf("[1] Coca Cola %28.1f\n",20.0);
            printf("[2] Orange Juice %25.1f\n",30.0);
            printf("[3] Still Water %26.1f\n",10.0);
            printf("------------------------------------------------------------\n");
            do  {   printf("Enter the choice(input 0 to stop): ");
                scanf("%d",&choice);
            if(choice==0)
                {
                    printf("\n");
                    break;
                }
            else if(choice<0 || choice>4)
                    printf("\nInvalid choice\n");
            else if(choice==1)
                    ddeli[0]+=1;
            else if(choice==2)
                    ddeli[1]+=1;
            else if(choice==3)
                    ddeli[2]+=1;
                }
            while(choice!=0);
            printf("Your have order the following:\n");
            for(int i=0;i<4;i++)
            {
                if(fdeli[i]>0)
                printf("%s x%d\n",food[i],fdeli[i]);
            }
            for(int i=0;i<3;i++)
            {
                if(ddeli[i]>0)
                printf("%s x%d\n",drink[i],ddeli[i]);
            }

                delivery[0]=fdeli[0];
                delivery[1]=fdeli[1];
                delivery[2]=fdeli[2];
                delivery[3]=fdeli[3];
                delivery[4]=ddeli[0];
                delivery[5]=ddeli[1];
                delivery[6]=ddeli[2];
                printf("Confirm? (y|n): ");
                scanf(" %c",&q);
            if(q=='y')
                {
                for(int i=0;i<4;i++)
                    {
                        fdeli[i]=0;
                    }
                for(int i=0;i<3;i++)
                    {
                        ddeli[i]=0;
                    }
                }
            else if(q=='n')
                {
                    for(int i=0;i<4;i++)
                        {
                        fdeli[i]=0;
                        }
                    for(int i=0;i<3;i++)
                        {
                        ddeli[i]=0;
                        }
                    system("cls");
                    goto MainMenu;
                }
            printf("\nInput house no. : ");
            scanf("%s",&house_no);
            printf("\nInput road. : ");
            scanf("%s",&road);
            printf("\nInput city : ");
            scanf("%s",&city);
            printf("\nInput province : ");
            scanf("%s",&province);
            printf("\nInput postal no. : ");
            scanf("%s",&postal);

            printf("\nYou have order the following: \n\n");

            printf("Food Menu             \t\tQty.        Price (Baht)\n");
            printf("------------------------------------------------------------\n");
            for(int i=0;i<4;i++)
            {
                if (delivery[i]!=0)
                    foodcount++;
            }

            if (foodcount!=0)
            {
                for(int i=0;i<4;i++)
                {
                    deliprice[i] =  delivery[i]*fprice[i];
                    if(delivery[i]>0)
                        printf("%-31s %-11d %-8.1f\n",food[i],delivery[i],deliprice[i]);

                }
            }
            else if (foodcount==0)
            {
                printf("NONE\n");
                for(int i=0;i<4;i++)
                {
                    deliprice[i]=0;
                }
            }

            foodcount=0;

            printf("------------------------------------------------------------\n\n");


            printf("Drink Menu            \t\tQty.        Price (Baht)\n");
            printf("------------------------------------------------------------\n");
            for(int i=4;i<7;i++)
            {
                if (delivery[i]!=0)
                    foodcount++;
            }
            if (foodcount!=0)
            {
                for(int i=4;i<7;i++)
                {
                    deliprice[i] =  delivery[i]*dprice[i-4];
                    if(delivery[i]>0)
                        printf("%-31s %-11d %-8.1f\n",drink[i-4],delivery[i],deliprice[i]);
                }
            }
            else if (foodcount==0)
            {
                printf("NONE\n");
                for(int i=4;i<7;i++)
                {
                    deliprice[i]=0;
                }
            }


            foodcount=0;


            printf("------------------------------------------------------------\n\n");
                for(int i=0;i<7;i++)
                    alldeliprice+=deliprice[i];


            printf("** Total food amount: %.2f\n",alldeliprice);

            printf("Confirm orders? (y|n): ");
            scanf(" %c",&ans3);
            if(ans3=='y')
            {
               for (int i=0;i<7;i++)
                {
                delivery[i]=0;
               }
            }
            else if(ans3=='n')
            {
                alldeliprice=0;
                system("cls");
                goto MainMenu;
            }
            printf("50 Baht charge for delivery service\n");
            printf("Total price(included service charge) = %.2f\n\n",alldeliprice+50);
            printf("There is cash on delivery(COD) service, you can pay after you receive your food.\n\n");
            printf("Thanks for using our service :)\n\n");
            printf("Press any key to go back to main menu.");
            _getch();
            system("cls");
            goto MainMenu;
            break;
        case 6:
            printf("\n\n============================================================\n");
            printf("                     ++Become a member++                   \n");
            printf("                  !!! FREE DISCOUNT CODE !!!               \n");
            printf("============================================================\n");
            printf("\nEnter your first name : ");
            scanf("%s",&fname);
            printf("\n------------------------------------------------------------\n");
            printf("\nEnter your last name : ");
            scanf("%s",&lname);
            printf("\n------------------------------------------------------------\n");
            do{
                printf("\nEnter your Age : ");
                scanf("%d",&registage);
                if(registage<15 && registage>0){
                    printf("You have to be at least 15 years old.\n");
                    printf("Press any key to go back to main menu.");
                    getch();
                    system("cls");
                    goto MainMenu;
                }
                else if(registage<0)
                {
                    printf("Invalid\n");
                }
            }
            while(registage<15);
            printf("\n------------------------------------------------------------\n");
            printf("\nEnter your e-mail : ");
            scanf("%s",&email);
            printf("\n------------------------------------------------------------\n");
            printf("\nEnter your phone number : ");
            scanf("%d",&phonenum);
            printf("\n------------------------------------------------------------\n");
            discount=999+rand() % 9000;
            printf("Thanks for becoming our member.\n");
            printf("\nThis is your discount code for 20 percent off : %d\n",discount);
            printf("\nPress any key to back to main menu.");
            getch();
            system("cls");
            goto MainMenu;
            break;
    }
}


