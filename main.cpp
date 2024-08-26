
/*
  **************************************************                                  *
  *  Simulation of hospital Management Software
  *  AAYUSH BHARGAVA*
  **************************************************
*/
#include<conio.h>
#include <iostream>
#include <string.h>
using namespace std;
class all
{
 private:
  struct address
  {
   int house;
   char city[30];
   char dist[30];
   char state[30];
   char street[30];
   char country[30];
  };
  struct age
  {
   int day;
   int month;
   int year;
  };
  struct patient_info
  {
   age A1;              //nested structure inplemented
   address AD1;         //nested structure implemented
   int sex;
   int reg_no;
   int bld_group;
   char name[50];
   char disease[100];
   int  marital_status;
   char disease_name[100];
  }PI[100];
  int task;
 //char disease[100];
  //auto disease_name_;

 protected:             //functions declared
  void search_menu();
  void search_city();
  void exit_function();
  void search_show_info();
  void search_blood_group();

  void clrscr();

  void enter_patient_info();
  void show_patient_detail();
  void after_search_options();
  void after_restore();
 public:
  void tasks();
  void recycle_bin();
  void delete_entry();
  void software_detail();
  void after_delete_options();
  int s_group;
  int s_choice;
  int en_del_index;
  int delete_choice;
  char ch;
  char answer;
  char answer1;
  char s_city[30];
  char exit_answer;
  char delete_confirm;
  char after_search_answer;
};

class date
{
 private:
  int date;
  int month;
  int year;
 public:
  void enter_date();
  void show_date();
};

class dob               //declaration for class "dob"
{
 private:
  struct dob1
  {
   int date;
   int month;
   int year;
   int rem;
  }DOB11[100];
 public:
  char birth_answer;
  void show_date();
  void enter_date();
  void search_show_date();
};

class temp
{
 public:
  int m;
  int i;
  int j;
  int k;
  int d;
  int e;
  int f;
  int rem;
  int temp1;
  int count;
  int regis;
  int index;
  int entry;
  int serial;
  int attempt;
  int current;
  int d_index;
  int ssi_count;
  int show_count;
  int delete_show;
  int search_index;
  int search_count;
  int current_year;
  int delete_count;
  int search_number;
  int restore_serial;
  int delete_attempt;
  int restore_attempt;
  int entry_index[100];
  int after_search_choice;
  int after_restore_choice;
  char enter_now;
  char restore_confirm;
  char duplicate_answer;
  char delete_all_confirm;
  char restore_all_confirm;
  char after_search_answer;
 char disease[100];

  temp()
  {
   i=0;
   j=0;
   d=0;
   e=0;
   f=0;
   serial=0;
   current=0;
   d_index=0;
   ssi_count=0;
   show_count=0;
   delete_show=0;
   delete_count=0;
   delete_attempt=0;
   restore_attempt=0;
  };
  ~temp() //destructor!!
  {};
};

all A1;                 //called!
date D1;                //called!
dob DOB1;               //called!
temp T1;                //called!

int main()             //main
{
 T1.count=0;
 for(T1.m=1;T1.m<=100;T1.m++)    //default index value set to -1 for each entry
 {
  T1.entry_index[T1.m]=-1;
 }
 cout<<"WELCOME TO HOSPITAL MANAGEMENT SYSTEM!"<<"\n";
  cout<<"~by aayush bhargava"<<endl;
 D1.enter_date();
 A1.tasks();
}

void all::tasks()
{
    // Initialize task-related variables
    T1.attempt = 0;
    T1.d_index = 0;
    T1.delete_attempt = 0;
    D1.show_date();

    while (true) {
        // Display the main menu
        cout << "\n\n\t\t\t***HOSPITAL MANAGEMENT SYSTEM***" << "\n";
        cout << "\t\t\t       By AAYUSH BHARGAVA      " << "\n";
        cout << "\n\t\t\t ***Hospital Management Tasks***" << "\n";
        cout << "\t\t\t *******************************" << "\n";
        cout << "\n\n\tPlease select a task to do...." << "\n";
        cout << "\n\n\t1. Enter a new patient information " << "\n";
        cout << "\t2. View detail of existing patient " << "\n";
        cout << "\t3. Search by city or blood group" << "\n";
        cout << "\t4. Delete entry " << "\n";
        cout << "\t5. Recycle Bin " << "\n";
        cout << "\t6. About " << "\n";
        cout << "\t7. Exit " << "\n\n\n";
        cout << "\a  Enter your task serial : ";
        cin >> task;

        switch(task)
        {
            case 1:
                A1.enter_patient_info();
                break;
            case 2:
                A1.show_patient_detail();
                break;
            case 3:
                A1.search_menu();
                break;
            case 4:
                A1.delete_entry();
                break;
            case 5:
                A1.recycle_bin();
                break;
            case 6:
                A1.software_detail();
                break;
            case 7:
                A1.exit_function();
                return; // Exit the function and hence the loop
            default:
                cout << "\n\n\n\n\n\tInvalid task serial !!!" << "\n";
                cout << "\tValid options are 1-7 !!!" << "\n";
                break; // Loop back to the menu
        }
    }
}


void date::enter_date()
{
 cout<<"\n\nEnter today's date..."<<"\n";
 cout<<"\nYear  :  ";
 cin>>year;
 while(year<2023||year>10000)
 {
  cout<<"\aInvalid input for year !!!"<<"\n";
  cout<<"Please enter the year correctly : "<<"\n";
  cin>>year;
 }
 T1.current_year=year;
 cout<<"Month : ";
 cin>>month;
 while(month<=0||month>12)   //if month is greater then 12 or less then 1
 {
  cout<<"\nInvalid input for month !!!"<<"\n";
  cout<<"Please enter the month correctly : \a"<<"\n";
  cin>>month;
 }
 cout<<"Date  : ";
 switch(month)
 {
  case 1:
  case 2:{
           cin>>date;
           while(date<1||date>31)   //for months with 31 days
           {
            cout<<"\aInvalid date !!!"<<"\n";
            cout<<"Again enter the date : "<<"\n";
           //    
            cin>>date;
           }
           break;
          }
  case 3:{
          cin>>date;                 //for february
          if(year%4==0)
          {
           while(date<0||date>29)    //for leap year
           {
            cout<<"\aInvalid date !!!"<<"\n";
            cout<<"Again enter the date : "<<"\n";
            //   
            cin>>date;
           }
          }
          else
          {
           while(date<0||date>28)    //for non-leap year
           {
            cout<<"\aInvalid date !!!"<<"\n";
            cout<<"Again enter the date : "<<"\n";
            cin>>date;
           }
          }
          break;
         }
 default:{                           //for other months with 30 days
          cin>>date;
          while(date<1||date>30)
          {
           cout<<"\aInvalid date !!!"<<"\n";
           cout<<"Again enter the date : "<<"\n";

           cin>>date;
          }
          break;
         }
 }	           	         //end of switch
}

