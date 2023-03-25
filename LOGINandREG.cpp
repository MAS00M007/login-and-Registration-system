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


int main(){
int ch;


cout<<"\t\t----------Wlc u all---------- "<<endl;
cout<<"\n";
cout<<"\t\t-----Menu------ "<<endl;
cout<<"\n";

cout<<"\t--> Press 1 for login "<<endl;

cout<<"\t--> Press 2 for registration "<<endl;

cout<<"\t--> Press 3 to exit "<<endl;
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
    break;

default:
cout<<"Thanks for visiting ";
    break;
}




    return 0;
}































































//Team name=Masoom,Aryan,Mayank,Sagar;