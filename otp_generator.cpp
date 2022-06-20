#include<iostream>
#include<conio.h>
#include<time.h>
#include<windows.h>
using namespace std;
string otpgenerator(int n) //function to generate otp
{
    string str="0123456789"; 
    int l=str.length();
    string otp; //final otp
    srand(time(0)); //to ensure each time a different otp is generated
    for(int i=0;i<n;i++){ //loop to find otp
        otp.push_back(str[rand() % l]);
    }
    
   
    return otp;
    
}
int choiceoflength(int n){
    cout<<"Enter the length of the one time password";
    cin>>n; //input
    return n;
   
}
int main(){
    int n;
    string finalotp;
    char loopchoice;
    do{
    system("cls");
    cout<<"Do you want to generate a new OTP?"<<endl;
    cout<<"\t\tPress Y for OTP generation\n";
    cout<<"\t\tPress any key to exit\n";
    cin>>loopchoice;
    switch (loopchoice)
    {
    case 'Y':
    case 'y':system("cls");
             n = choiceoflength(n);
             finalotp=otpgenerator(n);
             cout<<"OTP generated is:"<<finalotp<<endl;
             cout<<endl;
             cout<<"OTP is going to expire in 10 seconds!!!!"<<endl;
             Sleep(10000);
             cout<<"OTP is expired now!!!!!!!";
             break;
    
    default: exit(0);
             break;
    }

    }while(loopchoice=='y'|| loopchoice=='Y');

    return 0;
}