void date::show_date()
{
 //   
 cout<<"Hello....\n It's ";
 cout<<date;
 T1.rem=date%10;
 switch(date)
 {
  case 1:{
           cout<<"th ";
           goto over;
          }
 }
 switch(T1.rem)
 {
  case 1:{
          cout<<"st ";
          break;
         }
  case 2:{
          cout<<"nd ";
          break;
         }
  case 3:{
          cout<<"rd ";
          break;
         }
 default:{
          cout<<"th ";
          break;
         }
 }                      //end of switch
 over:                  //label for jump statement
 switch(month)
 {
  case 1:{
          cout<<"January , ";
          break;
         }
  case 2:{
          cout<<"February , ";
          break;
         }
  case 3:{
          cout<<"March , ";
          break;
         }
  case 4:{
          cout<<"April , ";
          break;
         }
  case 5:{
          cout<<"May , ";
          break;
         }
  case 6:{
          cout<<"June , ";
          break;
         }
  case 7:{
          cout<<"July , ";
          break;
         }
  case 8:{
          cout<<"August , ";
          break;
         }
  case 9:{
          cout<<"September , ";
          break;
         }
 case 10:{
          cout<<"October , ";
          break;
         }

 case 11:{
          cout<<"November , ";
          break;
         }
 case 12:{
          cout<<"December , ";
          break;
         }
 }                      //end of switch
 cout<<year<<" \n";
}

void all::enter_patient_info()
{
 //   
 if(T1.current==1000)       //to avoid overflow of data in the database
 {
  cout<<"\n\n\n\t Database is full !!! ";
  cout<<"\n\t Sorry, you cannot enter any more information !!! ";
  cout<<"\n\t Information of maximum 100 patients can be entered !!!! ";
  cout<<"\n\t Press any key to return to the main menu....\a ";
  getch();
  A1.tasks();
 }
 answer='y';
 if(T1.count==0)
 {
  T1.serial=1;
 }
 else
 {
  T1.i=T1.serial;
 }
 for(T1.i=T1.serial;answer=='y'||answer=='Y';T1.i++)
 {
  cout<<"\a";
  T1.current++;
  PI[T1.i].reg_no=T1.i;
  T1.temp1=T1.serial;
 //    
  T1.entry_index[T1.i]=1;
  cout<<"\n\n\t ***ENTERING INFORMATION FOR PATIENT SERIAL NUMBER "<<T1.i<<" ***"<<"\n";
  cin.get(ch);
  cout<<"\nRegistration Number : "<<PI[T1.i].reg_no<<"\n\n";
  cout<<"Enter the name of patient : ";
 //    
  cin.getline(PI[T1.i].name,50);
  while(strlen(PI[T1.i].name)==0)
  {
   cout<<"\a\nPlease enter a name : ";      //if enter is pressed before netering a name
   cin.getline(PI[T1.i].name,50);
   cout<<"\n";
  }
  for(T1.k=1;T1.k<T1.serial;T1.k++)         //loop to avoid duplicate entries
  {
   if(strcmp(PI[T1.i].name,PI[T1.k].name)==0)  //if match is found
   {
    if(T1.entry_index[T1.k]==0)             //if entry is already deleted
    {
     continue;
    }
    else                                    //if entry still exists
    {
     T1.current-=1;                          //current no. of entries remains same
     //   
     cout<<"\n\n\n\tThe patient is already admitted in the hospital !!!";
     cout<<"\n\tWant to view info of this registration number in detail (Y/N) : \a";
     cin>>T1.duplicate_answer;
     while(T1.duplicate_answer!='Y'&&T1.duplicate_answer!='y'&&T1.duplicate_answer!='N'&&T1.duplicate_answer!='n')
     {
      cout<<"\n\t\aPlease re enter a correct option (Y/N) : ";
      cin>>T1.duplicate_answer;
     }
     if(T1.duplicate_answer=='y'||T1.duplicate_answer=='Y')
     {
      T1.entry_index[T1.i]=-1;
      T1.regis=T1.k;
      T1.d_index=1;
      A1.show_patient_detail();
     }
     else
     {
      A1.tasks();
     }
    }
   }
  }                     //end of "for loop" to prevent duplicate entries
  cout<<"\nSex ( 1-Male , 2-Female ) : ";
  //   
  cin>>PI[T1.i].sex;
  while(PI[T1.i].sex!=1&&PI[T1.i].sex!=2)
  {
   cout<<"\a\nInvalid input for sex of patient !!!";
   cout<<"\nSex : ";
   //   
   cin>>PI[T1.i].sex;
  }
  cout<<"\nMartial status( 1-Married , 2-Single ) : ";
  //   
  cin>>PI[T1.i].   marital_status;
  while(PI[T1.i].   marital_status<1||PI[T1.i].   marital_status>2)
  {
   cout<<"\a\nInvalid input for martial status !!!"<<"\n";
   cout<<"Enter a valid martial status : "<<"\n";
  //    
   cin>>PI[T1.i].   marital_status;
  }
  cin.get(ch);
  //   
 //
    cin.ignore(); // To ignore any remaining newline characters from previous input
    cout << "\nDisease : ";
    cin.getline(PI[T1.i].disease, 100); // Read the full line of disease description

  //
  cout<<"\n *** Blood group ***"<<"\n";
  //   
  cout<<"       1. A+ "<<"\n";
  //   
  cout<<"       2. A- "<<"\n";
  //   
  cout<<"       3. B+ "<<"\n";
  //   
  cout<<"       4. B- "<<"\n";
  //   
  cout<<"       5. AB+ "<<"\n";
 //    
  cout<<"       6. AB- "<<"\n";
 //    
  cout<<"       7. O+ "<<"\n";
 //    
  cout<<"       8. O- "<<"\n";
 //    
  cout<<"\nEnter a blood group : ";
  //   
  cin>>PI[T1.i].bld_group;
  switch(PI[T1.i].bld_group)
  {
   case 8:{
           break;
          }
  default:{
           while(PI[T1.i].bld_group!=1&&PI[T1.i].bld_group!=2&&
                 PI[T1.i].bld_group!=3&&PI[T1.i].bld_group!=4&&
                 PI[T1.i].bld_group!=5&&PI[T1.i].bld_group!=6&&
                 PI[T1.i].bld_group!=7&&PI[T1.i].bld_group!=8)
           {
            //   
            cout<<"\aInvalid input !!!"<<"\n";
           //    
            cout<<"Please enter a valid Blood Group : "<<"\n";
           //    
            cin>>PI[T1.i].bld_group;
           }            //end of while
           break;
          }
  }                     //end of switch
  cin.get(ch);
  getch();
  cout<<"\n\n ***ENTERING ADDRESS**"<<"\n\n";
 //    
  cout<<"House number : ";
 //    
  cin>>PI[T1.i].AD1.house;
  while(PI[T1.i].AD1.house<=0)
  {
   //   
   cout<<"\a\nInvalid input for house number !!!";
  //    
   cout<<"\nAgain enter the house number : ";
   //   
   cin>>PI[T1.i].AD1.house;
  }
  cin.get(ch);
  //   
  cout<<"Street       : ";
 //    
  cin.getline(PI[T1.i].AD1.street,30);
  while(strlen(PI[T1.i].AD1.street)==0)
  {
 //     
   cout<<"\a\nPlease enter a street : ";    //if enter is pressd before input for street
   break;
   cin.getline(PI[T1.i].AD1.street,50);
   cout<<"\n";
  }
  cout<<"City         : ";
  //   
  cin.getline(PI[T1.i].AD1.city,30);
  while(strlen(PI[T1.i].AD1.city)==0)
  {
 //     
   cout<<"\a\nPlease enter a city : ";      //if enter is pressd before input for city
 //     
   cin.getline(PI[T1.i].AD1.city,50);
   cout<<"\n";
  }
  cout<<"District     : ";
//     
  cin.getline(PI[T1.i].AD1.dist,30);
  while(strlen(PI[T1.i].AD1.dist)==0)
  {
  //    
   cout<<"\a\nPlease enter a district : ";  //if enter is pressed before input for district
  //    
   cin.getline(PI[T1.i].AD1.dist,30);
   cout<<"\n";
  }
  cout<<"State        : ";
 //    
  cin.getline(PI[T1.i].AD1.state,30);
  while(strlen(PI[T1.i].AD1.state)==0)
  {
   //   
   cout<<"\a\nPlease enter a state : ";     //if enter is pressed before input for state
  //    
   cin.getline(PI[T1.i].AD1.state,50);
   cout<<"\n";
  }
  cout<<"Country      : ";
 //    
  cin.getline(PI[T1.i].AD1.country,30);
  while(strlen(PI[T1.i].AD1.country)==0)
  {
  //    
   cout<<"\a\nPlease enter a country : ";   //if enter is pressd before input for country
  //    
   cin.getline(PI[T1.i].AD1.country,50);
   cout<<"\n";
  }
  DOB1.enter_date();
  cin.get(ch);
 //    
//   
  cout<<"\n\nWant to enter information for another patient (Y/N) ? ";
 //    
  cin>>answer;
  while(answer!='Y'&&answer!='y'&&answer!='N'&&answer!='n')
  {
  //    
   cout<<"\a\nPlease re-enter a correct option (Y/N) : ";
  //    
   cin>>answer;
  }
  cout<<"\n";
  T1.count++;
  T1.serial++;
 }
// clrscr();
 A1.tasks();
}                       //end of  function

