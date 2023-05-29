#include<bits/stdc++.h>
#include<windows.h>
const int N=100,INF=1e9+10;
using namespace std;
typedef pair<int, int> Pair;
time_t t;
void login();
void registration();
void logical_function();
void all_place();
void place_code();
void src_des();
void short_cheap_path();
void routes();
void train();
void mymen();
void bogra();
void raj();
void khul();
void bari();
void syl();
void chitt();
void purchase();
int main()
{
     HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(h,11);
     system("color 02");
     cout<<"\t\t\t\t____________________________________________________\n\n\n";
    cout<<"\t\t\t\t         WELCOME TO THE TRAIN ROUTE DETECTOR         \n\n\n";
    cout<<"\t\t\t\t___________________    Menu   _____________________ \n\n\n";
    cout<<"                                                           \n\n\n";
    cout<<"\t\t\t\t\t|          Press 1 to Login         |"<<endl;
    cout<<"\t\t\t\t\t|          Press 2 to Register      |"<<endl;
    cout<<"\t\t\t\t\t|          Press 3 to Exit          |"<<endl<<endl;
    int c;
    cout<<"\n\t\t\t\tPlease enter your choice :";
    cin>>c;
    cout<<endl;

    switch(c)
    {
    case 1:
        {login();
        break;}

    case 2:
        {registration();
        break;}
    case 3:
        {system("cls");
        cout<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\t\tTHANK YOU FOR VISITING US !"<<endl<<endl<<endl;
        return 0;
        break;}

    default:
       {
        system("cls");
        cout<<endl<<endl<<endl<<"\t\t\t\tPLEASE SELECT FROM THE BElOW OPTIONS"<<endl<<endl;
        main();
       break;
       }
    }

}

void login()
{
   system("cls");
   int count;
   string userid,password,id,pass;
    cout<<"\t\t\t Please enter the username and password"<<endl;
    cout<<"\t\t\t USERNAME: ";
    cin>>userid;
    cout<<"\t\t\t PASSWORD: ";
    cin>>password;
    ifstream input("record.txt",ios::app);
    while(input>>id>>pass)
    {
        if( id==userid && pass==password)
        {
            count=1;
            system("cls");
        }
    }
    input.close();
    if(count==1)
    {
        cout<<"\t\t\t\t WELCOME "<<userid<<endl;
        cout<<"\t\t\t\t Your Login is successful"<<endl;
         routes();
    }
    else
    {
            cout<<"\t\t\t\t\t\tINCORRECT USERNAME OR PASSWORD "<<endl<<endl<<endl;
            //system("cls");
            main();
    }
}

void registration()
{
    string ruserid,rpassword,rnumber,rid,remail;
    system("cls");
    cout<<"\t\t\t Please enter the username and password"<<endl;
    cout<<"\t\t\t USERNAME: ";
    cin>>ruserid;
    cout<<"\t\t\t PASSWORD: ";
    cin>>rpassword;
    ofstream outpu("record.txt",ios::app);
    outpu<<ruserid<<" "<<rpassword<<endl;
    system("cls");
    cout<<"\n\t\t\t REGISTRATION IS SUCCESSFUL"<<endl;
    cout<<"\n\t\t\tPRESS ANY KEY TO RETURN TO MENU";

    char op;
    cin>>op;
    if(!isblank(op))
    {
        system ("cls");
        main();
    }


}

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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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

void all_place()
{
    cout<<"\t\t\t\tName of the places with code: "<<endl;
    map<string,int>mp;
    mp["Abdulpur"]=1;
    mp["Agartal"]=2;
    mp["Akura_railway"]=3;
    mp["Alamdangal"]=4;
    mp["Bangabandhu bridge"]=5;
    mp["Barishal"]=6;
    mp["Bhairab"]=7;
    mp["Bhrahmanbaria"]=8;
    mp["Bogra"]=9;
    mp["Chandshi"]=10;
    mp["Chandpur"]=11;
    mp["Chapia"]=12;
    mp["Chittagong"]=13;
    mp["Chuadanga"]=14;
    mp["Cumilla"]=15;
    mp["Dhaka"]=16;
    mp["Feni"]=17;
    mp["Gazipur"]=18;
    mp["Gopalganj"]=19;
    mp["Ishwardi"]=20;
    mp["Jagadishpur"]=21;
    mp["Jessore"]=22;
    mp["Jhenaida"]=23;
    mp["Khulna"]=24;
    mp["Kishorganj"]=25;
    mp["Kodaliapara"]=26;
    mp["Kushtia"]=27;
    mp["Lakshipur"]=28;
    mp["Mymensingh"]=29;
    mp["Narayanganj"]=30;
    mp["Narayanpur"]=31;
    mp["Narshingdi"]=32;
    mp["Natore"]=33;
    mp["Rajshahi"]=34;
    mp["Shariatpur"]=35;
    mp["Shirajganj"]=36;
    mp["Sitakunda"]=37;
    mp["Sreemangal"]=38;
    mp["Sylhet"]=39;
    mp["Tangail"]=40;
    mp["Tongi"]=41;
    mp["Kuluara"]=42;

    map<string,int> :: iterator it;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<"-->"<<it->second<<" "<<endl;
    }
   place_code();

}

void src_des()
{
    int flag=0, flag1=0;
    map<string,int>mp;
    mp["Abdulpur"]=1;
    mp["Agartal"]=2;
    mp["Akura_railway"]=3;
    mp["Alamdangal"]=4;
    mp["Bangabandhu bridge"]=5;
    mp["Barishal"]=6;
    mp["Bhairab"]=7;
    mp["Bhrahmanbaria"]=8;
    mp["Bogra"]=9;
    mp["Chandshi"]=10;
    mp["Chandpur"]=11;
    mp["Chapia"]=12;
    mp["Chittagong"]=13;
    mp["Chuadanga"]=14;
    mp["Cumilla"]=15;
    mp["Dhaka"]=16;
    mp["Feni"]=17;
    mp["Gazipur"]=18;
    mp["Gopalganj"]=19;
    mp["Ishwardi"]=20;
    mp["Jagadishpur"]=21;
    mp["Jessore"]=22;
    mp["Jhenaida"]=23;
    mp["Khulna"]=24;
    mp["Kishorganj"]=25;
    mp["Kodaliapara"]=26;
    mp["Kushtia"]=27;
    mp["Lakshipur"]=28;
    mp["Mymensingh"]=29;
    mp["Narayanganj"]=30;
    mp["Narayanpur"]=31;
    mp["Narshingdi"]=32;
    mp["Natore"]=33;
    mp["Rajshahi"]=34;
    mp["Shariatpur"]=35;
    mp["Shirajganj"]=36;
    mp["Sitakunda"]=37;
    mp["Sreemangal"]=38;
    mp["Sylhet"]=39;
    mp["Tangail"]=40;
    mp["Tongi"]=41;
    mp["Kuluara"]=42;

    string place,place1;
    cout<<"\t\t\tENTER THE NAME OF PLACE YOU ARE STARTING YOUR JOURNEY FROM: AND WHERE YOU WANT TO GO: ";
    cin>>place;
     cout<<"\t\t\tENTER THE NAME OF PLACE  WHERE YOU WANT TO GO: ";
    cin>>place1;

    map<string,int>::iterator it;
    for( auto it=mp.begin(); it!=mp.end(); it++)
    {
    if(place==it->first)
    {
        cout<<"\t\t\t\tCODE OF THE PLACE: "<<it->first<<" = "<<it->second<<endl;
        flag=1;
        break;
    }
    }

    map<string,int>::iterator it1;
    for( auto it1=mp.begin(); it1!=mp.end(); it1++)
    {
    if(place1==it1->first)
    {
        cout<<"\t\t\t\tCODE OF THE PLACE: "<<it1->first<<" = "<<it1->second<<endl;
        flag1=1;
        break;
    }
    }

    if(flag==0 || flag1==0)
    {
        system("cls");
        cout<<"\t\t\t\tPLEASE ENTER THE NAME OF PLACE CORRECTLY: "<<endl<<endl;
       train();
    }

    else
    short_cheap_path();
}

void place_code()
{
    int op;
    cout<<"\n\n\n\t\t\t\tAvailable Options"<<endl<<endl;
    cout<<"\t\t\t\t1.SEE ALL PLACES AND CODES "<<endl;
    cout<<"\t\t\t\t2.ONLY SOURCE AND DESTINATION CODE "<<endl;
     cout<<"\t\t\t\tEnter your choice: ";
    cin>>op;
    switch(op)
    {
    case 1:
        {
        all_place();
        break;
        }
    case 2:
       {
    src_des();
     break;
     }

    default:
        {
        cout<<"Please Enter the Correct Option: "<<endl;
        place_code();
     break;
     }
    }

}

