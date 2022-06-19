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
    int index; //find random index in str 
    srand(time(0)); //to ensure each time a different otp is generated
    for(int i=0;i<n;i++){ //loop to find otp
        int index=rand()%l; //find index value between 0-9
        otp[i]=str[index]; //assign value to otp
    }
    for(int i=0;i<n;i++){
        cout<<otp[i]; //display otp
    }
    cout<<endl;
    cout<<"OTP is going to expire in 10 seconds!!!!"<<endl;
    Sleep(10);
    cout<<"OTP is expired now!!!!!!!";
    
}
int choiceoflength(int n){
    cout<<"Enter the length of the one time password";
    cin>>n; //input
    return n;
    //otpgenerator(n);
}
int main(){
    int n;
    int choice;
    cout<<"Enter your choice!"<<endl;
    cout<<"\t\tPress 1 for new OTP generation\n";
    cout<<"\t\tPress 2 to exit\n";
    cin>>choice;
    switch (choice)
    {
    case 1: system("cls");
            n = choiceoflength(n);
            cout<<"OTP generated is:"<<otpgenerator(n).c_str()<<endl;
            Sleep(10);
            break;
    
    case 2: exit(0);
            break;
    }

    return 0;
}