void dob::enter_date()
{
 //   
 cout<<"\n\n *** Date of birth ***"<<"\n";
 //   
 cout<<"\nYear  : ";
 /*   
    */
 cin>>DOB11[T1.temp1].year;
 while(DOB11[T1.temp1].year>T1.current_year) 
 {                                           
  cout<<"\aInvalid input for year !!!";
  cout<<"\nThe date of birth cannot be after the current system date !!! ";
  cout<<"\nPlease enter the year correctly : ";

  cin>>DOB11[T1.temp1].year;
  cout<<"\n";
 }
 while(DOB11[T1.temp1].year<1000)
 {
 //    
  cout<<"Invalid input for year !!! ";
 //    
  cout<<"\nThe year of birth must be of 4 digits!!!";
     
  cout<<"\nPlease enter the year correctly : \a";
     
  cin>>DOB11[T1.temp1].year;
  cout<<"\n";
 }
 while(DOB11[T1.temp1].year<1900)
 {
     
  cout<<"\a\nAre you sure (Y/N) ? ";
  cin>>birth_answer;
  cout<<"\n";
  while(birth_answer!='Y'&&birth_answer!='y'&&birth_answer!='N'&&birth_answer!='n')
  {
      
   cout<<"\a\nInvalid input !!! "<<"\n";
      
   cout<<"Please enter a correct option (Y/N) : ";
   cout<<"\n";
      
   cin>>birth_answer;
  }
  if(birth_answer=='n'||birth_answer=='N')
  {
      
   cout<<"\nPlease enter the year again : ";
      
   cin>>DOB11[T1.temp1].year;
      
   while(DOB11[T1.temp1].year>T1.current_year)
   {
       
    cout<<"Invalid input for year !!! ";
       
    cout<<"\nThe date of birth cannot be after the current system date !!! ";
       
    cout<<"\nPlease enter the year correctly : \a";
       
    cin>>DOB11[T1.temp1].year;
    cout<<"\n";
   }
   while(DOB11[T1.temp1].year<1000)
   {
       
    cout<<"\aInvalid input for year !!! ";
       
    cout<<"\nThe year of birth must be of 4 digits!!!\a";
       
    cout<<"\nPlease enter the year correctly : ";
       
    cin>>DOB11[T1.temp1].year;
    cout<<"\n";
   }
  }                     
  while(birth_answer=='y'||birth_answer=='Y')
  {
   goto jump;
  }                     
 }                      
 jump:
    
 cout<<"Month : ";
    
 cin>>DOB11[T1.temp1].month;
 while(DOB11[T1.temp1].month<=0||DOB11[T1.temp1].month>12)
 {
     
  cout<<"\a\nInvalid input for month !!!"<<"\n";
  cout<<"Again enter the month : ";
     
     
  cin>>DOB11[T1.temp1].month;
 }
 cout<<"Date  : ";
    
 switch(DOB11[T1.temp1].month)
 {
  case 1:{
           cin>>DOB11[T1.temp1].date;           //for months with 31 days
           while(DOB11[T1.temp1].date<1||DOB11[T1.temp1].date>31)
           {
               
            cout<<"\aInvalid date !!!"<<"\n";
            cout<<"Again enter the date : ";
               
            cin>>DOB11[T1.temp1].date;
            cout<<"\n";
           }
           break;
          }
  case 2:{                                  //for february
          cin>>DOB11[T1.temp1].date;
          if(DOB11[T1.temp1].year%4==0)
          {
           while(DOB11[T1.temp1].date<0||DOB11[T1.temp1].date>29)  //leap
           {
               
            cout<<"\aInvalid date !!!"<<"\n";
            cout<<"Again enter the date : ";
               
            cin>>DOB11[T1.temp1].date;
            cout<<"\n";
           }
          }
          else
          {
           while(DOB11[T1.temp1].date<0||DOB11[T1.temp1].date>28)  //for non-leap year
           {
               
            cout<<"\aInvalid date !!!"<<"\n";
            cout<<"Again enter the date : ";
               
            cin>>DOB11[T1.temp1].date;
            cout<<"\n";
           }
          }
          break;
         }
 default:{
          cin>>DOB11[T1.temp1].date;            //for other months
          while(DOB11[T1.temp1].date<1||DOB11[T1.temp1].date>30)
          {
              
           cout<<"\aInvalid date !!!"<<"\n";
           cout<<"Again enter the date : ";
              
           cin>>DOB11[T1.temp1].date;
           cout<<"\n";
          }
          break;
         }
 }		                  //end of switch
    
}                       //end of  function


