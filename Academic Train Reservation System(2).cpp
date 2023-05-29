#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void login();
void registration();
char station[40],train[40],cla[40];
int j,choice,a1,a2,d,x=0,y,i;
time_t t;
//time(&t);
string time1;
class Train
{
public:

    int b, c, i, t, r, n;
    char source[20],des[20];
    string nam[20],gen[20];
    int age[100];


    void details(int k)
    {
        for(int i=1; i<=k; i++)
        {
            cout<<"Enter "<<i<<" Passenger's Name: ";
            cin>>nam[i];
            cout<<endl;
            cout<<"Enter "<<i<<" Passenger's Age: ";
            cin>>age[i];
            cout<<endl;
            cout<<"Enter your gender: ";
            cin>>gen[i];
            cout<<endl;

        }

        cout<<"\nFrom where do you take your train? "<<endl;
        cin>>source;
        cout<<"\nEnter The Destination Place:  "<<endl;
        cin>>des;
    }


    void display(int k)
    {
        for(int i=1; i<=k; i++)
        {
            cout<<"Number."<<i<<")) Passenger's Name: "<<nam[i]<<endl;
            cout<<"Number."<<i<<")) Passenger's  Age: "<<age[i]<<endl;
            cout<<"Number."<<i<<")) Passenger's Gender: "<<gen[i]<<endl;
            cout<<"\n\n";


        }

        cout<<"You will go from "<<source<<" to "<<des<<endl;
    }


};


class Passenger:public Train
{
public:

    int cal(int y1, int y2, int h)
    {
        // int b, c, i, t, r, n;
        cout<<"\t\tLoading Your Choice......\n"<<endl;
        cout<<"\n\t\t1.Slepper Class...."<<endl;
        cout<<endl;
        cout<<"\t\t2. A.C Class......."<<endl;
        cout<<"\t\t"<<endl;
        cout<<"\n\nEnter your choice: ";
        cin>>i;
        switch (i)
        {
        case 1:
        {
            strcpy(cla, "Slepper Class");
            b = y2 * h;
            c = b + (b * 0.18);
        }
        break;
        case 2:
        {
            cout<<"\t\tLoading Your Choice......\n"<<endl;
            cout<<"\t\t1. 3A Class...."<<endl;
            cout<<"\t\t2. 2A Class...."<<endl;
            cout<<"\t\t3. 1st Class A.C.....\n"<<endl;
            cout<<"Enter your choice: ";
            cin>>n;
            switch (n)
            {
            case 1:
            {
                strcpy(cla, "3A Class");
                b = y1 * h;
                c = b + (b * 0.18);
            }
            break;
            case 2:
            {
                strcpy(cla, "2A Class");
                b = (y1 + 1000) * h;
                c = b + (b * 0.18);
            }
            break;
            case 3:
            {
                strcpy(cla, "1st Class A.C.");
                b = (y1 + 2000) * h;
                c = b + (b * 0.18);
            }
            break;
            default:
            {
                cout<<"\t\tEnter Right Choice......"<<endl;
            }

            }
        }

        }
        return c;
    }



};

class Time:public Passenger
{
public:

    char choice;
    Time()
    {

    }