void short_cheap_path()
{
     int dist[N][N],time[N][N];
    // for cheapest path
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
        if(i!=j)
            dist[i][j]=INF;
        else
            dist[i][j]=0;
        }
    }
    //for shortest path
     for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
        if(i!=j)
            time[i][j]=INF;
        else
            time[i][j]=0;
        }
    }

    // Entering edge with cost
    int n=42, e=46;

    dist[16][41]=50;  //dist[41][16]=50;
    dist[41][18]=50;  //dist[18][41]=50;
    dist[18][40]=50;  //dist[40][18]=50;
    dist[40][29]=50;  //dist[29][40]=50; //dhaka to mymensingh
    dist[40][5]=50;   //dist[5][40]=50;
    dist[5][36]=40;   //dist[36][5]=40;
    dist[36][20]=50;  //dist[20][36]=50;
    dist[20][1]=30;   //dist[1][20]=30;
    dist[1][34]=50;   //dist[34][1]=50;//dhaka to rajshahi
    dist[20][33]=60;   //dist[33][20]=60;
    dist[33][9]=50;   //dist[9][33]=50; //dhaka to bogra
    dist[20][26]=150; //dist[26][20]=150;
    dist[26][4]=50;   //dist[4][26]=50;
    dist[4][14]=50;   //dist[14][4]=50;
    dist[14][22]=60;   //dist[22][14]=60;
    dist[22][24]=60;   //dist[24][22]=60;//dhaka to khulna path 1
    dist[20][27]=100;  //dist[27][20]=100;
    dist[27][23]=70;  //dist[23][27]=70;
    dist[23][19]=20;   //dist[19][23]=20;
    dist[19][22]=50;  //dist[22][19]=50;// dhaka to gopalganj (khulna path 2)
    dist[19][6]=50;   //dist[6][19]=50;//dhaka to barisal path 1
    dist[41][32]=50;   //dist[7][32]=40;
    dist[32][7]=40;
    dist[7][8]=60;     //dist[8][7]=60;
    dist[8][3]=40;    //dist[3][8]=40;
    dist[3][21]=50;    //dist[2][21]=40;
    dist[21][2]=40;
    dist[2][38]=60;    //dist[38][2]=60;
    dist[38][42]=30;   //dist[42][38]=30;
    dist[42][39]=50;   //dist[39][42]=50;//dhaka tosylhet
    dist[18][25]=200;  //dist[25][18]=200;
    dist[25][29]=50;   //dist[29][25]=50;
    dist[25][38]=100;  //dist[38][25]=100;
    dist[3][12]=60;
    dist[12][31]=60;  //dist[31][12]=60;
    dist[31][15]=50;   //dist[15][31]=50;
    dist[15][17]=40;   //dist[17][15]=40;
    dist[17][37]=80;   //dist[37][17]=80;
    dist[37][13]=80;   //dist[13][37]=80;//dhaka to chittagong
    dist[16][30]=80;    //dist[30][16]=80;
    dist[30][11]=200;  // dist[11][30]=200;
    dist[11][28]=200;  //dist[28][11]=200;
    dist[28][6]=150;   //dist[6][28]=100;//dhaka to barishal
    dist[11][15]=80;   //dist[15][11]=80;
    dist[30][35]=100;  //dist[35][30]=100;
    dist[35][10]=50;  // dist[10][35]=50;
    dist[10][6]=50;   // dist[6][10]=50;

   //cout<<"Algorithm begins from here:"<<endl;

   for(int k=1; k<=n; k++)
   {
       for(int i=1; i<=n; i++)
       {
           for(int j=1; j<=n; j++)
           {
               if(dist[i][j]>dist[i][k]+dist[k][j])
               {
                  dist[i][j]= dist[i][k]+dist[k][j];

               }
           }
       }
   }



    time[16][41]=40;  //time[41][16]=40;
    time[41][18]=30;  //time[18][41]=30;
    time[18][40]=50;  //time[40][18]=50;
    time[40][29]=40;  //time[29][40]=40;// dhaka to mymensingh
    time[40][5]=40;   //time[5][40]=40;
    time[5][36]=20;   //time[36][5]=20;
    time[36][20]=70;  //time[20][36]=70;
    time[20][1]=30;   //time[1][20]=30;
    time[1][34]=30;   //time[34][1]=30;//dhaka to rajshahi
    time[20][33]=30;  //time[33][20]=30;
    time[33][9]=40;   //time[9][33]=40; // to bogra
    time[20][26]=90;  //time[26][20]=90;
    time[26][4]=30;  //time[4][26]=30;
    time[4][14]=30;   //time[14][4]=30;
    time[14][22]=30;  //time[22][14]=30;
    time[22][24]=40;  //time[24][22]=40;dhaka to khulna via kodaliapur
    time[20][27]=30;  //time[27][20]=30;via kushtia
    time[27][23]=30;  //time[23][27]=40;
    time[23][19]=30;  //time[19][23]=30;
    time[19][22]=30;  // time[22][19]=30;//gopalganj to khulna
    time[19][6]=30;   //time[6][19]=30;// gopalganj to barishal
    time[41][32]=40;  //time[7][32]=40;
    time[32][7]=40;
    time[7][8]=40;   //time[3][8]=50;
    time[8][3]=50;
    time[3][21]=40;  //time[2][21]=40;
    time[21][2]=40;
    time[2][38]=30;  //time[42][38]=40;
    time[38][42]=40;
    time[42][39]=30; //time[39][42]=30;//dhaka to sylhet
    time[18][25]=40; //time[29][25]=25;
    time[25][38]=60; //time[38][25]=60;
    time[25][29]=25;
    time[3][12]=40;  //time[12][3]=40;
    time[12][31]=40;  //time[31][12]=40;
    time[31][15]=40; //time[15][31]=40;
    time[15][17]=20;  //time[37][17]=60;
    time[17][37]=60;
    time[37][13]=40;  // time[11][30]=50;//dhaka to chittagong
    time[16][30]=40;   //time[30][16]=40;
    time[30][11]=50;
    time[11][28]=60;  //time[28][1]=60;
    time[28][6]=60;   //time[6][28]=60;//dhaka to barishal
    time[11][15]=40;  //time[15][11]=40;
    time[30][35]=60;  //time[35][30]=60;
    time[35][10]=30;  //time[10][35]=30;
    time[10][6]=30;   //time[6][10]=30;//dhakaa to barishal via shariatpur


   for(int k=1; k<=n; k++)
   {
       for(int i=1; i<=n; i++)
       {
           for(int j=1; j<=n; j++)
           {
               if(time[i][j]>time[i][k]+time[k][j])
               {
                  time[i][j]= time[i][k]+time[k][j];

               }
           }
       }
   }
    int s,d;
   cout<<"\t\t\t\tFIND THE SHORTEST PATH OR CHEAPEST PATH !!"<<endl<<endl;
   cout<<"ENTER THE CODE OF SOURCE AND DESTINATION: ";
   while
   (cin>>s>>d)
   {
       cout<<endl<<"\t\t\t\tTHE CHEAPEST PATH IS SHOWN  :"<<endl;
    //cheapest path:
     for(int i=1; i<=n; i++)
   {
       if(i==s){
       cout<<"\t\t\t\t"<<i<<" to ";
       for(int j=1; j<=n; j++)
       {
           if(j==d)
           {
           cout<<j;
           if(dist[i][j]==INF){cout<<" NO PATH) ";}
           else
           cout<<"(THE PRICE WILL BE "<<dist[i][j]<<" TAKA) ";
           }
       }
       }
   }
   cout<<endl<<endl<<"\t\t\t\tTHE SHORTEST PATH IS SHOWN : "<<endl;
    for(int i=1; i<=n; i++)
   {
       if(i==s){
       cout<<"\t\t\t\t "<<i<<" to ";
       for(int j=1; j<=n; j++)
       {
           if(j==d)
           {
           cout<<j;
           if(time[i][j]==INF){cout<<" NO PATH ";}
           else
           cout<<"(TIME TO REACH WILL BE "<<time[i][j]<<" MINUTES) ";
           }
       }
       }
   }
   cout<<endl<<endl;
   cout<<"\n\t\t\tPRESS ANY KEY TO PURCHASE ";

    char op;
    cin>>op;
    if(!isblank(op))
    {
        purchase();
    }

   }




}

void routes()
{
    system("cls");
    int x=0;
    cout<<"\t\t-----------------------------------------------------------------------------------"<<endl;
    cout<<"\t\tTHE NAME OF THE ROUTES AND THE TRAIN TRAVELLING IN THOSE ROUTES "<<endl;
    cout<<"\t\t\t\t1.DHAKA TO MYMENSIGNH"<<endl;
    cout<<"\t\t\t\t2.DHAKA TO BOGRA"<<endl;
    cout<<"\t\t\t\t3.DHAKA TO RAJSHAHI"<<endl;
    cout<<"\t\t\t\t4.DHAKA TO SYHLET"<<endl;
    cout<<"\t\t\t\t5.DHAKA TO CHITTAGONG"<<endl;
    cout<<"\t\t\t\t6.DHAKA TO BARISHAL"<<endl;
    cout<<"\t\t\t\t7.DHAKA TO KHULNA"<<endl<<endl<<endl;
    cout<<"\t\t\t\tSELECT ANY ROUTE:  ";
    int choice;
    cin>>choice;

    switch(choice)
    {
    case 1:
          {
          train();
          break;
          }
    case 2:
        {
           train();
          break;
        }
    case 3:
        {
           train();
          break;
        }
    case 4:
          {
           train();
          break;
        }
    case 5:
          {
           train();
          break;
        }
    case 6:
         {
           train();
          break;
        }
    case 7:
          {
           train();
          break;
        }
    default:
        {
        routes();
        break;
        }
    }


}