void all::show_patient_detail()
{
    if (T1.d_index == 1)
    {
        T1.d_index = 0;
        cout << "\n\n";
        goto direct;
    }
    if (T1.current == 0)
    {
        cout << "\n\n\n";
        cout << "\tDatabase is empty !!!\n";
        cout << "\tPlease enter some information first. \n";
        cout << "\n\n\tDo you want to enter now (Y/N) : \a";
        cin >> T1.enter_now;
        while (T1.enter_now != 'Y' && T1.enter_now != 'y' && T1.enter_now != 'N' && T1.enter_now != 'n')
        {
            cout << "\a\n\tPlease enter a correct option (Y/N) : ";
            cin >> T1.enter_now;
        }
        if (T1.enter_now == 'y' || T1.enter_now == 'Y')
        {
            A1.enter_patient_info();
        }
        else
        {
            A1.tasks();
        }
    }

    cout << "\n\t\t****** CURRENT DATABASE ENTRIES ******\n\n";
    cout << "\t\tRegistration no.       Name of patient\n\n";
    for (T1.j = 1; T1.j < 100; T1.j++)
    {
        if (T1.entry_index[T1.j] == 1)
        {
            cout << "\t\t       " << T1.j << "              " << PI[T1.j].name << "\n";
        }
    }

    cout << "\n\n\t\tPress 0 to return to main menu.... ";
    cout << "\n\n\n\tEnter registration number : ";
    cin >> T1.regis;
    cout << "\n\n";
    cin.get(ch); // Consume newline character

    if (T1.regis == 0)
    {
        A1.tasks();
    }

    T1.show_count++;
direct: // Label for "goto" jump statement
    if (T1.regis <= 0)
    {
        T1.attempt++;
        if (T1.attempt == 3)
        {
            cout << "\n\n\tYou have entered wrong registration number 3 times.\n";
            cout << "\tAccess Denied!!!\n";
            cout << "\tPlease try again later.\n";
            cout << "\tPress any key to exit to main task menu...\n";
            getch();
            A1.tasks();
        }
        cout << "\n\n\tSorry, invalid registration number !!! ";
        cout << "\n\tRegistration number starts from 1. ";
        cout << "\n\n\tPress any key to continue..... \a";
        getch();
        A1.show_patient_detail();
    }
    if (T1.regis > 0 && T1.regis < T1.serial && T1.entry_index[T1.regis] == 0)
    {
        cout << "\n\tSorry, the patient has left the hospital.";
        T1.attempt++;
        if (T1.attempt == 3)
        {
            cout << "\n\n\tYou have entered wrong registration number 3 times.\n";
            cout << "\tAccess Denied!!!\n";
            cout << "\tPlease try again later.\n";
            cout << "\tPress any key to exit to main task menu...\n";
            getch();
            A1.tasks();
        }
        cout << "\n\tPress any key to continue..." << "\n";
        getch();
    }
    if ((T1.regis < 0 || T1.regis >= T1.serial) && T1.entry_index[T1.regis] == -1)
    {
        T1.attempt++;
        if (T1.attempt != 3)
        {
            cout << "\n\n\tSorry, the registration number is invalid.\n";
            T1.entry = T1.serial - 1;
            if (T1.entry == 1)
            {
                cout << "\tOnly 1 record has been added.\n";
            }
            else
            {
                cout << "\tOnly " << T1.entry << " records have been added.\n";
            }
        }
        if (T1.attempt == 3)
        {
            cout << "\n\n\tYou have entered wrong registration number 3 times.\n";
            cout << "\tAccess Denied!!!\n";
            cout << "\tPlease try again later.\n";
            cout << "\tPress any key to exit to main task menu...\a\n";
            getch();
            A1.tasks();
        }
        cout << "\n\n\n\tPress any key to continue.....";
        getch();
        A1.show_patient_detail();
    }
    if (T1.regis > 0 && T1.regis < T1.serial && T1.entry_index[T1.regis] == 1)
    {
        T1.attempt = 0;
        cout << "\n\t  ***INFORMATION FOR PATIENT REGISTRATION NUMBER " << T1.regis << "***\n\n";
        cout << "\tName           : " << PI[T1.regis].name << "\n";
        cout << "\tSex            : ";
        if (PI[T1.regis].sex == 1)
        {
            cout << "Male\n";
        }
        if (PI[T1.regis].sex == 2)
        {
            cout << "Female\n";
        }
        cout << "\tBlood Group    : ";
        switch (PI[T1.regis].bld_group)
        {
            case 1:
                cout << "A+\n";
                break;
            case 2:
                cout << "A-\n";
                break;
            case 3:
                cout << "B+\n";
                break;
            case 4:
                cout << "B-\n";
                break;
            case 5:
                cout << "AB+\n";
                break;
            case 6:
                cout << "AB-\n";
                break;
            case 7:
                cout << "O+\n";
                break;
            case 8:
                cout << "O-\n";
                break;
        }
        cout << "\tDate of birth  : ";
        DOB1.show_date();
        cout << "\tDisease        : " << PI[T1.regis].disease << "\n"; // Correctly display disease field
        cout << "\tMarital Status : ";
        if (PI[T1.regis].marital_status == 1)
        {
            cout << "Married\n";
        }
        else
        {
            cout << "Single\n";
        }
        cout << "\n\t          **ADDRESS**\n";
        cout << "\n\tHouse no.      : " << PI[T1.regis].AD1.house;
        cout << "\n\tStreet         : " << PI[T1.regis].AD1.street;
        cout << "\n\tCity           : " << PI[T1.regis].AD1.city;
        cout << "\n\tDistrict       : " << PI[T1.regis].AD1.dist;
        cout << "\n\tState          : " << PI[T1.regis].AD1.state;
        cout << "\n\tCountry        : " << PI[T1.regis].AD1.country;
    }
    T1.d_index = 0;
    cout << "\n\n\n\n\tWant to view detail of another patient : ";
    cin >> answer1;
    while (answer1 != 'Y' && answer1 != 'y' && answer1 != 'N' && answer1 != 'n')
    {
        cout << "\a\tPlz re-enter a correct option (Y/N) ? ";
        cin >> answer1;
    }
    if (answer1 == 'Y' || answer1 == 'y')
    {
        A1.show_patient_detail();
    }
    else
    {
        A1.tasks();
    }
}

void dob::show_date()
{
 cout<<DOB11[T1.regis].date;
 T1.rem=DOB11[T1.regis].date%10;
 switch(DOB11[T1.regis].date)
 {
  case 4:{
           cout<<"th ";
           goto over;
          }
 }                      //end of switch
 switch(T1.rem)
 {
  case 1:{
          cout<<"st ";
          break;
         }
  case 2:{
          cout<<"nd ";
          break;
         }
  case 3:{
          cout<<"rd ";
          break;
         }
 default:{
          cout<<"th ";
          break;
         }
 }                      //end of switch
 over:
 switch(DOB11[T1.regis].month)
 {
  case 1:{
          cout<<"January , ";
          break;
         }
  case 2:{
          cout<<"February , ";
          break;
         }
  case 3:{
          cout<<"March , ";
          break;
         }
  case 4:{
          cout<<"April , ";
          break;
         }
  case 5:{
          cout<<"May , ";
          break;
         }
  case 6:{
          cout<<"June , ";
          break;
         }
  case 7:{
          cout<<"July , ";
          break;
         }
  case 8:{
          cout<<"August , ";
          break;
         }
  case 9:{
          cout<<"September , ";
          break;
         }
 case 10:{
          cout<<"October , ";
          break;
         }

 case 11:{
          cout<<"November , ";
          break;
         }
 case 12:{
          cout<<"December , ";
          break;
         }
 }                      //end of switch
 cout<<DOB11[T1.regis].year<<" \n";
}                       //end of  function

void all::software_detail()
{
    
 cout<<"\n\n\n\t\t\t ***SOFTWARE DETAILS***\n";
 cout<<"\tProgramming Language     : C++ "<<"\n";
 cout<<"\tOwner : Aayush Bhargava "<<"\n";
 cout<<"\tProject Name : Simulation of Hospital Management Software"<<"\n";
 cout<<"\a\n\n\n\tPress any key to return to the main task menu......."<<"\n";
 getch();
 A1.tasks();
}

