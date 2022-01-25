#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>


int i, j;
int main_exit;
void closed();
void fordelay(int j);
void menu();
void new_acc();
void edit();
void transcat();
void see();
void erase();
void view_list();

struct date{
    int month, day, year;
};

struct{
    char name[60];
    int acc_no, age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;
}add, upd, check, rem, transaction;

unsigned int sec = 0;
clock_t stopclock = CLOCKS_PER_SEC;

void main()
{
    char pass[15], passward[15]= "Sabic";
    int i=0;
    printf("\n\n\t Enter the passward to login: ");
    printf("\033[8m");
    scanf("%s", pass);
    printf("\033c");
    if(strcmp(pass,passward)==0)
    {
        printf("\n\n Passward macth! Loading");
        system("clear");
        fordelay(5);
        menu();
    }
    else
    {
        printf("\033c");
        printf("\n\n Wrong Password!!!");
        login_try:
            printf("\n Enter 1 to try again and 0 to exit");
            scanf("%d", &main_exit);
            if (main_exit==1)
            {
                system("clear");
                main();
            }
            else if(main_exit==0)
            {
                closed();
            }
    }
    void menu()
    {
        int choice;
        printf("\033c");
        system("clear");
        printf("\n");
        printf("\33[1;31m");
        printf("\n\n\t\t\t CUSTOMER ACCOUNT BANKING MANAGEMENT");
        printf("\n\n\n\t\t       \033[1;32mWELCOME TO THE MENU");
        printf("\033[0m");
        printf("\033[1;33m");
        printf("\n\n\t 1. Create new account \n\t 2. Update information of existing account \n\t 3. For transaction \n\t 4. Check the details of the existing account \n\t 5. Remove existing account \n\t 6. View customer's list \n\t 7. Exit \n\n\n\n\t\t Enter your choice: ");
        scanf("%d", &choice);
        system("clear");
        printf("\033c");
        switch(choice)
        {
            case 1:new_acc();
            break;
            case 2:edit();
            break;
            case 3:transact();
            break;
            case 4:see();
            break;
            case 5:erase();
            break;
            case 6:view_list();
            break;
            case 7:closed();
            break;
        }

    }
    void fordelay(int j)
    {
        while(sec<j)
        {

            if(clock()>stopclock)
        {
            stopclock+=1000000;
            printf(".");
            fflush(stdout);
            sec++;
        }
        }
    }

    void new_acc()
    {
        int choice;
        FILE *ptr;
        ptr=fopen("record.dat", "a+");
        account_no:
        system("clear");
        print("\t\t\t      ADD RECORD");
        printf("\n\n\n Enter today's date (dd/mm/yyyy)");
        scanf("%d/%d/%d", &add.deposit.day, &add.deposit.month, &add.deposit.year);
        printf("Enter the account number: ");
        while(fscanf(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d \n", &add.acc_no, &add.name, &add.dob.day, &add.dob.month, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposit.day, &add.deposit.month, &add.deposit.year)!=EOF)
        {
            if(check.acc_no==add.acc_no)
            {
                printf("Account no.already in use!");
            }   goto account_no;
        }
        add.acc_no=check.acc_no;
        printf("\nEnter the name: ");
        scanf("%s", add.name);
        printf("\nEnter the date of birth(dd/mm/yyyy): ");
        scanf("%d/%d/%d", &add.dob.day,&add.dob.month, &add.dob.year);
        printf("\n Enter the age: ");
        scanf("%d", &add.age);
        printf("\nEnter the address: ");
        scanf("%s", add.address);
        printf("\n Enter the citizenship: ");
        scanf("%s", add.citizenship);
        printf("\n Enter the phone number: ");
        scanf("%lf", &add.amt);
        printf("\n Type of account: \n\t #saving \n\t #current \n\t #Fixed(for 1 year) \n\t #Fixed2(for 2 years) \n\tFixed3(for 3 years): ");
        scanf("%s", add.acc_type);

        fprint(ptr, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d \n", add.acc_no, add.name, add.dob.day, add.dob.month, add.dob.year, add.age, add.address, add.citizenship, add.phone, add.acc_type, add.amt, add.deposit.day, add.deposit.month, add.deposit.year);
        fclose(ptr);
        printf("\n Account created successfully!!");
        add_invalid:
            printf("\n\n\n\t Enter 1 to go to the main menu and 0 to Exit\n: ");
            scanf("%d", &main_exit);
            system("clear");
            if(main_exit==1)
            {
                menu();
            }
            else if(main_exit==0)
            {
                closed();
            }
            else
            {
                printf("\n Invalid !");
                goto add_invalid;
            }
    }
}