void train()
{

    cout<<"\n\n\t\t\t\tAVAILABLE TRAINS:"<<endl;
     cout<<"\t\t\t\t1.DHAKA TO MYMENSIGNH"<<endl;
    cout<<"\t\t\t\t2.DHAKA TO SYLHET"<<endl;
    cout<<"\t\t\t\t3.DHAKA TO KHULNA"<<endl;
    cout<<"\t\t\t\t4.DHAKA TO BARISHAL"<<endl;
    cout<<"\t\t\t\t5.DHAKA TO CHITTAGONG"<<endl;
    cout<<"\t\t\t\t6.DHAKA TO RAJSHAHI"<<endl;
    cout<<"\t\t\t\t7.DHAKA TO BOGRA"<<endl<<endl<<endl;
    cout<<"\t\t\t\tSELECT ANY ROUTE:  ";
     int choice;
    cin>>choice;

    switch(choice)
    {
    case 1:
          {
          mymen();
          break;
          }
    case 2:
         {
          syl();
          break;
         }
    case 3:
        {
          khul();
          break;
        }
    case 4:
          {
          bari();
          break;
          }
    case 5:
        {
          chitt();
          break;
        }
    case 6:
         {
          raj();
          break;
         }
    case 7:
         {
          bogra();
          break;
         }
    default:
       {
        system("cls");
         train();
       break;
       }
    }



}


 void mymen()
 {
     cout<<"\t\t\t\tDHAKA TO MYMENSIGNH TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

    cout<<"\t\t\t\t1.DETAILS OF BHROMMO EXPRESS(DHAKA TO MYMENSIGNH)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 7:00 AM"<<endl<<"\t\t\t\tReach At   : 9:40 AM"<<endl;
    int node=42,sum=0,sum1=0, sum2=0,sum3=0;
     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(41,50));
    graph[41].push_back(make_pair(18,50));
    graph[18].push_back(make_pair(40,50));
    graph[40].push_back(make_pair(29,50));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(41,40));
    Time[41].push_back(make_pair(18,30));
    Time[18].push_back(make_pair(40,50));
    Time[40].push_back(make_pair(29,40));

    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum1<<" minutes "<<endl<<endl;
     cout<<"\t\t\t\tTHE ROUTE OF BHROMMO EXPRESS(DHAKA TO MYMENSIGNH) IS SHOWN BELOW:"<<endl;

    vector<string>route;
    route.push_back("Dhaka");
    route.push_back("Tongi");
    route.push_back("Gazipur");
    route.push_back("Tangail");
    route.push_back("Mymensingh");

      for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl<<endl;

     cout<<"\t\t\t\t2.DETAILS OF DALESHWARI EXPRESS(DHAKA TO MYMENSIGNH)"<<endl;
     cout<<"\t\t\t\t--------------------------------------"<<endl;
     cout<<"\t\t\t\tArrival Time: 3:00 PM"<<endl<<"\t\t\t\tReach At   : 5:40 PM"<<endl;

     vector<pair<int, int>>graph2[node];
     graph2[16].push_back(make_pair(41,50));
     graph2[41].push_back(make_pair(18,50));
     graph2[18].push_back(make_pair(25,200));
     graph2[25].push_back(make_pair(29,50));


     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph2[i])
         {
             sum2=sum2+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum2<<" taka "<<endl;

     vector<pair<int,int>>Time2[node];
    Time2[16].push_back(make_pair(41,40));
    Time2[41].push_back(make_pair(18,30));
    Time2[18].push_back(make_pair(25,40));
    Time2[25].push_back(make_pair(29,25));

    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time2[i])
         {
             sum3=sum3+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum3<<" minutes "<<endl;
    cout<<"\t\t\t\tTHE ROUTE OF DALESHWARI EXPRESS(DHAKA TO MYMENSIGNH) IS SHOWN BELOW:"<<endl;

    vector<string>route2;
    route2.push_back("Dhaka");
    route2.push_back("Tongi");
    route2.push_back("Gazipur");
    route2.push_back("Kishorganj");
    route2.push_back("Mymensingh");


      for(int i=0; i< route2.size(); i++)
    {

        if(i==(route2.size()-1))
        {
            cout<<route2[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route2[i]<<"-> ";
        }
        else
        {
           cout<<route2[i]<<"-> ";
        }
    }
    cout<<endl;

   place_code();
 }

 void bogra()
 {
     cout<<"\t\t\t\tDHAKA TO BOGRA TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

    cout<<"\t\t\t\tDETAILS OF JAMUNA EXPRESS(DHAKA TO BOGRA)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 11:00 AM"<<endl<<"\t\t\t\tReach At   : 4:20 PM"<<endl;
    int node=42,sum=0,sum1=0;

     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(41,50));
    graph[41].push_back(make_pair(18,50));
    graph[18].push_back(make_pair(40,50));
    graph[40].push_back(make_pair(5,50));
    graph[5].push_back(make_pair(36,40));
    graph[36].push_back(make_pair(20,50));
    graph[20].push_back(make_pair(33,60));
    graph[33].push_back(make_pair(9,50));


     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(41,40));
    Time[41].push_back(make_pair(18,30));
    Time[18].push_back(make_pair(40,50));
    Time[40].push_back(make_pair(5,40));
    Time[5].push_back(make_pair(36,20));
    Time[36].push_back(make_pair(20,70));
    Time[20].push_back(make_pair(33,30));
    Time[33].push_back(make_pair(9,40));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal  : "<<sum1<<" minutes "<<endl<<endl;

      vector<string>route;

    route.push_back("Dhaka");
    route.push_back("Tongi");
    route.push_back("Gazipur");
    route.push_back("Tangail");
    route.push_back("Bangabandhu bridge");
    route.push_back("Shirajganj");
    route.push_back("Ishwardi");
    route.push_back("Natore");
    route.push_back("Bogra");


    cout<<"\t\t\t\tROUTE OF JAMUNA EXPRESS(DHAKA TO BOGRA) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl;
   place_code();
 }

 void raj()
 {
     cout<<"\t\t\t\tDHAKA TO RAJSHAHI TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

    cout<<"\t\t\t\tDETAILS OF GOMOTI EXPRESS(DHAKA TO RAJSHAHI)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 6:00 am"<<endl<<"\t\t\t\tReach At   : 11:00 am"<<endl;
    int node=42,sum=0,sum1=0;

     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(41,50));
    graph[41].push_back(make_pair(18,50));
    graph[18].push_back(make_pair(40,50));
    graph[40].push_back(make_pair(5,50));
    graph[5].push_back(make_pair(36,40));
    graph[36].push_back(make_pair(20,50));
    graph[20].push_back(make_pair(1,30));
    graph[1].push_back(make_pair(34,50));


     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(41,40));
    Time[41].push_back(make_pair(18,30));
    Time[18].push_back(make_pair(40,50));
    Time[40].push_back(make_pair(5,40));
    Time[5].push_back(make_pair(36,20));
    Time[36].push_back(make_pair(20,70));
    Time[20].push_back(make_pair(1,30));
    Time[33].push_back(make_pair(34,30));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal  : "<<sum1<<" minutes "<<endl<<endl;

      vector<string>route;

    route.push_back("Dhaka");
    route.push_back("Tongi");
    route.push_back("Gazipur");
    route.push_back("Tangail");
    route.push_back("Bangabandhu bridge");
    route.push_back("Shirajganj");
    route.push_back("Ishwardi");
    route.push_back("Abdulpur");
    route.push_back("Rajshahi");


    cout<<"\t\t\t\tROUTE OF GOMOTI EXPRESS(DHAKA TO RAJSHAHI) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl;

    place_code();
 }

 void khul()
 {
      cout<<"\t\t\t\tDHAKA TO KHULNA TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

    cout<<"\t\t\t\t1.DETAILS OF SUNDARBAN EXPRESS(DHAKA TO KHULNA)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 9:00 PM"<<endl<<"\t\t\t\tReach At   : 4:50 PM"<<endl;
    int node=42,sum=0,sum1=0, sum2=0,sum3=0;
     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(41,50));
    graph[41].push_back(make_pair(18,50));
    graph[18].push_back(make_pair(40,50));
    graph[40].push_back(make_pair(5,50));
    graph[5].push_back(make_pair(36,40));
    graph[36].push_back(make_pair(20,50));
    graph[20].push_back(make_pair(26,150));
    graph[26].push_back(make_pair(4,50));
    graph[4].push_back(make_pair(14,50));
    graph[14].push_back(make_pair(22,60));
    graph[22].push_back(make_pair(24,60));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(41,40));
    Time[41].push_back(make_pair(18,30));
    Time[18].push_back(make_pair(40,50));
    Time[40].push_back(make_pair(5,40));
    Time[5].push_back(make_pair(36,20));
    Time[36].push_back(make_pair(20,70));
    Time[20].push_back(make_pair(26,90));
    Time[26].push_back(make_pair(4,30));
    Time[4].push_back(make_pair(14,30));
    Time[14].push_back(make_pair(22,30));
    Time[22].push_back(make_pair(24,40));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal  : "<<sum1<<" minutes "<<endl;

     vector<string>route;

    route.push_back("Dhaka");
    route.push_back("Tongi");
    route.push_back("Gazipur");
    route.push_back("Tangail");
    route.push_back("Bangabandhu bridge");
    route.push_back("Shirajganj");
    route.push_back("Ishwardi");
    route.push_back("Kodaliapara");
    route.push_back("Alamdangal");
    route.push_back("Chuadanga");
    route.push_back("Jessore");
    route.push_back("Khulna");


    cout<<"\t\t\t\tROUTE OF SUNDARBAN EXPRESS(DHAKA TO KHULNA) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl<<endl;


     cout<<"\t\t\t\t2.DETAILS OF ROYAL EXPRESS(DHAKA TO KHULNA)"<<endl;
     cout<<"\t\t\t\t--------------------------------------"<<endl;
     cout<<"\t\t\t\tArrival Time: 2:00 PM"<<endl<<"\t\t\t\tReach At   8:50  PM"<<endl;

     vector<pair<int, int>>graph2[node];
    graph2[16].push_back(make_pair(41,50));
    graph2[41].push_back(make_pair(18,50));
    graph2[18].push_back(make_pair(40,50));
    graph2[40].push_back(make_pair(5,50));
    graph2[5].push_back(make_pair(36,40));
    graph2[36].push_back(make_pair(20,50));
    graph2[20].push_back(make_pair(27,100));
    graph2[27].push_back(make_pair(23,70));
    graph2[23].push_back(make_pair(19,20));
    graph2[19].push_back(make_pair(22,50));
    graph2[22].push_back(make_pair(24,60));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph2[i])
         {
             sum2=sum2+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum2<<" taka "<<endl;

     vector<pair<int,int>>Time2[node];
    Time2[16].push_back(make_pair(41,40));
    Time2[41].push_back(make_pair(18,30));
    Time2[18].push_back(make_pair(40,50));
    Time2[40].push_back(make_pair(5,40));
    Time2[5].push_back(make_pair(36,20));
    Time2[36].push_back(make_pair(20,70));
    Time2[20].push_back(make_pair(27,30));
    Time2[27].push_back(make_pair(23,30));
    Time2[23].push_back(make_pair(19,30));
    Time2[19].push_back(make_pair(22,30));
    Time2[22].push_back(make_pair(24,40));

    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time2[i])
         {
             sum3=sum3+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum3<<" minutes "<<endl;

     vector<string>route2;

    route2.push_back("Dhaka");
    route2.push_back("Tongi");
    route2.push_back("Gazipur");
    route2.push_back("Tangail");
    route2.push_back("Bangabandhu bridge");
    route2.push_back("Shirajganj");
    route2.push_back("Ishwardi");
    route2.push_back("Kushtia");
    route2.push_back("Jhenaida");
    route2.push_back("Gopalganj");
    route2.push_back("Jessore");
    route2.push_back("Khulna");


    cout<<"\t\t\t\tROUTE OF ROYAL EXPRESS(DHAKA TO KHULNA) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route2.size(); i++)
    {

        if(i==(route2.size()-1))
        {
            cout<<route2[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route2[i]<<"-> ";
        }
        else
        {
           cout<<route2[i]<<"-> ";
        }
    }
    cout<<endl<<endl;
   place_code();
 }

 void bari()
 {
      cout<<"\t\t\t\tDHAKA TO BARISHAL TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

cout<<"\t\t\t\t1.DETAILS OF BONGGO EXPRESS(DHAKA TO BARISHAL)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 11:00 PM"<<endl<<"\t\t\t\tReach At   : 2:30 PM"<<endl;
    int node=42,sum=0,sum1=0, sum2=0,sum3=0, sum4=0,sum5=0;
     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(30,80));
    graph[30].push_back(make_pair(11,200));
    graph[11].push_back(make_pair(28,200));
    graph[28].push_back(make_pair(6,100));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(30,40));
    Time[30].push_back(make_pair(11,50));
    Time[11].push_back(make_pair(28,60));
    Time[28].push_back(make_pair(6,60));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum1<<" minutes "<<endl<<endl;

      vector<string>route;

    route.push_back("Dhaka");
    route.push_back("Narayanganj");
    route.push_back("Chandpur");
    route.push_back("Lakshipur");
    route.push_back("Barishal");


    cout<<"\t\t\t\tROUTE OF BONGGO EXPRESS(DHAKA TO BARISHAL) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl<<endl;