void all::search_menu()
{
 T1.ssi_count=0;
 if(T1.current==0)
 {
     
  cout<<"\n\n\n";
  cout<<"\tDatabase in empty !!!"<<"\n";
  cout<<"\tPlease enter some information first. "<<"\n";
  cout<<"\n\n\tDo you want to enter now (Y/N) : \a";
  cin>>T1.enter_now;
  while(T1.enter_now!='Y'&&T1.enter_now!='y'&&T1.enter_now!='N'&&T1.enter_now!='n')
  {
   cout<<"\a\n\tPlease enter a correct option (Y/N) : ";
   cin>>T1.enter_now;
  }
  if(T1.enter_now=='y'||T1.enter_now=='Y')
  {
   A1.enter_patient_info();
  }
  else
  {
   A1.tasks();
  }
 }
 T1.search_number=0;
    
    
 cout<<"\n\n\t\t        ***SEARCH MENU***"<<"\n";
    
 cout<<"\n\n\t\t   1. Search by city  "<<"\n";
    
 cout<<"\t\t   2. Search by blood group  "<<"\n";
    
 cout<<"\t\t   3. Return to main menu  "<<"\n";
    
 cout<<"\n\n\t Enter your choice : \a";
    
 cin>>s_choice;
 cin.get(ch);
 cout<<"\n\n\n";
    
 switch(s_choice)
 {
  case 1:{
          T1.search_index=1;
             
          cout<<"\n\n\t\t***SEARCHING BY CITY***\n";
             
          cout<<"\n\n\tEnter city : ";
             
          cin.getline(s_city,30);
             
          cout<<"\n\n\n";
          while(strlen(s_city)==0)   //if enter is pressed before input for city
          {
              
           cout<<"\n\tPlease enter a city : \a";
              
           cin.getline(s_city,30);
          }
          A1.search_city();
          break;
         }
  case 2:{
          T1.search_index=2;
             
          cout<<"\n\n\t\t***SEARCHING BY BLOOD GROUP***\n";
             
          cout<<"\n\n\t\t    ***BLOOD GROUP MENU***\n\n";
             
          cout<<"\t1. A+ "<<"\n";
             
          cout<<"\t2. A- "<<"\n";
             
          cout<<"\t3. B+ "<<"\n";
             
          cout<<"\t4. B- "<<"\n";
             
          cout<<"\t5. AB+ "<<"\n";
             
          cout<<"\t6. AB- "<<"\n";
             
          cout<<"\t7. O+ "<<"\n";
             
          cout<<"\t8. O- "<<"\n";
             
          cout<<"\n\n        Enter the serial of your required group : ";
             
          cin>>s_group;
          while(s_group!=1&&s_group!=2&&s_group!=3&&s_group!=4&&
                s_group!=5&&s_group!=6&&s_group!=7&&s_group!=8)
          {
           cout<<"\n";
           cout<<"\tInvalid search criteria !!!"<<"\n";
           cout<<"\tValid serials are 1 to 8."<<"\n";
           cout<<"\tEnter a valid blood group : \a";
           cin>>s_group;
          }
          cout<<"\n\n\n";
          A1.search_blood_group();
          break;
         }
  case 3:{
          A1.tasks();
          break;
         }
 default:{
             
          cout<<"\a\n\n  Invalid search criteria !!!"<<"\n";
             
          cout<<"  Valid options are 1 and 2 !!!"<<"\n";
             
          cout<<"  Press any key to return to the main searching menu....."<<"\n";
             
          getch();
          A1.search_menu();
          break;
         }
 }                      //end of switch
}

void all::search_city()
{
 T1.search_count=0;
 T1.search_number++;
    
 cout<<"\n\n\n";
 for(T1.index=1;T1.index<T1.serial;T1.index++)
 {
  if((strcmp(PI[T1.index].AD1.city,s_city))==0)
  {
   if(T1.entry_index[T1.index]==0)
   {
    continue;
   }
   if(T1.search_count==0)
   {
    cout<<"\t\tRegistration no.       Name of patient\n\n";
   }
      
   cout<<"\n\t\t       "<<T1.index<<"\t\t"<<PI[T1.index].name;
      
   T1.search_count++;
  }
 }
    
 if(T1.search_number==1)
 {
  cout<<"\a\n\n\n\t\t  Search is complete !!! "<<"\n";
     
  if(T1.search_count==0)
  {
   cout<<"\t\t  No result found !!!"<<"\n\n\n";
   cout<<"\t\t  Press any key to continue.....";
   getch();
   A1.after_search_options();
  }
  if(T1.search_count>1)
  {
   cout<<"\t\t  "<<T1.search_count<<" results found !!! "<<"\n\n\n";
  }
  if(T1.search_count==1)
  {
   cout<<"\t\t  "<<T1.search_count<<" result found !!! "<<"\n\n\n";
  }
 }
 if(T1.search_number==1)
 {
     
  cout<<"\n\n\t\tWant to view in detail : ";
  cin>>after_search_answer;
  while(after_search_answer!='y'&&after_search_answer!='Y'&&after_search_answer!='N'&&after_search_answer!='n')
  {
   cout<<"\a\n\n\t\tPlease enter a correct option .";
   cout<<"\n\t\tDo you want to view in detail : ";
   cin>>after_search_answer;
  }
  if(after_search_answer=='y'||after_search_answer=='Y')
  {
   cout<<"\n\n\n\t\tWhich registration number : ";
   cin>>T1.index;
   A1.search_show_info();
  }
  else
  {
   A1.after_search_options();
  }
 }
 else
 {
  cout<<"\n\n\n\t\tWhich registration number : ";
  cin>>T1.index;
  A1.search_show_info();
 }
}                       //end of  function

void all::search_blood_group()
{
 T1.search_count=0;
 T1.search_number++;
    
 cout<<"\n\n\n";
 for(T1.index=1;T1.index<T1.serial;T1.index++)
 {
  if(s_group==PI[T1.index].bld_group)
  {
   if(T1.entry_index[T1.index]==0)
   {
    continue;
   }
   if(T1.search_count==0)
   {
    cout<<"\t\tRegistration no.       Name of patient\n\n";
   }
      
   cout<<"\n\t\t       "<<T1.index<<"\t\t"<<PI[T1.index].name;
      
   T1.search_count++;
  }
 }
    
 if(T1.search_number==1)
 {
  cout<<"\a\n\n\n\t\t  Search is complete !!! "<<"\n";
     
  if(T1.search_count==0)
  {
   cout<<"\t\t  No matching result found !!!"<<"\n\n\n";
   cout<<"\t\t  Press any key to continue.....";
   getch();
   A1.after_search_options();
  }
  if(T1.search_count>1)
  {
   cout<<"\t\t  "<<T1.search_count<<" results found !!! "<<"\n\n\n";
  }
  if(T1.search_count==1)
  {
   cout<<"\t\t  "<<T1.search_count<<" result found !!! "<<"\n\n\n";
  }
 }
 if(T1.search_number==1)
 {
     
  cout<<"\n\n\t\tWant to view in detail : ";
  cin>>after_search_answer;
  while(after_search_answer!='y'&&after_search_answer!='Y'&&after_search_answer!='N'&&after_search_answer!='n')
  {
   cout<<"\a\n\n\t\tPlease enter a correct option .";
   cout<<"\n\t\tDo you want to view in detail : ";
   cin>>after_search_answer;
  }
  if(after_search_answer=='y'||after_search_answer=='Y')
  {
   cout<<"\n\n\n\t\tWhich registration number : ";
   cin>>T1.index;
   A1.search_show_info();
  }
  else
  {
   A1.after_search_options();
  }
 }
 else
 {
  cout<<"\n\n\n\t\tWhich registration number : ";
  cin>>T1.index;
  A1.search_show_info();
 }
}                       //end of  function

