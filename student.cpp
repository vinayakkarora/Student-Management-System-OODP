#include<iostream>
using namespace std;
#include<conio.h>
//#include<process.h>
class student
{
protected:
int rno;
char
fname[10],lname[10],cource[20],dob[15],mo[15],addr[20],city[10],email[30];
 int sub1, sub2, sub3, sub4, sub5, sub6, total;
 float per;
public:
void input_details()
{
cout<<"\n\n 1) Enter Roll No ===>";
cin>>rno;
cout<<"\n";
cout<<"\n\n 2) Enter First Name ===>";
cin>>fname;
cout<<"\n";
cout<<"\n\n 3) Enter Last Name ===>";
cin>>lname;
cout<<"\n";
cout<<"\n\n 4) Enter Course ===>";
cin>>cource;
cout<<"\n";
cout<<"\n\n Enter Date Of Birth ===>";
cin>>dob;
cout<<"\n";
cout<<"\n\n Enter Mobile No ===>";
cin>>mo;
cout<<"\n";
cout<<"\n\n Enter Address ===>";
cin>>addr;
cout<<"\n";
cout<<"\n\n Enter City ===>";
cin>>city;
 cout<<"\n";
cout<<"\n\n Enter Email ===>";
cin>>email;
cout<<"\n";
cout<<"\n\nEnter the Mark of OODP ==>";
cin>>sub1;
cout<<"\n";
cout<<"\n\nEnter the Mark of Mathmetics ==>";
cin>>sub2;
cout<<"\n";
cout<<"\n\nEnter the Mark of English ==>";
cin>>sub3;
cout<<"\n";
cout<<"\n\nEnter the Mark of Chemistry ==>";
cin>>sub4;
cout<<"\n";
cout<<"\n\nEnter the Mark of Biology ==>";
cin>>sub5;
cout<<"\n";
cout<<"\n\nEnter the Mark of Philosphy ==>";
cin>>sub6;
cout<<"\n";
total=sub1+sub2+sub3+sub4+sub5+sub6;
per=total/6;
}
void output_details()
{
cout<<"\tSRM IST, KTR"<<endl;
cout<<"\n_____________________________________________________________________________"<<endl;
cout<<"\n 1) Roll No :---> "<<rno;
cout<<"\n 2) First Name :---> "<<fname;
cout<<"\t\t 3) Last Name :---> "<<lname;
cout<<"\n 4) Course :---> "<<cource;
cout<<"\t 5) Date Of Birth :---> "<<dob;
cout<<"\n 6) Mobile No :---> "<<mo;
cout<<"\t\t 7) Address :---> "<<addr;
cout<<"\n 8) City :---> "<<city;
cout<<"\n 9) Email :---> "<<email;
}
void output_marksheet()
{
cout<<"\n_____________________________________________________________________________"<<endl;
cout<<"Subject total marks obtainedmarks"<<endl;
cout<<"_____________________________________________________________________________"<<endl;
cout<<"Marks of OODP 100"<<sub1<<endl;
cout<<"Marks of mathematics 100"<<sub2<<endl;
cout<<"Marks of English 100"<<sub3<<endl;
cout<<"Marks of Chemistry 100"<<sub4<<endl;
cout<<"Marks of Biology 100"<<sub5<<endl;
cout<<"Marks of Philosophy 100"<<sub6<<endl;
cout<<"Percentage 100"<<per<<endl;
cout<<"_____________________________________________________________________________"<<endl;
cout<<"Total Marks 600"<<total;
if(per>=90 && per<=100)
{
cout<<"\n\n\t\t Your Grade is :----> A+";
cout<<"\n";
}
else if(per>=80 && per<=90)
{
cout<<"\n\n\t\t Your Grade is :----> A";
cout<<"\n";
}
else if(per>=70 && per<=80)
{
cout<<"\n\t\t Your Grade is :----> B+";
} 
else if(per>=60 && per<=70)
{
cout<<"\n\t\t Your Grade is :----> B";
}
else if(per>=50 && per<=60)
{
cout<<"\n\t\t Your Grad is :----> C";
}
else if(per>=40 && per<=50)
{
cout<<"\n\t\t Your Grade is :---->D";
}
else
{
cout<<"\n\t\t You Have Failed";
}
}
};
class master : virtual public student
{
public:
void create()
{
cout<<"\n\n===========================> Insert Information<==========================\n\n";
input_details();
}
void display()
{
cout<<"\n\n=========================> Summary Report<============================\n\n";
output_details();
cout<<"\n\n=========================> Student MarksheetReport <==========================\n\n";
output_marksheet();
cout<<"\n\n\t=========================> End Of Marksheet<==========================\n\n"
;
cout<<"\n\n\t=========================> End of Report<=============================\n\n";
}
void update()
{
int choice;
cout<<"\n\n\t=========================> Update Information<=========================\n\n";
cout<<"\n\n\t ---------------> choose Details You Want to Perform <--------------\n\n";
cout<<"\n\n 1) Roll No ===>"<<rno<<"\n";
cout<<"\n\n 2) First Name ===>"<<fname<<"\n";
cout<<"\n\n 3) Last Name ====>"<<lname<<"\n";
cout<<"\n\n 4) Cource ===>"<<cource<<"\n";
cout<<"\n\n 5) Date Of Birth ===>"<<dob<<"\n";
cout<<"\n\n 6) Mobile No ===>"<<mo<<"\n";
cout<<"\n\n 7) Address ===>"<<addr<<"\n";
cout<<"\n\n 8) City ===>"<<city<<"\n";
cout<<"\n\n 9) Email ===>"<<email<<"\n";
cout<<"\n\n 10) OODP Marks ===>"<<sub1<<"\n";
cout<<"\n\n 11) Mathematics Marks ===>"<<sub2<<"\n";
cout<<"\n\n 12) English Marks ===>"<<sub3<<"\n";
cout<<"\n\n 13) Chemistry Marks ===>"<<sub4<<"\n";
cout<<"\n\n 14) Biology Marks ===>"<<sub5<<"\n";
cout<<"\n\n 15) Philosphy Marks ===>"<<sub4<<"\n";
cout<<"\n\n Enter Your Choice ====>";
cin>>choice;
switch(choice)
{
case 1:
cout<<"\n\n Enter Roll No :--->";
cin>>rno;
cout<<"\n";
break;
case 2:
cout<<"\n\n Enter First Name :--->";
cin>>fname;
cout<<"\n";
break;
case 3:
cout<<"\n\n Enter Last Name :--->";
cin>>lname;
 cout<<"\n";
break;
case 4:
cout<<"\n\n Enter Cource :--->";
cin>>cource;
cout<<"\n";
break;
case 5:
cout<<"\n\n Enter Date Of Birth :--->";
cin>>dob;
cout<<"\n";
break;
case 6:
cout<<"\n\n Enter Mobile No :--->";
cin>>mo;
cout<<"\n";
break;
case 7:
cout<<"\n\n Enter Address :--->";
cin>>addr;
cout<<"\n";
break;
case 8:
cout<<"\n\n Enter city :--->";
cin>>city;
cout<<"\n";
break;
case 9:
cout<<"\n\n Enter Email :--->";
cin>>email;
break;
case 10:
cout<<"\n\n Enter Marks Of OODP :--->";
cin>>sub1;
break;
case 11:
cout<<"\n\n Enter Marks of Mathematics :--->";
cin>>sub2;
cout<<"\n";
break;
case 12:
cout<<"\n\n Enter Marks of English :--->";
cin>>sub3;
 cout<<"\n";
break;
case 13:
cout<<"\n\n Enter Marks of Chemistry :--->";
cin>>sub4;
cout<<"\n";
break;
case 14:
cout<<"\n\n Enter Marks of Biology :--->";
cin>>sub4;
cout<<"\n";
break;
case 15:
cout<<"\n\n Enter Marks of Philosphy :--->";
cin>>sub4;
cout<<"\n";
break;
default:
cout<<"\n\n=======> Invalid Choice <=========\n******** Try again ********\n\n";
break;
}
}
};
int main()
{
master ms;
while(1)
{
cout<<"\n\n\t ********** Choose Operation You Want To Perform**********\n\n";
cout<<"\n\n\t\t 1--> Create Record";
cout<<"\n\n\t\t 2--> Display Record";
cout<<"\n\n\t\t 3--> Update Record";
cout<<"\n\n\t\t 4--> Exit Program";
cout<<"\n\n Enter your choice====>";
int ch;
cin>>ch;
switch(ch)
{
case 1:
 ms.create();
break;
case 2:
ms.display();
break;
case 3:
ms.update();
break;
case 4:
goto out;
default:
cout<<"\n\n\t========> Invalid choice <========";
break;
}
}
out:
getch();
}
