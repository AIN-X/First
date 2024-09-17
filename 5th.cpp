#include<iostream>
using namespace std;

int main(){

    int age;

    cout<<" enter your age : ";
    cin>>age;


    if (age<18)
    {
        cout<<" you can't get any web site!"<<endl;

    }

else if (age==18){

    cout<<"parmit for some  website"<<endl;
}

else{
    cout<<" permit for all website"<<endl;
}
    return 0;
}