void all::search_show_info()
{
 T1.ssi_count++;
    
 cout<<"\n\n";
 if(T1.index<=0)
 {
  if(T1.ssi_count==3)
  {
      
   cout<<"\n\n\tYou have entered wrong choice 3 times!!!!";
   cout<<"\n\tPress any key for more options......\a";
   getch();
   A1.after_search_options();
  }
  cout<<"\n\n\tSorry, invalid registration number !!!";
  cout<<"\n\tRegistration number starts from 1 ";
  cout<<"\n\tPress any key to continue.........\n";
  getch();
  switch(T1.search_index)
  {
   case 1:{
           A1.search_city();
           break;
          }
   case 2:{
           A1.search_blood_group();
           break;
          }
  }                     //end of switch
 }
 if(T1.entry_index[T1.index]==0)
 {
  if(T1.ssi_count==3)
  {
      
   cout<<"\n\n\tYou have entered wrong choice 3 times!!!!";
   cout<<"\n\tPress any key for more options......\a";
   getch();
   A1.after_search_options();
  }
  cout<<"\n\n\tSorry, the patient has left the hospital ."<<"\n";
  cout<<"\tPress any key to continue ....\a"<<"\n";
  getch();
  switch(T1.search_index)
  {
   case 1:{
           A1.search_city();
           break;
          }
   case 2:{
           A1.search_blood_group();
           break;
          }
  }                     //end of switch
 }
 if(T1.entry_index[T1.index]==-1||T1.index>=T1.serial)
 {
  if(T1.ssi_count==3)
  {
      
   cout<<"\n\n\tYou have entered wrong choice 3 times!!!!";
   cout<<"\n\tPress any key for more options......\a";
   getch();
   A1.after_search_options();
  }
  cout<<"\n\n\t\tSorry, the registration number in invalid ."<<"\n";
  T1.entry=T1.serial-1;
  if(T1.entry==1)
  {
   cout<<"\t\tOnly 1 record has been added .\n";
  }
  else
  {
   cout<<"\t\tOnly "<<T1.entry<<" records have been added .\n";
  }
  cout<<"\t\tPress any key to continue....\a"<<"\n";
  getch();
  switch(T1.search_index)
  {
   case 1:{
           A1.search_city();
           break;
          }
   case 2:{
           A1.search_blood_group();
           break;
          }
  }                     //end of switch
 }
    
 cout<<"\n";
 T1.ssi_count=0;
 cout<<"\n\t  ***INFORMATION FOR PATIENT REGISTRATION NUMBER "<<T1.index<<"***\n\n";
    
 cout<<"\tName           : "<<PI[T1.index].name<<"\n";
    
 cout<<"\tSex            : ";
    
 if(PI[T1.index].sex==1)
 {
  cout<<"Male "<<"\n";
     
 }
 if(PI[T1.index].sex==2)
 {
  cout<<"Female "<<"\n";
     
 }
 cout<<"\tBlood Group    : ";
    
 switch(PI[T1.index].bld_group)
 {
  case 1:{
             
          cout<<"A+\n";
          break;
         }
  case 2:{
             
          cout<<"A-\n";
          break;
         }
  case 3:{
             
          cout<<"B+\n";
          break;
         }
  case 4:{
             
          cout<<"B-\n";
          break;
         }
  case 5:{
             
          cout<<"AB+\n";
          break;
         }
  case 6:{
             
          cout<<"AB-\n";
          break;
         }
  case 7:{
             
          cout<<"O+\n";
          break;
         }
  case 8:{
             
          cout<<"O-\n";
          break;
         }
 }                      //end of switch
    
 cout<<"\tDate of birth  : ";
    
 DOB1.search_show_date();
 cout<<"\tMartial Status : ";
    
 if(PI[T1.index].   marital_status==1)
 {
  cout<<"Married "<<"\n";
     
 }
 else
 {
  cout<<"Single "<<"\n";
     
 }
 cout<<"\n\t          **ADDRESS**"<<"\n";
    
 cout<<"\n\tHouse no.      : "<<PI[T1.index].AD1.house;
    
 cout<<"\n\tStreet         : "<<PI[T1.index].AD1.street;
    
 cout<<"\n\tCity           : "<<PI[T1.index].AD1.city;
    
 cout<<"\n\tDistrict       : "<<PI[T1.index].AD1.dist;
    
 cout<<"\n\tState          : "<<PI[T1.index].AD1.state;
    
 cout<<"\n\tCountry        : "<<PI[T1.index].AD1.country;
    
    
    
 cout<<"\n\n\n\tWant to view info of another patient within search results (Y/N) ? ";
 cin>>after_search_answer;
 while(after_search_answer!='Y'&&after_search_answer!='y'&&after_search_answer!='N'&&after_search_answer!='n')
 {
  cout<<"\a\n\tPlease enter a correct option (Y/N) : ";
  cin>>after_search_answer;
 }
 if(after_search_answer=='y'||after_search_answer=='Y')
 {
  switch(T1.search_index)
  {
   case 1:{
           A1.search_city();
           break;
          }
   case 2:{
           A1.search_blood_group();
           break;
          }
  }                     //end of switch
 }
 else
 {
  A1.after_search_options();
 }
}                       //end of  function

void dob::search_show_date()
{
 cout<<DOB11[T1.index].date;
 T1.rem=DOB11[T1.index].date%10;
 switch(DOB11[T1.index].date)
 {
  case 11:
  case 12:
  case 13:
  case 14:
  case 15:
  case 16:
  case 17:
  case 18:
  case 19:
  case 20:{
           cout<<"th ";
           goto over;
          }
 }                      //end of switch
 switch(T1.rem)
 {
  case 1:{
          cout<<"st ";
          break;
         }
  case 2:{
          cout<<"nd ";
          break;
         }
  case 3:{
          cout<<"rd ";
          break;
         }
 default:{
          cout<<"th ";
          break;
         }
 }                      //end of switch
 over:
 switch(DOB11[T1.index].month)
 {
  case 1:{
          cout<<"January , ";
          break;
         }
  case 2:{
          cout<<"February , ";
          break;
         }
  case 3:{
          cout<<"March , ";
          break;
         }
  case 4:{
          cout<<"April , ";
          break;
         }
  case 5:{
          cout<<"May , ";
          break;
         }
  case 6:{
          cout<<"June , ";
          break;
         }
  case 7:{
          cout<<"July , ";
          break;
         }
  case 8:{
          cout<<"August , ";
          break;
         }
  case 9:{
          cout<<"September , ";
          break;
         }
 case 10:{
          cout<<"October , ";
          break;
         }
 case 11:{
          cout<<"November , ";
          break;
         }
 case 12:{
          cout<<"December , ";
          break;
         }
 }                      //end of switch
 cout<<DOB11[T1.index].year<<" \n";
    
}                       //end of  function

void all::after_search_options()
{
    
    
 cout<<"\n\n\n\n\t\tWHAT DO U WANT TO DO NOW ?"<<"\n";
    
 cout<<"\t\t1. Search again  "<<"\n";
    
 cout<<"\t\t2. Return to main task menu  "<<"\n";
    
 cout<<"\n\tEnter your choice : ";
    
    
 cin>>T1.after_search_choice;
    
 cout<<"\n";
 switch(T1.after_search_choice)
 {
  case 1:{
          T1.ssi_count=0;
          A1.search_menu();
          break;
         }
  case 2:{
          T1.ssi_count=0;
          A1.tasks();
          break;
         }
 default:{
             
          cout<<"\a\n\n\tInvalid option requested !!!"<<"\n";
             
          cout<<"\tPress any key to return to the main searching menu..."<<"\n";
             
          getch();
          A1.search_menu();
          break;
         }
 }		                  //end of switch
}                       //end of  function

