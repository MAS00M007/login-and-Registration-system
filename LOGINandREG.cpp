#include <iostream>
#include <fstream>
#include <string>
using namespace std;

 string ruserId,rpassword;
string username,id,password,pass;

void login(){
int count;

cout<<"Enter username "<<endl;
cin>>username;

cout<<"enter password "<<endl;
cin>>password;
system("cls");

ifstream input("input.txt");
while(input>>id>>pass){
    if(id==username && pass==password){
      count=1;
    }
}
input.close();
if(count==1){

        cout<<"\n";

    cout<<"[------succes------]"<<endl;
       

    cout<<"\n";
    cout<<"\n";
}
else{

    cout<<"[----error-----]"<<endl;
        cout<<"check your usename and password again or Register first"<<endl;

    cout<<"\n";
    cout<<"\n";
}
}





/*
if(username==ruserId && password==rpassword){
    cout<<"\n";
    cout<<"[succes]"<<endl;
        cout<<"\n";

}
else{
    cout<<"\n";
    cout<<"[error]"<<endl;
    cout<<"*Check ur username and password again or register first";
cout<<"\n";

}
*/

void Registration(){
   

cout<<"Enter Username "<<endl;
cin>>ruserId;

cout<<"Enter password "<<endl;
cin>>rpassword;

system("cls");

ofstream out("input.txt",ios::app);
out<<ruserId<<" "<<rpassword<<endl;
system("cls");
cout<<"\n";
cout<<"Registration is successful"<<endl;
cout<<"\n";
cout<<"\n";
cout<<"\n";

}


void Forgot(){
    int op;
    cout<<"Press 1 to search username "<<endl;
    cout<<"Press 2 to go back to main menu "<<endl;
cout<<"Enter-->";
cin>>op;
    switch(op)
    {
    case 1:{
        int count=0;
        string fusername,fId,fpass;

        cout<<"Enter username ";
        cin>>fusername;
        system("cls");

        ifstream f2("input.txt");
        while(f2>>fId>>fpass){
            if(fId==fusername){
                count=1;
            }
        }
        f2.close();
        if(count==1){
                        cout<<"\n";
            cout<<"\n";

            cout<<"[Account is found] "<<endl;
            cout<<"-->Your password is "<<fpass<<endl;
            cout<<"\n";
                        cout<<"\n";
        }   
        else {
            cout<<"\n";
            cout<<"[-----*user not found*------]";
                        cout<<"\n";
            cout<<"\n";
                        cout<<"\n";
            cout<<"\n";


        } 
    }
    
    case 2:
                cout<<"\n";
            cout<<"\n";

    default:
        break;
    }
}







int main(){
int ch;


cout<<"\t\t----------Wlc u all---------- "<<endl;
cout<<"\n";
cout<<"\t\t-----Menu------ "<<endl;
cout<<"\n";

cout<<"\t--> Press 1 for login "<<endl;

cout<<"\t--> Press 2 for registration "<<endl;

cout<<"\t--> Press 3 to forgot password "<<endl;


cout<<"\t--> Press 4 to exit "<<endl;
cout <<"\t--------------------------------"<<endl;

cout<<"Enter--->";
cin>>ch;
switch (ch)
{
case 1:
login();
main();
break;


case 2:
Registration();
    main();

    case 3:
    Forgot();
main();

 case 4:
    break;

default:
cout<<"Thanks for visiting ";
    break;
}




    return 0;
}































































//Team name=Masoom,Aryan,Mayank,Sagar;