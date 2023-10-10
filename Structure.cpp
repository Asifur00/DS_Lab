#include<iostream>
using namespace std;

struct Student
{
    int ID, semesters, credits;
    float CGPA;
};

int main()
{
    Student s[10];
    cout<<"Enter the details of Student 1: "<<endl;
    cout<<"ID: "<<endl;
    cin>>s[1].ID;
    cout<<"No. of semesters: "<<endl;
    cin>>s[1].semesters;
    cout<<"No. of credits: "<<endl;
    cin>>s[1].credits;
    cout<<"CGPA: "<<endl;
    cin>>s[1].CGPA;

   // Student s[2];
    cout<<"Enter the details of Student 2: "<<endl;
    cout<<"ID: "<<endl;
    cin>>s[2].ID;
    cout<<"No. of semesters: "<<endl;
    cin>>s[2].semesters;
    cout<<"No. of credits: "<<endl;
    cin>>s[2].credits;
    cout<<"CGPA: "<<endl;
    cin>>s[2].CGPA;

  //  Student s[3];
    cout<<"Enter the details of Student 3: "<<endl;
    cout<<"ID: "<<endl;
    cin>>s[3].ID;
    cout<<"No. of semesters: "<<endl;
    cin>>s[3].semesters;
    cout<<"No. of credits: "<<endl;
    cin>>s[3].credits;
    cout<<"CGPA: "<<endl;
    cin>>s[3].CGPA;

   // Student s[4];
    cout<<"Enter the details of Student 4: "<<endl;
    cout<<"ID: "<<endl;
    cin>>s[4].ID;
    cout<<"No. of semesters: "<<endl;
    cin>>s[4].semesters;
    cout<<"No. of credits: "<<endl;
    cin>>s[4].credits;
    cout<<"CGPA: "<<endl;
    cin>>s[4].CGPA;

//    Student s[5];
    cout<<"Enter the details of Student 5: "<<endl;
    cout<<"ID: "<<endl;
    cin>>s[5].ID;
    cout<<"No. of semesters: "<<endl;
    cin>>s[5].semesters;
    cout<<"No. of credits: "<<endl;
    cin>>s[5].credits;
    cout<<"CGPA: "<<endl;
    cin>>s[5].CGPA;

    //Student s[6];
    cout<<"Enter the details of Student 6: "<<endl;
    cout<<"ID: "<<endl;
    cin>>s[6].ID;
    cout<<"No. of semesters: "<<endl;
    cin>>s[6].semesters;
    cout<<"No. of credits: "<<endl;
    cin>>s[6].credits;
    cout<<"CGPA: "<<endl;
    cin>>s[6].CGPA;

    //Student s[7];
    cout<<"Enter the details of Student 7: "<<endl;
    cout<<"ID: "<<endl;
    cin>>s[7].ID;
    cout<<"No. of semesters: "<<endl;
    cin>>s[7].semesters;
    cout<<"No. of credits: "<<endl;
    cin>>s[7].credits;
    cout<<"CGPA: "<<endl;
    cin>>s[7].CGPA;

    //Student s[8];
    cout<<"Enter the details of Student 8: "<<endl;
    cout<<"ID: "<<endl;
    cin>>s[8].ID;
    cout<<"No. of semesters: "<<endl;
    cin>>s[8].semesters;
    cout<<"No. of credits: "<<endl;
    cin>>s[8].credits;
    cout<<"CGPA: "<<endl;
    cin>>s[8].CGPA;

    //Student s9;
    cout<<"Enter the details of Student 9: "<<endl;
    cout<<"ID: "<<endl;
    cin>>s[9].ID;
    cout<<"No. of semesters: "<<endl;
    cin>>s[9].semesters;
    cout<<"No. of credits: "<<endl;
    cin>>s[9].credits;
    cout<<"CGPA: "<<endl;
    cin>>s[9].CGPA;

    //Student s[10];
    cout<<"Enter the details of Student 10: "<<endl;
    cout<<"ID: "<<endl;
    cin>>s[10].ID;
    cout<<"No. of semesters: "<<endl;
    cin>>s[10].semesters;
    cout<<"No. of credits: "<<endl;
    cin>>s[10].credits;
    cout<<"CGPA: "<<endl;
    cin>>s[10].CGPA;

    for(int i=0;i<=10;i++)
    {
        if(s[i].CGPA>=3.75)
    {
        cout<<"Scholarship Students: "<<s[i].ID<<endl;
    }
    }

     for(int i=0;i<=10;i++)
     {
        if(s[i].credits>50)

       {
          cout<<"Students who have completed more than 50 credits: "<<s[i].ID<<endl;
       }

     }



    for(int i=0;i<=10;i++)
    {
        if(s[i].semesters>=2&&s[i].credits>=28)

        {cout<<"Sophomore Students: "<<s[i].ID<<endl;}

    }







return 0;
}