void all::delete_entry()
{
    
 if(T1.current==0)
 {
  cout<<"\n\n\n";
  cout<<"\tDatabase in empty !!!"<<"\n";
  cout<<"\tPlease enter some information first. "<<"\n";
  cout<<"\n\n\tDo you want to enter now (Y/N) : \a";
  cin>>T1.enter_now;
  while(T1.enter_now!='Y'&&T1.enter_now!='y'&&T1.enter_now!='N'&&T1.enter_now!='n')
  {
   cout<<"\a\n\tPlease re-enter a correct option (Y/N) : ";
   cin>>T1.enter_now;
  }
  if(T1.enter_now=='y'||T1.enter_now=='Y')
  {
   A1.enter_patient_info();
  }
  else
  {
   A1.tasks();
  }
 }
 cout<<"\n\t\t    ***CURRENT DATABASE ENTRIES***\n\n";
 cout<<"\t\tRegistration no.       Name of patient\n\n";
 for(T1.j=1;T1.j<T1.serial;T1.j++)
 {
  if(T1.entry_index[T1.j]==0)
  {
   continue;                 //to ignore deleted items
  }
  if(T1.entry_index[T1.j]==1)
  {
   T1.delete_show++;
   cout<<"\t\t       "<<T1.j<<"              "<<PI[T1.j].name<<"\n";
  }
 }
 if(T1.delete_show==0)
 {
     
  cout<<"\n\tDatabase is currently empty!!!\a";
  cout<<"\n\tPress any key to continue....";
  getch();
  A1.tasks();
 }
 cout<<"\n\n\tPress 0 to return to main menu and 101 to delete all entries... ";
 cout<<"\n\n\n\tWhich registration no. to delete ? ";
 cin>>en_del_index;
 if(en_del_index==101)
 {
  cout<<"\n\tWarning : You are about to delete all entries  !!!\a";
  cout<<"\n\tAre you sure you want to do this : ";
  cin>>T1.delete_all_confirm;
  while(T1.delete_all_confirm!='Y'&&T1.delete_all_confirm!='y'&&T1.delete_all_confirm!='N'&&T1.delete_all_confirm!='n')
  {
   cout<<"\n\tSorry, wrong input !!!";
   cout<<"\n\tPlease enter a valid choice (Y/N) : \a";
   cin>>T1.delete_all_confirm;
  }
  if(T1.delete_all_confirm=='y'||T1.delete_all_confirm=='Y')
  {
   for(T1.f=1;T1.f<=100;T1.f++)
   {
    if(T1.entry_index[T1.f]==1)
    {
     T1.current--;
     T1.entry_index[T1.f]=0;
    }
   }
   cout<<"\n\n\tAll entries have been succesfully deleted!!!";
   cout<<"\n\tPress any key to return to the main menu...\a";
   getch();
   A1.tasks();
  }
  else
  {
   cout<<"\n\tNo entries have been deleted.";
   cout<<"\n\tPress any key for more options....";
   getch();
   A1.after_delete_options();
  }
 }
 if(en_del_index==0)
 {
     
  A1.tasks();
 }
 if(en_del_index>0&&en_del_index<T1.serial&&T1.entry_index[en_del_index]==1)
 {
  T1.delete_attempt=0;
  cout<<"\n\n\tAre you sure you want to delete entry "<<en_del_index<<" (Y/N) ? ";
  cin>>delete_confirm;
  while(delete_confirm!='Y'&&delete_confirm!='y'&&delete_confirm!='N'&&delete_confirm!='n')
  {
      
   cout<<"\a\n\tPease re-enter a correct option (Y/N) ? ";
      
   cin>>delete_confirm;
  }
  if(delete_confirm=='y'||delete_confirm=='Y')
  {
   T1.entry_index[en_del_index]=0; //entry now deleted. index value set to 0
   T1.current--;
   cout<<"\n\tEntry succesfully deleted.\n";
   cout<<"\tPress any key to continue.....\a";
   getch();
   A1.after_delete_options();
  }
  else
  {
   T1.entry_index[en_del_index]=1; //entry not deleted. default index value(1) kept
   cout<<"\n\tEntry not deleted  ";
   cout<<"\n\tPress any key to continue.......";
   getch();
   A1.after_delete_options();
  }
 }
 if(en_del_index>0&&en_del_index<T1.serial&&T1.entry_index[en_del_index]==0)
 {
  T1.delete_attempt++;
  if(T1.delete_attempt==3)
  {
   cout<<"\n\n\tSorry, you have entered wrong registration number 3 times. ";
   cout<<"\n\tAccess denied !!!";
   cout<<"\n\tPlease try again later !!!";
   cout<<"\n\tPress any key to return to the main task menu....\a";
   getch();
   A1.tasks();
  }
  cout<<"\n\n\tSorry, the patient has already left the hospital ."<<"\n";
  cout<<"\n\tPress any key to continue...\a"<<"\n";
  getch();
  A1.delete_entry();
 }
 else
 {
  T1.delete_attempt++;
  if(T1.delete_attempt==3)
  {
   cout<<"\n\n\tSorry, you have entered wrong registration number 3 times. ";
   cout<<"\n\tAccess denied !!!";
   cout<<"\n\tPlease try again later !!! ";
   cout<<"\n\tPress any key to return to the main task menu....\a";
   getch();
   A1.tasks();
  }
  cout<<"\n\n\tSorry, Invalid registration number ."<<"\a\n";
  T1.entry=T1.serial-1;
  if(T1.entry==1)
  {
   cout<<"\tOnly 1 record has been added .\n";
  }
  else
  {
   cout<<"\tOnly "<<T1.entry<<" records was added and "<<T1.current<<" are present .\n";
  }
  cout<<"\tPress any key to continue..."<<"\n";
  getch();
  A1.delete_entry();
 }
    
}                       //end of  function

void all::after_delete_options()
{
    
 cout<<"\n\t\tWHAT DO YOU WANT TO DO NOW ?";
 cout<<"\n\t\t1. Delete more entries  ";
 cout<<"\n\t\t2. Return to main menu  "<<"\n";
 cout<<"\n\t\tPlease enter your choice : ";
 cin>>delete_choice;
 while(delete_choice!=1&&delete_choice!=2)
 {
  cout<<"\a\n\n\tSorry, wrong choice .";
  cout<<"\n\tValid choices are 1 and 2. ";
  cout<<"\n\tPlease re-enter your choice : ";
  cin>>delete_choice;
 }
 switch(delete_choice)
 {
  case 1:{
          A1.delete_entry();
          break;
         }
  case 2:{
          A1.tasks();
          break;
         }
 }                      //end of switch
}                       //end of function