cout<<"\t\t\t\t2.DETAILS OF ARIAL EXPRESS(DHAKA TO BARISHAL)"<<endl;
     cout<<"\t\t\t\t--------------------------------------"<<endl;
     cout<<"\t\t\t\tArrival Time: 12:00 AM"<<endl<<"\t\t\t\tReach At   : 6:10  AM"<<endl;

     vector<pair<int, int>>graph2[node];
    graph2[16].push_back(make_pair(41,50));
    graph2[41].push_back(make_pair(18,50));
    graph2[18].push_back(make_pair(40,50));
    graph2[40].push_back(make_pair(5,50));
    graph2[5].push_back(make_pair(36,40));
    graph2[36].push_back(make_pair(20,50));
    graph2[20].push_back(make_pair(27,100));
    graph2[27].push_back(make_pair(23,70));
    graph2[23].push_back(make_pair(19,20));
    graph2[19].push_back(make_pair(6,50));


     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph2[i])
         {
             sum2=sum2+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum2<<" taka "<<endl;

     vector<pair<int,int>>Time2[node];
    Time2[16].push_back(make_pair(41,40));
    Time2[41].push_back(make_pair(18,30));
    Time2[18].push_back(make_pair(40,50));
    Time2[40].push_back(make_pair(5,40));
    Time2[5].push_back(make_pair(36,20));
    Time2[36].push_back(make_pair(20,70));
    Time2[20].push_back(make_pair(27,30));
    Time2[27].push_back(make_pair(23,30));
    Time2[23].push_back(make_pair(19,30));
    Time2[19].push_back(make_pair(6,30));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time2[i])
         {
             sum3=sum3+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum3<<" minutes "<<endl<<endl;

     vector<string>route2;

     route2.push_back("Dhaka");
    route2.push_back("Tongi");
    route2.push_back("Gazipur");
    route2.push_back("Tangail");
    route2.push_back("Bangabandhu bridge");
    route2.push_back("Shirajganj");
    route2.push_back("Ishwardi");
    route2.push_back("Kushtia");
    route2.push_back("Jhenaida");
    route2.push_back("Gopalganj");
    route2.push_back("Barishal");


    cout<<"\t\t\t\tROUTE OF ARIAL EXPRESS(DHAKA TO BARISHAL) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route2.size(); i++)
    {

        if(i==(route2.size()-1))
        {
            cout<<route2[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route2[i]<<"-> ";
        }
        else
        {
           cout<<route2[i]<<"-> ";
        }
    }
    cout<<endl<<endl;


cout<<"\t\t\t\t3.DETAILS OF PAYRA EXPRESS(DHAKA TO BARISHAL)"<<endl;
     cout<<"\t\t\t\t--------------------------------------"<<endl;
     cout<<"\t\t\t\tArrival Time: 3:00 PM"<<endl<<"\t\t\t\tReach At   : 5:40  PM"<<endl;

      vector<pair<int, int>>graph3[node];
    graph3[16].push_back(make_pair(30,80));
    graph3[30].push_back(make_pair(35,100));
    graph3[35].push_back(make_pair(10,50));
    graph3[10].push_back(make_pair(6,50));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph3[i])
         {
             sum4=sum4+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum4<<" taka "<<endl;


     vector<pair<int,int>>Time3[node];
    Time3[16].push_back(make_pair(30,40));
    Time3[30].push_back(make_pair(35,60));
    Time3[35].push_back(make_pair(10,30));
    Time3[10].push_back(make_pair(6,30));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time3[i])
         {
             sum5=sum5+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum5<<" minutes "<<endl<<endl;

     vector<string>route3;

   route3.push_back("Dhaka");
   route3.push_back("Narayanganj");
   route3.push_back("Shariatpur");
   route3.push_back("Chandshi");
   route3.push_back("Barishal");


    cout<<"\t\t\t\tROUTE OF PAYRA EXPRESS(DHAKA TO BARISHAL) IS SHOWN BELOW: "<<endl;
    for(int i=0; i<route3.size(); i++)
    {

        if(i==(route3.size()-1))
        {
            cout<<route3[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route3[i]<<"-> ";
        }
        else
        {
           cout<<route3[i]<<"-> ";
        }
    }
    cout<<endl<<endl;

    place_code();


 }

 void syl()
 {
    cout<<"\t\t\t\tDHAKA TO SYLHET TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

    cout<<"\t\t\t\t1.DETAILS OF SURMA EXPRESS(DHAKA TO SYLHET)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 8:00 AM"<<endl<<"\t\t\t\tReach At   : 12:00 PM"<<endl;
    int node=43,sum=0,sum1=0, sum2=0,sum3=0;
     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(41,50));
    graph[41].push_back(make_pair(18,50));
    graph[18].push_back(make_pair(25,200));
    graph[25].push_back(make_pair(38,100));
    graph[38].push_back(make_pair(42,30));
    graph[42].push_back(make_pair(39,50));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(41,40));
    Time[41].push_back(make_pair(18,30));
    Time[18].push_back(make_pair(25,40));
    Time[25].push_back(make_pair(38,60));
    Time[38].push_back(make_pair(42,40));
    Time[42].push_back(make_pair(39,30));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum1<<" minutes "<<endl<<endl;

     vector<string>route;

    route.push_back("Dhaka");
    route.push_back("Tongi");
    route.push_back("Gazipur");
    route.push_back("Kishorganj");
    route.push_back("Sreemangal");
    route.push_back("Kuluara");
    route.push_back("Sylhet");

    cout<<"\t\t\t\tROUTE OF SURMA EXPRESS(DHAKA TO SYLHET) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl<<endl;

     cout<<"\t\t\t\t2.DETAILS OF JADUKATA EXPRESS(DHAKA TO SYLHET)"<<endl;
     cout<<"\t\t\t\t--------------------------------------"<<endl;
     cout<<"\t\t\t\tArrival Time: 12:00 AM"<<endl<<"\t\t\t\tReach At   : 6:30  AM"<<endl;

     vector<pair<int, int>>graph2[node];
    graph2[16].push_back(make_pair(41,50));
    graph2[41].push_back(make_pair(32,50));
    graph2[32].push_back(make_pair(7,40));
    graph2[7].push_back(make_pair(8,60));
    graph2[8].push_back(make_pair(3,40));
    graph2[3].push_back(make_pair(21,50));
    graph2[21].push_back(make_pair(2,40));
    graph2[2].push_back(make_pair(38,60));
    graph2[38].push_back(make_pair(42,30));
    graph2[42].push_back(make_pair(39,50));



     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph2[i])
         {
             sum2=sum2+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum2<<" taka "<<endl;

     vector<pair<int,int>>Time2[node];
    Time2[16].push_back(make_pair(41,40));
    Time2[41].push_back(make_pair(32,40));
    Time2[32].push_back(make_pair(7,40));
    Time2[7].push_back(make_pair(8,40));
    Time2[8].push_back(make_pair(3,50));
    Time2[3].push_back(make_pair(21,40));
    Time2[21].push_back(make_pair(2,40));
    Time2[2].push_back(make_pair(38,30));
    Time2[38].push_back(make_pair(42,40));
    Time2[42].push_back(make_pair(39,30));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time2[i])
         {
             sum3=sum3+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum3<<" minutes "<<endl<<endl;
      vector<string>route2;

    route2.push_back("Dhaka");
    route2.push_back("Tongi");
    route2.push_back("Narshingdi");
    route2.push_back("Bhairab");
    route2.push_back("Bhrahmanbaria");
    route2.push_back("Akura_railway");
    route2.push_back("Jagadishpur");
    route2.push_back("Agartal");
    route2.push_back("Sreemangal");
    route2.push_back("Kuluara");
    route2.push_back("Sylhet");


    cout<<"\t\t\t\tROUTE OF JADUKATA EXPRESS(DHAKA TO SYLHET) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route2.size(); i++)
    {

        if(i==(route2.size()-1))
        {
            cout<<route2[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route2[i]<<"-> ";
        }
        else
        {
           cout<<route2[i]<<"-> ";
        }
    }
    cout<<endl;
    place_code();
 }

 void chitt()
 {
     cout<<"\t\t\t\tDHAKA TO CHITTAGONG TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

    cout<<"\t\t\t\t1.DETAILS OF KORNOFULI EXPRESS(DHAKA TO CHITTAGONG)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 6:00 AM"<<endl<<"\t\t\t\tReach At   : 10:10 AM"<<endl;
    int node=42,sum=0,sum1=0, sum2=0,sum3=0;
     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(30,80));
    graph[30].push_back(make_pair(11,200));
    graph[11].push_back(make_pair(15,80));
    graph[15].push_back(make_pair(17,40));
    graph[17].push_back(make_pair(37,80));
    graph[37].push_back(make_pair(13,80));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(30,40));
    Time[30].push_back(make_pair(11,50));
    Time[11].push_back(make_pair(15,40));
    Time[15].push_back(make_pair(17,20));
    Time[17].push_back(make_pair(37,60));
    Time[37].push_back(make_pair(13,40));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum1<<" minutes "<<endl<<endl;

      vector<string>route;

    route.push_back("Dhaka");
    route.push_back("Narayanganj");
    route.push_back("Chandpur");
    route.push_back("Cumilla");
    route.push_back("Feni");
    route.push_back("Sitakunda");
    route.push_back("Chittagong");

    cout<<"\t\t\t\tROUTE OF KORNOFULI EXPRESS(DHAKA TO CHITTAGONG) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl;


     cout<<"\t\t\t\t2.DETAILS OF LUSAI EXPRESS(DHAKA TO CHITTAGONG)"<<endl;
     cout<<"\t\t\t\t--------------------------------------"<<endl;
     cout<<"\t\t\t\tArrival Time: 12:00 AM"<<endl<<"\t\t\t\tReach At   : 7:30  AM"<<endl;

     vector<pair<int, int>>graph2[node];
    graph2[16].push_back(make_pair(41,50));
    graph2[41].push_back(make_pair(32,50));
    graph2[32].push_back(make_pair(7,40));
    graph2[7].push_back(make_pair(8,60));
    graph2[8].push_back(make_pair(3,40));
    graph2[3].push_back(make_pair(12,60));
    graph2[12].push_back(make_pair(31,60));
    graph2[31].push_back(make_pair(15,50));
    graph2[15].push_back(make_pair(17,40));
    graph2[17].push_back(make_pair(37,80));
    graph2[37].push_back(make_pair(13,80));



     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph2[i])
         {
             sum2=sum2+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum2<<" taka "<<endl;

     vector<pair<int,int>>Time2[node];
     Time2[16].push_back(make_pair(41,40));
    Time2[41].push_back(make_pair(32,40));
    Time2[32].push_back(make_pair(7,40));
    Time2[7].push_back(make_pair(8,40));
    Time2[8].push_back(make_pair(3,50));
    Time2[3].push_back(make_pair(12,40));
    Time2[12].push_back(make_pair(31,40));
    Time2[31].push_back(make_pair(15,40));
    Time2[15].push_back(make_pair(17,20));
    Time2[17].push_back(make_pair(37,60));
    Time2[37].push_back(make_pair(13,40));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time2[i])
         {
             sum3=sum3+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum3<<" minutes "<<endl<<endl;

       vector<string>route2;

    route2.push_back("Dhaka");
    route2.push_back("Tongi");
    route2.push_back("Narshingdi");
    route2.push_back("Bhairab");
    route2.push_back("Bhrahmanbaria");
    route2.push_back("Akura_railway");
    route2.push_back("Chapia");
    route2.push_back("Narayanpur");
    route2.push_back("Cumilla");
    route2.push_back("Feni");
    route2.push_back("Sitakunda");
    route2.push_back("Chittagong");

    cout<<"\t\t\t\tROUTE OF LUSAI EXPRESS(DHAKA TO CHITTAGONG) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route2.size(); i++)
    {

        if(i==(route2.size()-1))
        {
            cout<<route2[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route2[i]<<"-> ";
        }
        else
        {
           cout<<route2[i]<<"-> ";
        }
    }
    cout<<endl;
    place_code();
 }
void purchase()
{
    cout<<"\t\t\t\tTicket of which train do you want to purchase?"<<endl;
    cout<<"\t\t\t\t1.BHROMMO EXPRESS"<<endl;
    cout<<"\t\t\t\t2.DHALESHWARI EXPRESS"<<endl;
    cout<<"\t\t\t\t3.JAMUNA EXPRESS"<<endl;
    cout<<"\t\t\t\t4.GOMOTI EXPRESS"<<endl;
    cout<<"\t\t\t\t5.SUNDARBAN EXPRESS"<<endl;
    cout<<"\t\t\t\t6.ROYAL EXPRESS"<<endl;
    cout<<"\t\t\t\t7.BONGGO EXPRESS"<<endl;
    cout<<"\t\t\t\t8.ARIAL EXPRESS"<<endl;
    cout<<"\t\t\t\t9.PAYRA EXPRESS"<<endl;
    cout<<"\t\t\t\t10.SURMA EXPRESS"<<endl;
    cout<<"\t\t\t\t11.JADUKATA EXPRESS"<<endl;
    cout<<"\t\t\t\t12.KORNOFULI EXPRESS"<<endl;
    cout<<"\t\t\t\t13.LUSAI EXPRESS"<<endl;

    int num;
    cin>>num;
    switch (num)
    {
    case 1:
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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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

         cout<<"\t\t\t\tDHAKA TO MYMENSIGNH TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

    cout<<"\t\t\t\t1.DETAILS OF BHROMMO EXPRESS(DHAKA TO MYMENSIGNH)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 7:00 AM"<<endl<<"\t\t\t\tReach At   : 9:40 AM"<<endl;
    int node=42,sum=0,sum1=0;
     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(41,50));
    graph[41].push_back(make_pair(18,50));
    graph[18].push_back(make_pair(40,50));
    graph[40].push_back(make_pair(29,50));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(41,40));
    Time[41].push_back(make_pair(18,30));
    Time[18].push_back(make_pair(40,50));
    Time[40].push_back(make_pair(29,40));

    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum1<<" minutes "<<endl<<endl;
     cout<<"\t\t\t\tTHE ROUTE OF BHROMMO EXPRESS(DHAKA TO MYMENSIGNH) IS SHOWN BELOW:"<<endl;

    vector<string>route;
    route.push_back("Dhaka");
    route.push_back("Tongi");
    route.push_back("Gazipur");
    route.push_back("Tangail");
    route.push_back("Mymensingh");

      for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl<<endl;
    int cost=j*sum;
     cout<<"\t\t\t\tThe total cost is :"<<cost<<endl;
       cout<<"\t\t\t\tDo you want to purchase?(Y?N)" <<endl;
       char ch;
       cin>>ch;
       if(ch=='Y')
       {
           cout<<"\t\t\t\tPurchase is confirmed"<<endl;
           main();
           exit(0);
         break;
       }
       else if(ch=='N')
       {
           purchase();

       }
        break;
        }


    case 2:
        {
         int node=42,sum=0,sum1=0, sum2=0,sum3=0;
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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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

        cout<<"\t\t\t\t1.DETAILS OF DALESHWARI EXPRESS(DHAKA TO MYMENSIGNH)"<<endl;
     cout<<"\t\t\t\t--------------------------------------"<<endl;
     cout<<"\t\t\t\tArrival Time: 3:00 PM"<<endl<<"\t\t\t\tReach At   : 5:40 PM"<<endl;

     vector<pair<int, int>>graph2[node];
     graph2[16].push_back(make_pair(41,50));
     graph2[41].push_back(make_pair(18,50));
     graph2[18].push_back(make_pair(25,200));
     graph2[25].push_back(make_pair(29,50));


     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph2[i])
         {
             sum2=sum2+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum2<<" taka "<<endl;

     vector<pair<int,int>>Time2[node];
    Time2[16].push_back(make_pair(41,40));
    Time2[41].push_back(make_pair(18,30));
    Time2[18].push_back(make_pair(25,40));
    Time2[25].push_back(make_pair(29,25));

    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time2[i])
         {
             sum3=sum3+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum3<<" minutes "<<endl;
    cout<<"\t\t\t\tTHE ROUTE OF DALESHWARI EXPRESS(DHAKA TO MYMENSIGNH) IS SHOWN BELOW:"<<endl;

    vector<string>route2;
    route2.push_back("Dhaka");
    route2.push_back("Tongi");
    route2.push_back("Gazipur");
    route2.push_back("Kishorganj");
    route2.push_back("Mymensingh");


      for(int i=0; i< route2.size(); i++)
    {

        if(i==(route2.size()-1))
        {
            cout<<route2[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route2[i]<<"-> ";
        }
        else
        {
           cout<<route2[i]<<"-> ";
        }
    }
    cout<<endl;
       int cost=j*sum2;
     cout<<"\t\t\t\tThe total cost is :"<<cost<<endl;
      cout<<"\t\t\t\tDo you want to purchase?(Y?N)" <<endl;
       char ch;
       cin>>ch;
       if(ch=='Y')
       {
           cout<<"\t\t\t\tPurchase is confirmed"<<endl;
           main();
           exit(0);
       }
       else if(ch=='N')
       {
           purchase();
       }
       break;
        }

    case 3:
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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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

         cout<<"\t\t\t\tDHAKA TO BOGRA TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

    cout<<"\t\t\t\tDETAILS OF JAMUNA EXPRESS(DHAKA TO BOGRA)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 11:00 AM"<<endl<<"\t\t\t\tReach At   : 4:20 PM"<<endl;
    int node=42,sum=0,sum1=0;

     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(41,50));
    graph[41].push_back(make_pair(18,50));
    graph[18].push_back(make_pair(40,50));
    graph[40].push_back(make_pair(5,50));
    graph[5].push_back(make_pair(36,40));
    graph[36].push_back(make_pair(20,50));
    graph[20].push_back(make_pair(33,60));
    graph[33].push_back(make_pair(9,50));


     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(41,40));
    Time[41].push_back(make_pair(18,30));
    Time[18].push_back(make_pair(40,50));
    Time[40].push_back(make_pair(5,40));
    Time[5].push_back(make_pair(36,20));
    Time[36].push_back(make_pair(20,70));
    Time[20].push_back(make_pair(33,30));
    Time[33].push_back(make_pair(9,40));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal  : "<<sum1<<" minutes "<<endl<<endl;

      vector<string>route;

    route.push_back("Dhaka");
    route.push_back("Tongi");
    route.push_back("Gazipur");
    route.push_back("Tangail");
    route.push_back("Bangabandhu bridge");
    route.push_back("Shirajganj");
    route.push_back("Ishwardi");
    route.push_back("Natore");
    route.push_back("Bogra");


    cout<<"\t\t\t\tROUTE OF JAMUNA EXPRESS(DHAKA TO BOGRA) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl;

     int cost=j*sum;
     cout<<"\t\t\t\tThe total cost is :"<<cost<<endl;
      cout<<"\t\t\t\tDo you want to purchase?(Y?N)" <<endl;
       char ch;
       cin>>ch;
       if(ch=='Y')
       {
           cout<<"\t\t\t\tPurchase is confirmed"<<endl;
           main();
           exit(0);
       }
        else if(ch=='N')
       {
           purchase();
       }
        break;
        }

    case 4:
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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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

        cout<<"\t\t\t\tDHAKA TO RAJSHAHI TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

    cout<<"\t\t\t\tDETAILS OF GOMOTI EXPRESS(DHAKA TO RAJSHAHI)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 6:00 am"<<endl<<"\t\t\t\tReach At   : 11:00 am"<<endl;
    int node=42,sum=0,sum1=0;

     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(41,50));
    graph[41].push_back(make_pair(18,50));
    graph[18].push_back(make_pair(40,50));
    graph[40].push_back(make_pair(5,50));
    graph[5].push_back(make_pair(36,40));
    graph[36].push_back(make_pair(20,50));
    graph[20].push_back(make_pair(1,30));
    graph[1].push_back(make_pair(34,50));


     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(41,40));
    Time[41].push_back(make_pair(18,30));
    Time[18].push_back(make_pair(40,50));
    Time[40].push_back(make_pair(5,40));
    Time[5].push_back(make_pair(36,20));
    Time[36].push_back(make_pair(20,70));
    Time[20].push_back(make_pair(1,30));
    Time[33].push_back(make_pair(34,30));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal  : "<<sum1<<" minutes "<<endl<<endl;

      vector<string>route;

    route.push_back("Dhaka");
    route.push_back("Tongi");
    route.push_back("Gazipur");
    route.push_back("Tangail");
    route.push_back("Bangabandhu bridge");
    route.push_back("Shirajganj");
    route.push_back("Ishwardi");
    route.push_back("Abdulpur");
    route.push_back("Rajshahi");


    cout<<"\t\t\t\tROUTE OF GOMOTI EXPRESS(DHAKA TO RAJSHAHI) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl;

     int cost=j*sum;
     cout<<"\t\t\t\tThe total cost is :"<<cost<<endl;
       cout<<"\t\t\t\tDo you want to purchase?(Y?N)" <<endl;
       char ch;
       cin>>ch;
       if(ch=='Y')
       {
           cout<<"\t\t\t\tPurchase is confirmed"<<endl;
            main();
           exit(0);
       }
       else if(ch=='N')
       {
           purchase();
       }
       break;
        }

    case 5:
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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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

          cout<<"\t\t\t\tDHAKA TO KHULNA TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

    cout<<"\t\t\t\t1.DETAILS OF SUNDARBAN EXPRESS(DHAKA TO KHULNA)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 9:00 PM"<<endl<<"\t\t\t\tReach At   : 4:50 PM"<<endl;
    int node=42,sum=0,sum1=0, sum2=0,sum3=0;
     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(41,50));
    graph[41].push_back(make_pair(18,50));
    graph[18].push_back(make_pair(40,50));
    graph[40].push_back(make_pair(5,50));
    graph[5].push_back(make_pair(36,40));
    graph[36].push_back(make_pair(20,50));
    graph[20].push_back(make_pair(26,150));
    graph[26].push_back(make_pair(4,50));
    graph[4].push_back(make_pair(14,50));
    graph[14].push_back(make_pair(22,60));
    graph[22].push_back(make_pair(24,60));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(41,40));
    Time[41].push_back(make_pair(18,30));
    Time[18].push_back(make_pair(40,50));
    Time[40].push_back(make_pair(5,40));
    Time[5].push_back(make_pair(36,20));
    Time[36].push_back(make_pair(20,70));
    Time[20].push_back(make_pair(26,90));
    Time[26].push_back(make_pair(4,30));
    Time[4].push_back(make_pair(14,30));
    Time[14].push_back(make_pair(22,30));
    Time[22].push_back(make_pair(24,40));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal  : "<<sum1<<" minutes "<<endl;

     vector<string>route;

    route.push_back("Dhaka");
    route.push_back("Tongi");
    route.push_back("Gazipur");
    route.push_back("Tangail");
    route.push_back("Bangabandhu bridge");
    route.push_back("Shirajganj");
    route.push_back("Ishwardi");
    route.push_back("Kodaliapara");
    route.push_back("Alamdangal");
    route.push_back("Chuadanga");
    route.push_back("Jessore");
    route.push_back("Khulna");


    cout<<"\t\t\t\tROUTE OF SUNDARBAN EXPRESS(DHAKA TO KHULNA) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl<<endl;
     int cost=j*sum;
     cout<<"\t\t\t\tThe total cost is :"<<cost<<endl;
       cout<<"\t\t\t\tDo you want to purchase?(Y?N)" <<endl;
       char ch;
       cin>>ch;
       if(ch=='Y')
       {
           cout<<"\t\t\t\tPurchase is confirmed"<<endl;
            main();
           exit(0);
       }
        else if(ch=='N')
       {
           purchase();
       }
       break;
        }

    case 6:
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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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
     int node=42,sum=0,sum1=0, sum2=0,sum3=0;

      cout<<"\t\t\t\t1.DETAILS OF ROYAL EXPRESS(DHAKA TO KHULNA)"<<endl;
     cout<<"\t\t\t\t--------------------------------------"<<endl;
     cout<<"\t\t\t\tArrival Time: 2:00 PM"<<endl<<"\t\t\t\tReach At   8:50  PM"<<endl;

     vector<pair<int, int>>graph2[node];
    graph2[16].push_back(make_pair(41,50));
    graph2[41].push_back(make_pair(18,50));
    graph2[18].push_back(make_pair(40,50));
    graph2[40].push_back(make_pair(5,50));
    graph2[5].push_back(make_pair(36,40));
    graph2[36].push_back(make_pair(20,50));
    graph2[20].push_back(make_pair(27,100));
    graph2[27].push_back(make_pair(23,70));
    graph2[23].push_back(make_pair(19,20));
    graph2[19].push_back(make_pair(22,50));
    graph2[22].push_back(make_pair(24,60));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph2[i])
         {
             sum2=sum2+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum2<<" taka "<<endl;

     vector<pair<int,int>>Time2[node];
    Time2[16].push_back(make_pair(41,40));
    Time2[41].push_back(make_pair(18,30));
    Time2[18].push_back(make_pair(40,50));
    Time2[40].push_back(make_pair(5,40));
    Time2[5].push_back(make_pair(36,20));
    Time2[36].push_back(make_pair(20,70));
    Time2[20].push_back(make_pair(27,30));
    Time2[27].push_back(make_pair(23,30));
    Time2[23].push_back(make_pair(19,30));
    Time2[19].push_back(make_pair(22,30));
    Time2[22].push_back(make_pair(24,40));

    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time2[i])
         {
             sum3=sum3+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum3<<" minutes "<<endl;

     vector<string>route2;

    route2.push_back("Dhaka");
    route2.push_back("Tongi");
    route2.push_back("Gazipur");
    route2.push_back("Tangail");
    route2.push_back("Bangabandhu bridge");
    route2.push_back("Shirajganj");
    route2.push_back("Ishwardi");
    route2.push_back("Kushtia");
    route2.push_back("Jhenaida");
    route2.push_back("Gopalganj");
    route2.push_back("Jessore");
    route2.push_back("Khulna");


    cout<<"\t\t\t\tROUTE OF ROYAL EXPRESS(DHAKA TO KHULNA) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route2.size(); i++)
    {

        if(i==(route2.size()-1))
        {
            cout<<route2[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route2[i]<<"-> ";
        }
        else
        {
           cout<<route2[i]<<"-> ";
        }
    }
    cout<<endl<<endl;

    int cost=j*sum2;
     cout<<"\t\t\t\tThe total cost is :"<<cost<<endl;
       cout<<"\t\t\t\tDo you want to purchase?(Y?N)" <<endl;
       char ch;
       cin>>ch;
       if(ch=='Y')
       {
           cout<<"\t\t\t\tPurchase is confirmed"<<endl;
           main();
           exit(0);
       }
       else if(ch=='N')
       {
           purchase();
       }
        break;
        }

    case 7:
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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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

      cout<<"\t\t\t\tDHAKA TO BARISHAL TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

cout<<"\t\t\t\t1.DETAILS OF BONGGO EXPRESS(DHAKA TO BARISHAL)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 11:00 PM"<<endl<<"\t\t\t\tReach At   : 2:30 PM"<<endl;
    int node=42,sum=0,sum1=0, sum2=0,sum3=0, sum4=0,sum5=0;
     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(30,80));
    graph[30].push_back(make_pair(11,200));
    graph[11].push_back(make_pair(28,200));
    graph[28].push_back(make_pair(6,100));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(30,40));
    Time[30].push_back(make_pair(11,50));
    Time[11].push_back(make_pair(28,60));
    Time[28].push_back(make_pair(6,60));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum1<<" minutes "<<endl<<endl;

      vector<string>route;

    route.push_back("Dhaka");
    route.push_back("Narayanganj");
    route.push_back("Chandpur");
    route.push_back("Lakshipur");
    route.push_back("Barishal");


    cout<<"\t\t\t\tROUTE OF BONGGO EXPRESS(DHAKA TO BARISHAL) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl<<endl;
      int cost=j*sum;
     cout<<"\t\t\t\tThe total cost is :"<<cost<<endl;
      cout<<"\t\t\t\tDo you want to purchase?(Y?N)" <<endl;
       char ch;
       cin>>ch;
       if(ch=='Y')
       {
           cout<<"\t\t\t\tPurchase is confirmed"<<endl;
            main();
           exit(0);
       }
        else if(ch=='N')
       {
           purchase();
       }
       break;
        }

    case 8:
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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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
 int node=42,sum=0,sum1=0, sum2=0,sum3=0, sum4=0,sum5=0;

 cout<<"\t\t\t\t1.DETAILS OF ARIAL EXPRESS(DHAKA TO BARISHAL)"<<endl;
     cout<<"\t\t\t\t--------------------------------------"<<endl;
     cout<<"\t\t\t\tArrival Time: 12:00 AM"<<endl<<"\t\t\t\tReach At   : 6:10  AM"<<endl;

     vector<pair<int, int>>graph2[node];
    graph2[16].push_back(make_pair(41,50));
    graph2[41].push_back(make_pair(18,50));
    graph2[18].push_back(make_pair(40,50));
    graph2[40].push_back(make_pair(5,50));
    graph2[5].push_back(make_pair(36,40));
    graph2[36].push_back(make_pair(20,50));
    graph2[20].push_back(make_pair(27,100));
    graph2[27].push_back(make_pair(23,70));
    graph2[23].push_back(make_pair(19,20));
    graph2[19].push_back(make_pair(6,50));


     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph2[i])
         {
             sum2=sum2+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum2<<" taka "<<endl;

     vector<pair<int,int>>Time2[node];
    Time2[16].push_back(make_pair(41,40));
    Time2[41].push_back(make_pair(18,30));
    Time2[18].push_back(make_pair(40,50));
    Time2[40].push_back(make_pair(5,40));
    Time2[5].push_back(make_pair(36,20));
    Time2[36].push_back(make_pair(20,70));
    Time2[20].push_back(make_pair(27,30));
    Time2[27].push_back(make_pair(23,30));
    Time2[23].push_back(make_pair(19,30));
    Time2[19].push_back(make_pair(6,30));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time2[i])
         {
             sum3=sum3+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum3<<" minutes "<<endl<<endl;

     vector<string>route2;

     route2.push_back("Dhaka");
    route2.push_back("Tongi");
    route2.push_back("Gazipur");
    route2.push_back("Tangail");
    route2.push_back("Bangabandhu bridge");
    route2.push_back("Shirajganj");
    route2.push_back("Ishwardi");
    route2.push_back("Kushtia");
    route2.push_back("Jhenaida");
    route2.push_back("Gopalganj");
    route2.push_back("Barishal");


    cout<<"\t\t\t\tROUTE OF ARIAL EXPRESS(DHAKA TO BARISHAL) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route2.size(); i++)
    {

        if(i==(route2.size()-1))
        {
            cout<<route2[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route2[i]<<"-> ";
        }
        else
        {
           cout<<route2[i]<<"-> ";
        }
    }
    cout<<endl<<endl;

   int cost=j*sum2;
     cout<<"\t\t\t\tThe total cost is :"<<cost<<endl;
      cout<<"\t\t\t\tDo you want to purchase?(Y?N)" <<endl;
       char ch;
       cin>>ch;
       if(ch=='Y')
       {
           cout<<"\t\t\t\tPurchase is confirmed"<<endl;
            main();
           exit(0);
       }
        else if(ch=='N')
       {
           purchase();
       }
        break;
        }

    case 9:
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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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
        int node=42,sum=0,sum1=0, sum2=0,sum3=0, sum4=0,sum5=0;
        cout<<"\t\t\t\t1.DETAILS OF PAYRA EXPRESS(DHAKA TO BARISHAL)"<<endl;
     cout<<"\t\t\t\t--------------------------------------"<<endl;
     cout<<"\t\t\t\tArrival Time: 3:00 PM"<<endl<<"\t\t\t\tReach At   : 5:40  PM"<<endl;

      vector<pair<int, int>>graph3[node];
    graph3[16].push_back(make_pair(30,80));
    graph3[30].push_back(make_pair(35,100));
    graph3[35].push_back(make_pair(10,50));
    graph3[10].push_back(make_pair(6,50));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph3[i])
         {
             sum4=sum4+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum4<<" taka "<<endl;


     vector<pair<int,int>>Time3[node];
    Time3[16].push_back(make_pair(30,40));
    Time3[30].push_back(make_pair(35,60));
    Time3[35].push_back(make_pair(10,30));
    Time3[10].push_back(make_pair(6,30));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time3[i])
         {
             sum5=sum5+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum5<<" minutes "<<endl<<endl;

     vector<string>route3;

   route3.push_back("Dhaka");
   route3.push_back("Narayanganj");
   route3.push_back("Shariatpur");
   route3.push_back("Chandshi");
   route3.push_back("Barishal");


    cout<<"\t\t\t\tROUTE OF PAYRA EXPRESS(DHAKA TO BARISHAL) IS SHOWN BELOW: "<<endl;
    for(int i=0; i<route3.size(); i++)
    {

        if(i==(route3.size()-1))
        {
            cout<<route3[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route3[i]<<"-> ";
        }
        else
        {
           cout<<route3[i]<<"-> ";
        }
    }
    cout<<endl<<endl;

 int cost=j*sum4;
     cout<<"\t\t\t\tThe total cost is :"<<cost<<endl;
      cout<<"\t\t\t\tDo you want to purchase?(Y?N)" <<endl;
       char ch;
       cin>>ch;
       if(ch=='Y')
       {
           cout<<"\t\t\t\tPurchase is confirmed"<<endl;
            main();
           exit(0);
       }
        else if(ch=='N')
       {
           purchase();
       }
       break;
        }

    case 10:
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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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

        cout<<"\t\t\t\tDHAKA TO SYLHET TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

    cout<<"\t\t\t\t1.DETAILS OF SURMA EXPRESS(DHAKA TO SYLHET)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 8:00 AM"<<endl<<"\t\t\t\tReach At   : 12:00 PM"<<endl;
    int node=43,sum=0,sum1=0, sum2=0,sum3=0;
     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(41,50));
    graph[41].push_back(make_pair(18,50));
    graph[18].push_back(make_pair(25,200));
    graph[25].push_back(make_pair(38,100));
    graph[38].push_back(make_pair(42,30));
    graph[42].push_back(make_pair(39,50));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(41,40));
    Time[41].push_back(make_pair(18,30));
    Time[18].push_back(make_pair(25,40));
    Time[25].push_back(make_pair(38,60));
    Time[38].push_back(make_pair(42,40));
    Time[42].push_back(make_pair(39,30));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum1<<" minutes "<<endl<<endl;

     vector<string>route;

    route.push_back("Dhaka");
    route.push_back("Tongi");
    route.push_back("Gazipur");
    route.push_back("Kishorganj");
    route.push_back("Sreemangal");
    route.push_back("Kuluara");
    route.push_back("Sylhet");

    cout<<"\t\t\t\tROUTE OF SURMA EXPRESS(DHAKA TO SYLHET) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl<<endl;
    int cost=j*sum;
     cout<<"\t\t\t\tThe total cost is :"<<cost<<endl;
       cout<<"\t\t\t\tDo you want to purchase?(Y?N)" <<endl;
       char ch;
       cin>>ch;
       if(ch=='Y')
       {
           cout<<"\t\t\t\tPurchase is confirmed"<<endl;
           main();
           exit(0);
       }
        else if(ch=='N')
       {
           purchase();
       }
       break;
        }

    case 11:
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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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
int node=43,sum=0,sum1=0, sum2=0,sum3=0;
cout<<"\t\t\t\t1.DETAILS OF JADUKATA EXPRESS(DHAKA TO SYLHET)"<<endl;
     cout<<"\t\t\t\t--------------------------------------"<<endl;
     cout<<"\t\t\t\tArrival Time: 12:00 AM"<<endl<<"\t\t\t\tReach At   : 6:30  AM"<<endl;

     vector<pair<int, int>>graph2[node];
    graph2[16].push_back(make_pair(41,50));
    graph2[41].push_back(make_pair(32,50));
    graph2[32].push_back(make_pair(7,40));
    graph2[7].push_back(make_pair(8,60));
    graph2[8].push_back(make_pair(3,40));
    graph2[3].push_back(make_pair(21,50));
    graph2[21].push_back(make_pair(2,40));
    graph2[2].push_back(make_pair(38,60));
    graph2[38].push_back(make_pair(42,30));
    graph2[42].push_back(make_pair(39,50));



     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph2[i])
         {
             sum2=sum2+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum2<<" taka "<<endl;

     vector<pair<int,int>>Time2[node];
    Time2[16].push_back(make_pair(41,40));
    Time2[41].push_back(make_pair(32,40));
    Time2[32].push_back(make_pair(7,40));
    Time2[7].push_back(make_pair(8,40));
    Time2[8].push_back(make_pair(3,50));
    Time2[3].push_back(make_pair(21,40));
    Time2[21].push_back(make_pair(2,40));
    Time2[2].push_back(make_pair(38,30));
    Time2[38].push_back(make_pair(42,40));
    Time2[42].push_back(make_pair(39,30));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time2[i])
         {
             sum3=sum3+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum3<<" minutes "<<endl<<endl;
      vector<string>route2;

    route2.push_back("Dhaka");
    route2.push_back("Tongi");
    route2.push_back("Narshingdi");
    route2.push_back("Bhairab");
    route2.push_back("Bhrahmanbaria");
    route2.push_back("Akura_railway");
    route2.push_back("Jagadishpur");
    route2.push_back("Agartal");
    route2.push_back("Sreemangal");
    route2.push_back("Kuluara");
    route2.push_back("Sylhet");


    cout<<"\t\t\t\tROUTE OF JADUKATA EXPRESS(DHAKA TO SYLHET) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route2.size(); i++)
    {

        if(i==(route2.size()-1))
        {
            cout<<route2[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route2[i]<<"-> ";
        }
        else
        {
           cout<<route2[i]<<"-> ";
        }
    }
    cout<<endl;
    int cost=j*sum2;
     cout<<"\t\t\t\tThe total cost is :"<<cost<<endl;
      cout<<"\t\t\t\tDo you want to purchase?(Y?N)" <<endl;
       char ch;
       cin>>ch;
       if(ch=='Y')
       {
           cout<<"\t\t\t\tPurchase is confirmed"<<endl;
            main();
           exit(0);
       }
        else if(ch=='N')
       {
           purchase();
       }
       break;
        }

    case 12:
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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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
cout<<"\t\t\t\tDHAKA TO CHITTAGONG TRAINS AVAILABLE"<<endl;
    cout<<"\t\t\t\t______________________________________"<<endl;

    cout<<"\t\t\t\t1.DETAILS OF KORNOFULI EXPRESS(DHAKA TO CHITTAGONG)"<<endl;
    cout<<"\t\t\t\t--------------------------------------"<<endl;
    cout<<"\t\t\t\tArrival Time: 6:00 AM"<<endl<<"\t\t\t\tReach At   : 10:10 AM"<<endl;
    int node=42,sum=0,sum1=0, sum2=0,sum3=0;
     vector<pair<int, int>>graph[node];
     // for cheapest path
    graph[16].push_back(make_pair(30,80));
    graph[30].push_back(make_pair(11,200));
    graph[11].push_back(make_pair(15,80));
    graph[15].push_back(make_pair(17,40));
    graph[17].push_back(make_pair(37,80));
    graph[37].push_back(make_pair(13,80));

     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph[i])
         {
             sum=sum+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum<<" Taka "<<endl;

    vector<pair<int, int>>Time[node];
    Time[16].push_back(make_pair(30,40));
    Time[30].push_back(make_pair(11,50));
    Time[11].push_back(make_pair(15,40));
    Time[15].push_back(make_pair(17,20));
    Time[17].push_back(make_pair(37,60));
    Time[37].push_back(make_pair(13,40));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time[i])
         {
             sum1=sum1+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum1<<" minutes "<<endl<<endl;

      vector<string>route;

    route.push_back("Dhaka");
    route.push_back("Narayanganj");
    route.push_back("Chandpur");
    route.push_back("Cumilla");
    route.push_back("Feni");
    route.push_back("Sitakunda");
    route.push_back("Chittagong");

    cout<<"\t\t\t\tROUTE OF KORNOFULI EXPRESS(DHAKA TO CHITTAGONG) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route.size(); i++)
    {

        if(i==(route.size()-1))
        {
            cout<<route[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route[i]<<"-> ";
        }
        else
        {
           cout<<route[i]<<"-> ";
        }
    }
    cout<<endl;
    int cost=j*sum;
     cout<<"\t\t\t\tThe total cost is :"<<cost<<endl;
       cout<<"\t\t\t\tDo you want to purchase?(Y?N)" <<endl;
       char ch;
       cin>>ch;
       if(ch=='Y')
       {
           cout<<"\t\t\t\tPurchase is confirmed"<<endl;
           main();
           exit(0);
       }
        else if(ch=='N')
       {
           purchase();
       }
        break;
        }

    case 13:
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


   time_t now = time(0);


   char* dt = ctime(&now);
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;
   cout <<"\t\t\t\tThe current date and time is: " << dt << endl;
   cout<<"-------------------------------------------------------------------------------------------------------"<<endl;

    cout<<endl<<endl;
      //system("cls");
    int j;
    cout<<"\t\t\t\tEnter Number Of Passengers: ";
    cin>>j;

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
     int node=42,sum=0,sum1=0, sum2=0,sum3=0;
     cout<<"\t\t\t\t1.DETAILS OF LUSAI EXPRESS(DHAKA TO CHITTAGONG)"<<endl;
     cout<<"\t\t\t\t--------------------------------------"<<endl;
     cout<<"\t\t\t\tArrival Time: 12:00 AM"<<endl<<"\t\t\t\tReach At   : 7:30  AM"<<endl;

     vector<pair<int, int>>graph2[node];
    graph2[16].push_back(make_pair(41,50));
    graph2[41].push_back(make_pair(32,50));
    graph2[32].push_back(make_pair(7,40));
    graph2[7].push_back(make_pair(8,60));
    graph2[8].push_back(make_pair(3,40));
    graph2[3].push_back(make_pair(12,60));
    graph2[12].push_back(make_pair(31,60));
    graph2[31].push_back(make_pair(15,50));
    graph2[15].push_back(make_pair(17,40));
    graph2[17].push_back(make_pair(37,80));
    graph2[37].push_back(make_pair(13,80));



     for(int i=1;i<node;i++)
     {
         for(  Pair v: graph2[i])
         {
             sum2=sum2+v.second;
         }
     }
     cout<<"\t\t\t\tTotal cost : "<<sum2<<" taka "<<endl;

     vector<pair<int,int>>Time2[node];
     Time2[16].push_back(make_pair(41,40));
    Time2[41].push_back(make_pair(32,40));
    Time2[32].push_back(make_pair(7,40));
    Time2[7].push_back(make_pair(8,40));
    Time2[8].push_back(make_pair(3,50));
    Time2[3].push_back(make_pair(12,40));
    Time2[12].push_back(make_pair(31,40));
    Time2[31].push_back(make_pair(15,40));
    Time2[15].push_back(make_pair(17,20));
    Time2[17].push_back(make_pair(37,60));
    Time2[37].push_back(make_pair(13,40));


    for(int i=1;i<node;i++)
     {
         for(  Pair v: Time2[i])
         {
             sum3=sum3+v.second;
         }
     }
     cout<<"\t\t\t\tTotal time : "<<sum3<<" minutes "<<endl<<endl;

       vector<string>route2;

    route2.push_back("Dhaka");
    route2.push_back("Tongi");
    route2.push_back("Narshingdi");
    route2.push_back("Bhairab");
    route2.push_back("Bhrahmanbaria");
    route2.push_back("Akura_railway");
    route2.push_back("Chapia");
    route2.push_back("Narayanpur");
    route2.push_back("Cumilla");
    route2.push_back("Feni");
    route2.push_back("Sitakunda");
    route2.push_back("Chittagong");

    cout<<"\t\t\t\tROUTE OF LUSAI EXPRESS(DHAKA TO CHITTAGONG) IS SHOWN BELOW: "<<endl;
    for(int i=0; i< route2.size(); i++)
    {

        if(i==(route2.size()-1))
        {
            cout<<route2[i]<<".";
        }
        else if(i==0)
        {
            cout<<"\t\t\t\t"<<route2[i]<<"-> ";
        }
        else
        {
           cout<<route2[i]<<"-> ";
        }
    }
    cout<<endl;
    int cost=j*sum2;
     cout<<"\t\t\t\tThe total cost is :"<<cost<<endl;
      cout<<"\t\t\t\tDo you want to purchase?(Y?N)" <<endl;
       char ch;
       cin>>ch;
       if(ch=='Y')
       {
           cout<<"\t\t\t\tPurchase is confirmed"<<endl;
           main();
           exit(0);
       }
       else if(ch=='N')
       {
           purchase();
       }
        break;
        }

    default:{
        cout<<"Enter Correct Number"<<endl;
        purchase();
       break;
        }
    }


}


