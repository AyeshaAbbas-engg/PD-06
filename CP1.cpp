#include<iostream>
using namespace std;
string decide_activity(string temp , string humidity);

main(){
    string temp=" ", humidity=" ";
    cout << "Enter the temperature(warm, cold):";
    cin >> temp;
    cout << "Enter the humidity(dry, humid):";
    cin >> humidity;
    cout << decide_activity(temp, humidity);
}
string decide_activity(string temp, string humidity){
    if(temp=="warm" &&  humidity=="dry"){
        return "Play Tennis";
    }
    else if(temp=="warm" && humidity=="humid"){
        return "swim";
    }
    else if(temp=="cold" && temp=="dry"){
        return "play basketball";
    }
    else {
        return "Watch Doraemon";
    }
    
}