    Time(int p)
    {
        // i;
        cout<<"\n\n\n";
        cout<<"\t           -:SEAT Construction:-        \n"<<endl;
        cout<<"\t(A)    (B)        (C)    (D)    (E)\n\n"<<endl;
        cout<<"\t 1      2           3 \t 4        5\n\n "<<endl;
        cout<<"\t 6      7           8 \t 9       10\n\n "<<endl;
        cout<<"\t11     12          13 \t14       15\n\n "<<endl;
        cout<<"\t16     17          18 \t19       20\n\n "<<endl;
        cout<<"\t21     22          23 \t24       25\n\n "<<endl;
        cout<<"\t26     27          28 \t29       30\n\n "<<endl;
        cout<<"\t31     32          33 \t34       35\n\n "<<endl;
        cout<<"How many sits do you want: ";
        int quantity;
        cin>>quantity;
        int arr[quantity];
        cout<<"Select your sits: ";
        for(int i=0; i<quantity; i++)
        {
            cin>>arr[i];
        }
        cout<<"Your chosen sits are: ";
        for(int i=0; i<quantity; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }


};
//Main Logic
void logical_function()
{
    cout<<"\n\n";
    cout<<"\t\t\t\t*************************************************\n";
    cout<<"\t\t\t\t*                                               *\n";
    cout<<"\t\t\t\t*       --------------------------------        *\n";
    cout<<"\t\t\t\t*              Train Route Detector             *\n";
    cout<<"\t\t\t\t*       --------------------------------        *\n";
    cout<<"\t\t\t\t*                                               *\n";
    cout<<"\t\t\t\t*                                               *\n";
    cout<<"\t\t\t\t*                                               *\n";
    cout<<"\t\t\t\t*************************************************\n\n";

    for(i=0; i<80; i++)
        cout<<"-";
    cout<<"\nCurrent date and time : "<<ctime(&t);
    for(i=0; i<80; i++)
        cout<<"-";
    cout<<endl<<endl;


    cout<<"Enter Number Of Passengers: ";
    cin>>j;
    Train t1;
    t1.details(j);

    cout<<"\n\n\n";
    cout<<"\t\t\t\t\tThe Following Trains Are Available.....\n"<<endl;
    cout<<"\t\t\t1. PadmaShree Express.........10:00 a.m........Chasara Station "<<endl;
    cout<<"\t\t\t2. Shamim Express.............12:00 p.m........Fatullah Station "<<endl;
    cout<<"\t\t\t3. Uttar Express..............2:00  p.m........Pagla Station "<<endl;
    cout<<"\t\t\t4. Chasara Express............6:00  p.m........Metro Station "<<endl;
    cout<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;


    Passenger p1;

    do
    {
        switch (choice)
        {
        case 1:
        {
            // Passenger p1;
            strcpy(train,"PadmaShree Express");
            strcpy(station,"Chasara Station");
            time1 = "10:00";
            a1 = 460;
            a2 = 50;

            //  Passenger p1;
            d = p1.cal(a1, a2, j);
            cout<<"Total Bill Amount: "<<d<<endl;

        };
        break;
        case 2:
        {
            // Passenger p1;

            strcpy(train,"Shamim Express");
            strcpy(station,"Fatullah Station");
            time1 = "12:00";
            a1 = 560;
            a2 = 45;

            d = p1.cal(a1, a2, j);
            cout<<"Total Bill Amount: "<<d<<endl;;
        };
        break;
        case 3:
        {
            //  Passenger p1;
            strcpy(train," Uttar Express");
            strcpy(station,"Pagla Station");
            time1 = "2:00";
            a1 = 765;
            a2 = 35;

            d = p1.cal(a1, a2, j);
            cout<<"Total Bill Amount: "<<d<<endl;
        };
        break;
        case 4:
        {
            // Passenger p1;
            strcpy(train, "Chasara Express.");
            strcpy(station, "Metro Station");
            time1 ="4:00";
            a1 = 440;
            a2 = 85;

            d = p1.cal(a1, a2, j);
            cout<<"Total Bill Amount: "<<d<<endl;
        };
        break;

        default:
            cout<<"Enter Correct Choice......"<<endl;
            x = 1;
            break;
        }

        Time p2(j);
        // p2.display();
        //p2.seat(j);
    }
    while (x);
    // Display d1;
    t1.Train :: display(j);
    //Numbecout<<"\n\n";
    cout<<"Total amount you have to pay for your ticket= "<<d<<endl;
    cout<<"Boarding Time: "<<time1<<endl;
    cout<<"\n\n\n";
    cout<<"\t\t\t\tThank You for your contribution"<<endl;
    cout<<"\n\n\n";
}

int main()
{
    //system("color a");
    // system("color c");
    //char station[40],train[40];

    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,11);
    //  int j,choice,a1,a2,d,x=0,y,i;
    // time_t t;
    time(&t);
    // string time1;
    system("color 02");
    // system("Color 7A");
    cout<<"\t\t\t____________________________________________________\n\n\n";
    cout<<"\t\t\t             Welcome to the Login Page               \n\n\n";
    cout<<"\t\t\t___________________    Menu   _____________________ \n\n\n";
    cout<<"                                                           \n\n\n";
    cout<<"\t\t\t\t| Press 1 to Login                  |"<<endl;
    cout<<"\t\t\t\t| Press 2 to Register               |"<<endl;
    cout<<"\t\t\t\t| Press 3 to Exit                   |"<<endl;
    int c;
    cout<<"\n\t\t\tPlease enter your choice :";
    cin>>c;
    cout<<endl;

    switch(c)
    {
    case 1:
        login();
        break;

    case 2:
        registration();
        break;

    case 3:
        cout<<"\t\t\t Thank You!\n\n";
        break;
        return 0;

    default:
        cout<<"\t\t\t Please select from the options given above \n"<<endl;
        main();
    }





    return 0;
    // getch();
}

//Login Function
void  login()
{
    int count;
    string userid,password,id,pass;
    system("cls");
    cout<<"\t\t\t Please enter the username and password"<<endl;
    cout<<"\t\t\t USERNAME: ";
    cin>>userid;
    cout<<"\t\t\t PASSWORD: ";
    cin>>password;
    ifstream input("records.txt");
    while(input>>id>>pass)
    {
        if(id==userid && pass==password)
        {
            count=1;
            system("cls");
        }
    }
    input.close();
    if(count==1)
    {
        cout<<userid<<"\n Your Login is successful"<<endl;
        logical_function();
    }
    else
    {
        cout<<"Incorrect Username and Password"<<endl;
        //system("cls");
        main();
    }

}



void  registration()
{
    string ruserid,rpassword,rid,rpass;
    system("cls");
    cout<<"\t\t\t Please enter the username and password"<<endl;
    cout<<"\t\t\t USERNAME: ";
    cin>>ruserid;
    cout<<"\t\t\t PASSWORD: ";
    cin>>rpassword;
    ofstream output("records.txt",ios::app);
    output<<ruserid<<" "<<rpassword<<endl;
    cout<<"\n\t\t\t Registration is successful"<<endl;
    main();
}

