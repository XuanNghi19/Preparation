#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int id_GS=1;
int id_HS=1;

class Person
{
protected:
    string name;
    int age;
public:
    Person()
        : name(""), age(0)
    {}
    virtual void getdata()
    {
        scanf("\n");
        cin >> name;
        cin >> age;
    }
    virtual void putdata()
    {
        cout << name << " " << age << " ";
    }
    ~Person(){}
};

class Student : public Person
{
private:
    int publications;
    int cur_id;
    int marks[6];
public:
    Student()
        : Person()    
    {}
    void getdata() override
    {
        Person::getdata();
        cin >> publications;
        cur_id = id_GS;
        id_GS++;
        for(int i=0; i<6; i++)
        {
            cin >> marks[i];
        }
    }
    void putdata() override
    {
        Person::putdata();
        cout << publications << " ";
        int sum=0;
        for(int i=0;i<6;i++) sum += marks[i];
        cout << sum << " " << cur_id << endl;
    }
    ~Student(){}
};

class Professor : public Person
{
private:
    int publications;
    int cur_id;
public:
    Professor()
        : Person()
    {}
    void getdata() override
    {
        Person::getdata();
        cin >> publications;
        cur_id = id_HS;
        id_HS++;
    }
    void putdata() override
    {
        Person::putdata();
        cout << publications << " " << cur_id << endl;
    }
    ~Professor(){}
};


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