void all::recycle_bin()
{
    
 T1.delete_count=0;
 if(T1.serial==0)
 {
  cout<<"\n\n\n";
  cout<<"\tDatabase in empty !!!"<<"\n";
  cout<<"\tPlease enter some information first. "<<"\n";
  cout<<"\n\n\tDo you want to enter now (Y/N) : \a";
  cin>>T1.enter_now;
  while(T1.enter_now!='Y'&&T1.enter_now!='y'&&T1.enter_now!='N'&&T1.enter_now!='n')
  {
   cout<<"\a\n\tPlease enter a correct option (Y/N) : ";
   cin>>T1.enter_now;
  }
  if(T1.enter_now=='y'||T1.enter_now=='Y')
  {
   A1.enter_patient_info();
  }
  else
  {
   A1.tasks();
  }
 }
 cout<<"\n\t\t    ******  DELETED ENTRIES ******\n\n";
 cout<<"\t\tRegistration no.       Name of patient\n\n";
 for(T1.d=1;T1.d<T1.serial;T1.d++)
 {
  if(T1.entry_index[T1.d]==0)
  {
   cout<<"\t\t       "<<T1.d<<"              "<<PI[T1.d].name<<"\n";
   T1.delete_count++;
  }
  else
  {
   continue;
  }
 }
 if(T1.delete_count==0)
 {
  T1.delete_count=0;
     
  cout<<"\n\n\n\tNo entry is currently in recycle bin.";
  cout<<"\n\tPress any key to return to the main menu...\a";
  getch();
  A1.tasks();
 }
 cout<<"\n\n\tPress 0 to return to main menu and 101 to restore all items... ";
 cout<<"\n\n\n\tWhich item to restore : ";
 cin>>T1.restore_serial;
 if(T1.restore_serial==0)
 {
     
  A1.tasks();
 }
 if(T1.restore_serial==101)
 {
  cout<<"\n\n\tAre you sure you want to restore all the entries : ";
  cin>>T1.restore_all_confirm;
  while(T1.restore_all_confirm!='Y'&&T1.restore_all_confirm!='y'&&T1.restore_all_confirm!='N'&&T1.restore_all_confirm!='n')
  {
   cout<<"\n\n\tPlease re-enter a corrent option : ";
   cin>>T1.restore_all_confirm;
  }
  if(T1.restore_all_confirm=='y'||T1.restore_all_confirm=='Y')
  {
   for(T1.e=1;T1.e<=100;T1.e++)
   {
    if(T1.entry_index[T1.e]==0)
    {
     T1.current++;
     T1.entry_index[T1.e]=1;
    }
   }
   cout<<"\n\tAll deleted items have been succesfully restored.";
   cout<<"\n\tPress any key to return to the main menu...";
   getch();
      
   A1.tasks();
  }
  else
  {
   cout<<"\n\n\tNo entry has been restored.";
   cout<<"\n\tPress any key to view the recycle bin...\a";
   getch();
      
   A1.recycle_bin();
  }
 }
 if(T1.entry_index[T1.restore_serial]==0)
 {
  T1.restore_attempt=0;
  cout<<"\n\tAre you sure you want to restore entry "<<T1.restore_serial<<" : ";
  cin>>T1.restore_confirm;
  while(T1.restore_confirm!='Y'&&T1.restore_confirm!='y'&&T1.restore_confirm!='N'&&T1.restore_confirm!='n')
  {
      
   cout<<"\n\n\tInvalid input !!! ";
   cout<<"\n\tPease re-enter a correct option (Y/N) : \a";
      
   cin>>T1.restore_confirm;
  }
  if(T1.restore_confirm=='Y'||T1.restore_confirm=='y')
  {
   T1.current++;
   T1.delete_count=0;
   T1.entry_index[T1.restore_serial]=1;          //index value set to 1
   cout<<"\n\tEntry succesfully restored!!!";
   cout<<"\n\tPress any key to continue....\a";
   getch();
   A1.after_restore();
  }
  else
  {
   cout<<"\n\tEntry not restored!!!";            //index value kept 0
   cout<<"\n\tPress any key to continue...\n\a";
   getch();
   A1.after_restore();
  }
 }
 if(T1.entry_index[T1.restore_serial]==1)
 {
  T1.restore_attempt++;
  if(T1.restore_attempt==3)
  {
      
   cout<<"\n\n\tYou have unsuccesfully tried to restore 3 times.";
   cout<<"\n\tPress any key to return to the main task menu...";
   A1.tasks();
  }
  cout<<"\n\tThe entry is already present in the database.";
  cout<<"\n\tPress any key to continue...";
   getch();
  A1.recycle_bin();
 }
 if(T1.restore_serial<0||T1.restore_serial>100||T1.entry_index[T1.restore_serial]==-1)
 {
  T1.restore_attempt++;
  if(T1.restore_attempt==3)
  {
      
   cout<<"\n\n\tYou have unsuccesfully tried to restore 3 times.";
   cout<<"\n\tPress any key to return to the main task menu...";
   getch();
   A1.tasks();
  }
  cout<<"\n\tInvalid serial number";
  cout<<"\n\tPress any key to continue...";
  getch();
  A1.recycle_bin();
 }
}                       //end of function

void all::after_restore()
{
    
 cout<<"\n\n\n\t\tWHAT DO YOU WANT TO DO NOW? ";
 cout<<"\n\t\t1. Restore more entries ";
 cout<<"\n\t\t2. Return to main manu ";
 cout<<"\n\n\t\tPlease enter your choice : ";
 cin>>T1.after_restore_choice;
 switch(T1.after_restore_choice)
 {
  case 1:{
          A1.recycle_bin();
          break;
         }
  case 2:{
          A1.tasks();
          break;
         }
 default:{
          cout<<"\n\n\n\tSorry, wrong choice ";
          cout<<"\n\tValid choices are 1 and 2 ";
          cout<<"\n\tPress any key to continue......";
          getch();
          A1.after_restore();
         }
 }
}                       //end of function

void all::exit_function()
{
    
 if(T1.serial==0)
 {
  cout<<"\n\n\n\n\tYou have not used the software.";
  cout<<"\n\tIt is recommended that you do not exit.";
  cout<<"\n\tPress any key to continue......\a";
  getch();
     
  cout<<"\n\n\n\tAre you sure you want to exit (Y/N) ? ";
  cin>>exit_answer;
  while(exit_answer!='Y'&&exit_answer!='y'&&exit_answer!='N'&&exit_answer!='n')
  {
      
   cout<<"\n\n\tInvalid input !!! ";
   cout<<"\n\tPease re-enter a correct option (Y/N) : \a";
      
   cin>>exit_answer;
  }
  if(exit_answer=='y'||exit_answer=='Y')
  {
   cout<<"\a";
   exit(0);
  }
  else
  {
   A1.tasks();
  }
 }
 cout<<"\n\n\n\t\t\t ***SOFTWARE DETAILS***\n";
 cout<<"\n\n\tDeveloper                : Aayush Bhargava "<<"\n";
 cout<<"\tProgramming Language     : C++ "<<"\n";
 cout<<"\tCompiler version         : Borland 5.02 "<<"\n";
 cout<<"\tAim                      : Simulation of Hospital Management Software"<<"\n";
 cout<<"\n\tHope you like it..."<<"\n";
 cout<<"\n\n\tSend your comments to    : aayushbhargava71@gmail.com"<<"\n";
 cout<<"\n\n\tThank You for trying this program. "<<"\n";
 cout<<"\n\n\n\tPress any key to continue........"<<"\n";
 getch();
    
 cout<<"\n\n\n\tAre you sure you want to exit (Y/N) ? ";
 cin>>exit_answer;
 while(exit_answer!='Y'&&exit_answer!='y'&&exit_answer!='N'&&exit_answer!='n')
 {
     
  cout<<"\n\n\tInvalid input !!! ";
  cout<<"\n\tPease re-enter a correct option (Y/N) : \a";
     
  cin>>exit_answer;
 }
 if(exit_answer=='y'||exit_answer=='Y')
 {
  cout<<"\a";
  exit(0);
 }
 else
 {
  A1.tasks();
 }
}                       //end of  function
