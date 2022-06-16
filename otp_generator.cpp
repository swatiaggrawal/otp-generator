#include<iostream>
#include<conio.h>
using namespace std;
void otpgenerator(int n) //function to generate otp
{
    string str="0123456789"; 
    int l=str.length();
    string otp;
    int j;
    srand(time(0)); //to ensure each time a different otp is generated
    
}
int main(){
    int n;
    cout<<"Enter the length of the one time password";
    cin>>n; //input
    otpgenerator(n);
    return 0;
}