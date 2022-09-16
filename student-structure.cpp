// write a code for following create struct student for 15 student with its name,rno, marks of 3 subject,tot per and class with following condition per>=70 dist, per between 60-70 first than 60-50 second ,than 50-40 pass ,below 40 fail

#include<iostream>
#include<iomanip>
using namespace std;
 
struct student
{
    char name[15];
    int rno;
    int marks[3];
    double tol_per;
    int total;
};

typedef student stu;

int main(){

    stu s[15];
    int i;

    for(i=1;i<=15;i++){
        s[i].total =0;
        fflush(stdin);
        cout<<"Enter the name of the "<<i<<" student :- ";
        cin.getline(s[i].name,15);
        cout<<"Enter the roll number of "<<i<<" student :- ";
        cin>>s[i].rno;
        for(int j=1;j<=3;j++){
            cout<<"Enter the marks in "<<j<<" subject :- ";
            cin>>s[i].marks[j];
            s[i].total += s[i].marks[j];
        }
        s[i].tol_per = s[i].total/3.0;
        cout<<"\n";
    }

    for(i=1;i<=15;i++){
        if(s[i].tol_per >= 70)
            cout<<endl<<s[i].name<<" with Dist class";
        else if(s[i].tol_per <= 70 && s[i].tol_per >= 60)
            cout<<endl<<s[i].name<<" with First class ";
        else if(s[i].tol_per <= 60 && s[i].tol_per >= 50)
            cout<<endl<<s[i].name<<" with Second class ";
        else if(s[i].tol_per <= 50 && s[i].tol_per >= 40)
            cout<<endl<<s[i].name<<" is Passed ";
        else 
            cout<<endl<<s[i].name<<" is Failed ";
    }

    for(i=1;i<=15;i++){
        cout<<"\nName of "<<i<<" student is "<<s[i].name;
        cout<<"\nRoll Number of "<<i<<" student is "<<s[i].rno;
        for(int j=1;j<=3;j++){
            cout<<"\nMarks of "<<j<<" student in subject "<<i<<" is "<<s[i].marks[j];
        }
        cout<<"\nTotal Percentage of student "<<i<<" is :- "<<
        s[i].tol_per<<"\n\n";
    }

    return 0;
}