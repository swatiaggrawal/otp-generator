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
    /*
    for(int i=0;i<n;i++){
        cout<<otp[i]; //display otp
    }
    cout<<endl;
    cout<<"OTP is going to expire in 10 seconds!!!!"<<endl;
    Sleep(10);
    cout<<"OTP is expired now!!!!!!!";
    */
    return otp;
    
}
int choiceoflength(int n){
    cout<<"Enter the length of the one time password";
    cin>>n; //input
    return n;
   
}
int main(){
    int n;
    //int choice;
    string finalotp;
    char loopchoice;
    do{
    cout<<"Do you want to generate a new OTP?"<<endl;
    cout<<"\t\tPress Y for new OTP generation\n";
    cout<<"\t\tPress any key to exit\n";
    cin>>loopchoice;
    switch (loopchoice)
    {
    case 'Y':
    case 'y':system("cls");
             n = choiceoflength(n);
             finalotp=otpgenerator(n);
             cout<<"OTP generated is:"<<finalotp<<endl;
             //Sleep(10);
             cout<<endl;
             cout<<"OTP is going to expire in 10 seconds!!!!"<<endl;
             Sleep(10);
             cout<<"OTP is expired now!!!!!!!";
             break;
    
    default: exit(0);
             break;
    }

    }while(loopchoice=='y'|| loopchoice=='Y');

    return 0;
}
