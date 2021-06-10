#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class Company
{
    char name[25];
    long id;
    char MobileNumber[20];
    int level;
    char Addhar_Card[30];
    char Address[50];
    char Ammount[40];
    int option;
    int d, m, y;
    char moon[100000];
    int member;
    int e;
    char x='.';
    char price[10000];
    int d1, m1, y1;
    int d2, m2, y2;
    char period[1000];
    int d9, m9, y9;
    char Astroid[100000];
    int Astroidmember;
    char Astroidprice[10000];
    int d10, m10, y10;
    int d11, m11, y11;
    char Astroidperiod[1000];
    int d6, m6, y6;
    char Telescope[100000];
    int scopemember;
    char scopeprice[10000];
    int d7, m7, y7;
    int d8, m8, y8;
    char scopeperiod[1000];
    int d3, m3, y3;
    char mars[100000];
    int marsmember;
    char marsprice[10000];
    int d4, m4, y4;
    int d5, m5, y5;
    char marsperiod[1000];
    char reason[1000];
   string pass;
   string password="SG";
public:
    void CreateAccount();
    void All_Project();
    void EmployeeSalary();
    void EditSalary();
    void EditEmployeeAccount();
    void Show_Employee_record();
    void Show_Salary();
    void Emeployee_for_project();
    void Delete();
    void show_Project();
    int Employee_id();
};
void Company::CreateAccount()
{
         cout<<"==============================================="<<endl;
        cout<<"===========Welcome TO SG Space Company ==========="<<endl;
        cout<<"==============================================="<<endl;
 cout<<"Enter a password "<<endl;
cin>>pass;
if(pass!=password){
cout<<"password is incorrect || Please try again "<<endl;
return;
}else{
    system("COLOR 1");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
 cout<<"Password is accepted "<<endl;
 cout<<"Welcome to Employee Create Account Mode  "<<endl;
}
 cout<<"press continue press 1 || return for main press 0 "<<endl;
    cin>>e;
    if(e<1){
    cout<<"Press any key on keyboard "<<endl;
        return;
    }else{
        cout<<endl;
    cout << "Enter your Name " << endl;
    cin.ignore();
    cin.getline(name, 25);
    cout << "Enter your Employee Id || This id most important " << endl;
    cin >> id;
    cout << "Enter a Employee level " << endl;
    cin >> level;
    cout << "Enter your Mobile Number " << endl;
    cin.ignore();
    cin.getline(MobileNumber, 20);
    cout << "Enter your Addhar Card Number " << endl;
    cin.ignore();
    cin.getline(Addhar_Card, 30);
    cout << "Enter your Address " << endl;
    cin.ignore();
    cin.getline(Address, 50);
    }
}
void Company::EmployeeSalary()
{
           cout<<"==============================================="<<endl;
        cout<<"===========Welcome TO SG Space Company ==========="<<endl;
        cout<<"==============================================="<<endl;
    cout<<"Enter a password "<<endl;
cin>>pass;
if(pass!=password){
cout<<"password is incorrect || Please try again "<<endl;
return;
}else{
    system("COLOR 2");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
 cout<<"Password is accepted "<<endl;
    cout<<"Welcome to Employee Salary Mode "<<endl;
}
 cout<<"press continue press 1 || return for main press 0 "<<endl;
    cin>>e;
    if(e<1){
    cout<<"Press any key on keyboard "<<endl;
        return;
    }else{
        cout<<endl;
    cout << "Employee Id " << id << endl;
    cout << "Employee Level " << level << endl;
    cout << "This is Employee Salary Mode || 1 To 10 level || press 1 To 10 key || for exit press any on keybord " << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "Emplyee level 1 " << endl;
        cout << "Employee Salary is || 40000 RS " << endl;
        cout << "If Employee Greate work " << endl;
        cout << "Give extra 20000 Rs " << endl;
        cout << "Enter a amount for Salary Slip " << endl;
        cin.ignore();
        cin.getline(Ammount, 40);
        break;
    case 2:
        cout << "Emplyee level 2 " << endl;
        cout << "Employee Salary is || 60000 RS " << endl;
        cout << "If Employee Greate work " << endl;
        cout << "Give extra 20000 Rs " << endl;
        cout << "Enter a amount for Salary Slip " << endl;
        cin.ignore();
        cin.getline(Ammount, 40);
        break;
    case 3:
        cout << "Emplyee level 3 " << endl;
        cout << "Employee Salary is || 80000 RS " << endl;
        cout << "If Employee Greate work " << endl;
        cout << "Give extra 20000 Rs " << endl;
        cout << "Enter a amount for Salary Slip " << endl;
        cin.ignore();
        cin.getline(Ammount, 40);
        break;
    case 4:
        cout << "Emplyee level 4 " << endl;
        cout << "Employee Salary is || 100000 RS " << endl;
        cout << "If Employee Greate work " << endl;
        cout << "Give extra 20000 Rs " << endl;
        cout << "Enter a amount for Salary Slip " << endl;
        cin.ignore();
        cin.getline(Ammount, 40);
        break;
    case 5:
        cout << "Emplyee level 5 " << endl;
        cout << "Employee Salary is || 120000 RS " << endl;
        cout << "If Employee Greate work " << endl;
        cout << "Give extra 20000 Rs " << endl;
        cout << "Enter a amount for Salary Slip " << endl;
        cin.ignore();
        cin.getline(Ammount, 40);
        break;
    case 6:
        cout << "Emplyee level 6 " << endl;
        cout << "Employee Salary is || 140000 RS " << endl;
        cout << "If Employee Greate work " << endl;
        cout << "Give extra 40000 Rs " << endl;
        cout << "Enter a amount for Salary Slip " << endl;
        cin.ignore();
        cin.getline(Ammount, 40);
        break;
    case 7:
        cout << "Emplyee level 7 " << endl;
        cout << "Employee Salary is || 180000 RS " << endl;
        cout << "If Employee Greate work " << endl;
        cout << "Give extra 40000 Rs " << endl;
        cout << "Enter a amount for Salary Slip " << endl;
        cin.ignore();
        cin.getline(Ammount, 40);
        break;
    case 8:
        cout << "Emplyee level 8 " << endl;
        cout << "Employee Salary is || 220000 RS " << endl;
        cout << "If Employee Greate work " << endl;
        cout << "Give extra 40000 Rs " << endl;
        cout << "Enter a amount for Salary Slip " << endl;
        cin.ignore();
        cin.getline(Ammount, 40);
        break;
    case 9:
        cout << "Emplyee level 9 " << endl;
        cout << "Employee Salary is || 300000 RS " << endl;
        cout << "If Employee Greate work " << endl;
        cout << "Give extra 60000 Rs " << endl;
        cout << "Enter a amount for Salary Slip " << endl;
        cin.ignore();
        cin.getline(Ammount, 40);
        break;
    case 10:
        cout << "Emplyee level 10 " << endl;
        cout << "Employee Salary is || 500000 RS " << endl;
        cout << "If Employee Greate work " << endl;
        cout << "Give extra 80000 Rs " << endl;
        cout << "Enter a amount for Salary Slip " << endl;
        cin.ignore();
        cin.getline(Ammount, 40);
        break;
    default:
        cout << "Invaild Choice " << endl;
        return;
        break;
    }
    }
}
void Company::Show_Employee_record()
{
           cout<<"==============================================="<<endl;
        cout<<"===========Welcome TO SG Space Company ==========="<<endl;
        cout<<"==============================================="<<endl;
    cout<<"press continue press 1 || return for main press 0 "<<endl;
    cin>>e;
    if(e<1){
    cout<<"Press any key on keyboard "<<endl;
        return;
    }else{
    system("COLOR 5");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
    cout<<endl;
    cout << "Your Name is:" << name << endl;
    cout << "Your Mobile Number is:" << MobileNumber << endl;
    cout << "Your Employee Id is:" << id << endl;
    cout << "Employee Level is: " << level << endl;
    cout << "Your Addhar Cared Number is:" << Addhar_Card << endl;
    cout << "Your Address is:" << Address << endl;
    cout << "Thanks for Support the company " << endl;
    }
}
void Company::Show_Salary()
{
           cout<<"==============================================="<<endl;
        cout<<"===========Welcome TO SG Space Company ==========="<<endl;
        cout<<"==============================================="<<endl;
    cout<<"press continue press 1 || return for main press 0 "<<endl;
    cin>>e;
    if(e<1){
    cout<<"Press any key on keyboard "<<endl;
        return;
    }else{
    system("COLOR 1");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
    cout<<endl;
    cout << " " << name << "     " << id << "     " << MobileNumber << "     " << Address << "     " << Ammount << endl;
    }
}
void Company::All_Project()
{
    int select;
           cout<<"==============================================="<<endl;
        cout<<"===========Welcome TO SG Space Company ==========="<<endl;
        cout<<"==============================================="<<endl;
    cout<<"Enter a password "<<endl;
cin>>pass;
if(pass!=password){
cout<<"password is incorrect || Please try again "<<endl;
return;
}else{
    system("COLOR 6");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
 cout<<"Password is accepted "<<endl;
    cout<<"Welcome to ALL Company Project "<<endl;
}
 cout<<"press continue press 1 || return for main press 0 "<<endl;
    cin>>e;
    if(e<1){
    cout<<"Press any key on keyboard "<<endl;
        return;
    }else{
    do
    {
        cout<<endl;
        cout << "======================================" << endl;
        cout << "Welcome TO Company ALl Project's List " << endl;
        cout << "This project 2021 To 2040 Complete " << endl;
        cout << "======================================" << endl;
        cout << "All Moon base mission " << endl;
        cout << "All Mars Mission " << endl;
        cout << "Space Telescope " << endl;
        cout << "Astroid mission " << endl;
        cout << "Exit " << endl;
        cout << "Select 1 To 5 " << endl;
        cin >> select;
        switch (select)
        {
        case 1:
            cout << "Welcome to moon mission " << endl;
            cout << "All Moon base mission " << endl;
            cout << "Enter The Mission Starting Date " << endl;
            cin >> d >> m >> y;
            cout << "Enter The Full mission details " << endl;
            cin.ignore();
            cin.getline(moon, 100000);
            cout << "Enter The member reqrired for the mission " << endl;
            cin.ignore();
            cin >> member;
            cout << "Enter Moon Mission Price " << endl;
            cin.ignore();
            cin.getline(price, 10000);
            cout << "Enter The Launch Date " << endl;
            cin >> d1, m1, y1;
            cout << "Enter The landing date " << endl;
            cin >> d2, m2, y2;
            cout << "Enter the time period of this mission " << endl;
            cin.ignore();
            cin.getline(period, 1000);
            break;
        case 2:
            cout << "Welcome to Mars mission " << endl;
            cout << "All Mars base mission " << endl;
            cout << "Enter The Mission Starting Date " << endl;
            cin >> d3 >> m3 >> y3;
            cout << "Enter The Full mission details " << endl;
            cin.ignore();
            cin.getline(mars, 100000);
            cout << "Enter The member reqrired for the mission " << endl;
            cin.ignore();
            cin >> marsmember;
            cout << "Enter Mars Mission Price " << endl;
            cin.ignore();
            cin.getline(marsprice, 10000);
            cout << "Enter The Launch Date " << endl;
            cin >> d4, m4, y4;
            cout << "Enter The landing date " << endl;
            cin >> d5, m5, y5;
            cout << "Enter the time period of this mission " << endl;
            cin.ignore();
            cin.getline(marsperiod, 1000);
            break;
        case 3:
            cout << "Welcome to TeleScope mission " << endl;
            cout << "All TeleScope base mission " << endl;
            cout << "Enter The Mission Starting Date " << endl;
            cin >> d6 >> m6 >> y6;
            cout << "Enter The Full mission details " << endl;
            cin.ignore();
            cin.getline(Telescope, 100000);
            cout << "Enter The member reqrired for the mission " << endl;
            cin.ignore();
            cin >> scopemember;
            cout << "Enter TeleScope Mission Price " << endl;
            cin.ignore();
            cin.getline(scopeprice, 10000);
            cout << "Enter The Launch Date " << endl;
            cin >> d7, m7, y7;
            cout << "Enter the time period of this mission " << endl;
            cin.ignore();
            cin.getline(scopeperiod, 1000);
            break;
        case 4:
            cout << "Welcome to Astroid mission " << endl;
            cout << "All Astroid base mission " << endl;
            cout << "Enter The Mission Starting Date " << endl;
            cin >> d9 >> m9 >> y9;
            cout << "Enter The Full mission details " << endl;
            cin.ignore();
            cin.getline(Astroid, 100000);
            cout << "Enter The member reqrired for the mission " << endl;
            cin.ignore();
            cin >> Astroidmember;
            cout << "Enter Astroid Mission Price " << endl;
            cin.ignore();
            cin.getline(Astroidprice, 10000);
            cout << "Enter The Launch Date " << endl;
            cin >> d10, m10, y10;
            cout << "Enter The landing date " << endl;
            cin >> d11, m11, y11;
            cout << "Enter the time period of this mission " << endl;
            cin.ignore();
            cin.getline(Astroidperiod, 1000);
            break;
        case 5:
            return;
            break;
        default:
            cout << "Invaild choice try again " << endl;
            return;
            break;
        }
    } while (select != 5);
    }
}
void Company::show_Project()
{
           cout<<"==============================================="<<endl;
        cout<<"===========Welcome TO SG Space Company ==========="<<endl;
        cout<<"==============================================="<<endl;
    cout<<"press continue press 1 || return for main press 0 "<<endl;
    cin>>e;
    if(e<1){
    cout<<"Press any key on keyboard "<<endl;
        return;
    }else{
    int xy;
    system("COLOR 8");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
    do
    {
        cout<<endl;
        cout << "======================================" << endl;
        cout << "Welcome TO Company ALl Project's List " << endl;
        cout << "This project 2021 To 2040 Complete " << endl;
        cout << "======================================" << endl;
        cout << "All Moon base mission " << endl;
        cout << "All Mars Mission " << endl;
        cout << "Space Telescope " << endl;
        cout << "Astroid mission " << endl;
        cout << "Exit " << endl;
        cout << "Select 1 To 5 " << endl;
        cin >> xy;
        switch (xy)
        {
        case 1:
            cout << "Welcome to moon mission  Details" << endl;
            cout << "All Moon base mission " << endl;
            cout << " The Mission Starting Date " << d << "/" << m << "/" << y << endl;
            cout << " The Full mission details " << moon << endl;
            cout << " The member reqrired for the mission " << member << endl;
            cout << " Moon Mission Price " << price << endl;
            cout << " The Launch Date " << d1 << "/" << m1 << "/" << y1 << endl;
            cout << " The landing date " << d2 << "/" << m2 << "/" << y2 << endl;
            cout << " the time period of this mission " << period << endl;
            break;
        case 2:
            cout << "Welcome to Mars mission  Details" << endl;
            cout << "All Mars base mission " << endl;
            cout << " The Mission Starting Date " << d3 << "/" << m3 << "/" << y3 << endl;
            cout << " The Full mission details " << mars << endl;
            cout << " The member reqrired for the mission " << marsmember << endl;
            cout << " Mars Mission Price " << marsprice << endl;
            cout << " The Launch Date " << d4 << "/" << m4 << "/" << y4 << endl;
            cout << " The landing date " << d5 << "/" << m5 << "/" << y5 << endl;
            cout << " the time period of this mission " << period << endl;
            break;
        case 3:
            cout << "Welcome to TeleScope mission  Details" << endl;
            cout << "All TeleScope base mission " << endl;
            cout << " The Mission Starting Date " << d6 << "/" << m6 << "/" << y6 << endl;
            cout << " The Full mission details " << Telescope << endl;
            cout << " The member reqrired for the mission " << scopemember << endl;
            cout << " TeleScope Mission Price " << scopeprice << endl;
            cout << " The Launch Date " << d7 << "/" << m7 << "/" << y7 << endl;
            cout << " the time period of this mission " << scopeperiod << endl;
            break;
        case 4:
            cout << "Welcome to Astroid mission  Details" << endl;
            cout << "All Astroid base mission " << endl;
            cout << " The Mission Starting Date " << d9 << "/" << m9 << "/" << y9 << endl;
            cout << " The Full mission details " << Astroid << endl;
            cout << " The member reqrired for the mission " << Astroidmember << endl;
            cout << " Astroid Mission Price " << Astroidprice << endl;
            cout << " The Launch Date " << d10 << "/" << m10 << "/" << y10 << endl;
            cout << " The landing date " << d11 << "/" << m11 << "/" << y11 << endl;
            cout << " the time period of this mission " << Astroidperiod << endl;
            break;
        case 5:
            return;
            break;
        default:
            cout << "Invaild Choice " << endl;
            return;
            break;
        }
    } while (xy != 5);
    }
}
int Company::Employee_id()
{
    return id;
}
void Company::Delete(){
           cout<<"==============================================="<<endl;
        cout<<"===========Welcome TO SG Space Company ==========="<<endl;
        cout<<"==============================================="<<endl;
      cout<<"Enter a password "<<endl;
cin>>pass;
if(pass!=password){
cout<<"password is incorrect || Please try again "<<endl;
return;
}else{
    system("COLOR 6");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
 cout<<"Password is accepted "<<endl;
    cout<<"Welcome to ALL Company Project "<<endl;
}
 cout<<"press continue press 1 || return for main press 0 "<<endl;
    cin>>e;
    if(e<1){
    cout<<"Press any key on keyboard "<<endl;
        return;
    }else{
        cout<<endl;
   cout<<"Enter the Reason || Why do you leave a Comapny "<<endl;
   cin.ignore();
   cin.getline(reason,1000);
   cout<<"Thanks For supporting the company "<<endl;
    }
}
int main()
{
    Company c;
    int ch;
    int chk;
    int n;
    std::fstream f,G,E;
    do
    {
        system("COLOR 9");
     cout<<"\n\n";
        cout<<"==============================================="<<endl;
        cout<<"===========Welcome TO Space Company ==========="<<endl;
        cout<<"==============================================="<<endl;
        cout << "1) Create Employee Record " << endl;
        cout << "2) Create Employee Salary " << endl;
        cout << "3) Set ALL Future Project " << endl;
        cout << "4) Show Employee Record " << endl;
        cout << "5) Show Employee Salary " << endl;
        cout << "6) Show Company Project " << endl;
        cout << "7) Delete Employee Record "<<endl;
        cout << "8) Exit " << endl;
        cout << "Select 1 to 8 " << endl;
        cin >> ch;
        system("CLS");
        switch (ch)
        {
        case 1:
            cout << "1) Create Employee Record " << endl;
            f.open("Employee.dat", ios::app | ios::in | ios::binary);
            c.CreateAccount();
            f.write((char *)&c, sizeof(c));
            f.close();
            getch();
            break;
        case 2:
            cout << "2) Create Employee Salary " << endl;
            f.open("Employee.dat", ios::app | ios::in | ios::binary);
            c.EmployeeSalary();
            f.write((char *)&c, sizeof(c));
            f.close();
            getch();
            break;
        case 3:
            cout << "3) Set ALL Future Project " << endl;
            f.open("Project.dat", ios::app | ios::in | ios::binary);
            c.All_Project();
            f.write((char *)&c, sizeof(c));
            f.close();
            getch();
            break;
        case 4:
            cout << "6) Show Employee Record " << endl;
            f.open("Employee.dat", ios::in | ios::out | ios::app | ios::binary);
            if (f.fail())
            {
                cout << "File could not be found || Try again " << endl;
            }
            else
            {
                chk = 0;
                cout << "Enter Employee Id " << endl;
                cin >> n;
                while (f.read((char *)&c, sizeof(c)))
                {
                    if (c.Employee_id() == n)
                    {
                        c.Show_Employee_record();
                        chk = 1;
                        break;
                    }
                }
                if (chk == 0)
                {
                    cout << "Employee  Record not found || Try again " << endl;
                }
                f.close();
                getch();
                break;
            }
        case 5:
            cout << "7) Show Employee Salary " << endl;
            f.open("Employee.dat", ios::in | ios::out | ios::app | ios::binary);
            if (f.fail())
            {
                cout << "File could not be found || Try again " << endl;
            }
            else
            {
                chk = 0;
                cout << "Enter Employee Id " << endl;
                cin >> n;
                while (f.read((char *)&c, sizeof(c)))
                {
                    if (c.Employee_id() == n)
                    {
                        cout << "=========================================================" << endl;
                        cout << "     "
                             << "       "
                             << "       "
                             << "       "
                             << "       " << endl;

                        cout << "=========================================================" << endl;
                        c.Show_Salary();
                        chk = 1;
                        break;
                    }
                }
                if (chk == 0)
                {
                    cout << "Employee Salary not found || Try again " << endl;
                }
                f.close();
                getch();
                break;
            case 6:
                cout << "8) Show Company Project " << endl;
                f.open("Project.dat", ios::in | ios::out | ios::app | ios::binary);
                if (f.fail())
                {
                    cout << "File could not be found || Try again " << endl;
                }
                else
                {
                    chk = 0;
                    while (f.read((char *)&c, sizeof(c)))
                    {
                        chk = 1;
                        c.show_Project();
                    }
                    if (chk == 0)
                    {
                        cout << "Company Project  not found || Try again " << endl;
                    }
                    f.close();
                    getch();
                    break;
                }
            }
            case 7:
            cout << "9) Delete Employee Record "<<endl;
            f.open("Employee.dat", ios::in | ios::app | ios::binary);
            G.open("Delete.dat",ios::out|ios::app|ios::binary);
            if (f.fail())
            {
                cout << "File could not be found || Try again " << endl;
            }
            else
            {
                chk = 0;
                cout << "Enter Employee Id " << endl;
                cin >> n;
                while (f.read((char *)&c, sizeof(c)))
                {
                    if (c.Employee_id()!= n)
                    {
                        G.write((char *)&c,sizeof(c));
                    }
                else{
                    c.Delete();
                    chk=1;
                }
                }
                if (chk == 0)
                {
                    cout << "Employee  Record not found || Try again " << endl;
                }else{
                    cout<<"Employee Record is Deleted "<<endl;
                }
                f.close();
                G.close();
                remove("Employee.dat");
                rename("Delete.dat","Employee.dat");
                break;
            }
        case 8:
            cout << " Exit " << endl;
            exit(1);
            break;
        default:
            cout << "Invaild Choice " << endl;
    }
     } while (ch != 8);
    return 0;
}