#include<iostream>
#include<string>
using namespace std;
struct employee
{
    string name;
    int age;
    string gender;
    string position;
    /* data */
};
void readEmployee(employee e){
    cout<<"Please enter the following details as follows : "<<endl;
    cout<<" names : "<<endl;
    cin>>e.name;
    cout<<endl;
    cout<<" age : "<<endl;
    cin>>e.age;
    cout<<endl;
    cout<<"Gender : "<<endl;
    cin>>e.gender;
    cout<<endl;
    cout<<"Working position : "<<endl;
    cin>>e.position;
    cout<<endl;

}
int main(){
    employee e1;
    employee e2;
    readEmployee(e1);
    readEmployee( e2);
    return 0;
}
