#include<iostream>
using namespace std;

class a{
    public:
    string uname,  pword, rword;
    void regi(){
   
    cout<<"Enter username: ";
    cin>>uname;
    cout<<"Enter password: ";
    cin>>pword;
    cout<<"Re-confirm password: ";
    cin>>rword;
    if(rword==pword){
        cout<<"Registration successful! ";
    }
    else{
        cout<<"Invalid credentials!\n\n";
        regi();
    }

}

};
class b:public a{
    public:
    string name, pass;
    void log(){
    b ob;
    cout<<"Enter username: ";
    cin>>name;
    cout<<"Enter password: ";
    cin>>pass;
   
    
}
};



int main(){
    b ob;

    cout<<"--------------Welcome To Hungry Dude-------------------";
    cout<<endl;
    cout<<"\n\n---------Welcome to Registration page---------";
    cout<<endl;
    ob.regi();
    cout<<"\n\n---------Welcome to Login page---------";
    cout<<endl;
    ob.log();
    if(ob.uname==ob.name && ob.rword==ob.pass){
        cout<<"You have entered successfully!";
    }
    else{
        cout<<"Invalid credentials!";
        /*log();*/

    }


    return 0;
}