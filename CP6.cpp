#include<iostream>
using namespace std; 
string amount_calculate(string month, int day);
main(){
    string month=" ";
    int day=0;
    cout << "Enter month name:";
    cin >> month;
    cout << "Enter no. of days you have to stay:";
    cin >> day;
    string answer;
    answer= amount_calculate(month, day);
    cout << answer;
}

string amount_calculate(string month, int day){
    string ans;
     if((month=="May" || month=="October") && day <7){
        ans= "Price for apartment:" + to_string(day*65) +"$" + "\n";
        ans+= "Price for studio:" +to_string(day*50) + "$" +"\n";
    }
       else if((month=="June" || month=="September") && day <7){
        ans= "Price for apartment:" + to_string(day*68.70) + "$ \n" ;
        ans+=  "Price for studio:" + to_string(day*75.20) + "$ \n";
    }
        else if((month=="July" || month=="August") && day <7){
        ans= "Price for apartment:"+ to_string(day*77) + "$ \n" ;
        ans+=  "Price for studio:" + to_string(day*76) + "$ \n";
    }
        else if((month=="May" || month=="October") && day <7){
        ans= "Price for apartment:" + to_string(day*65) + "$ \n";
        ans+= "Price for studio:" + to_string(day*50) + "$ \n" ;
    }
        else if((month=="May" || month=="October") && (day>7 && day <14)){
        ans= "Price for apartment:" + to_string((day*65)-(day*65*0.05)) + "$ \n" ;
        ans+= "Price for studio:" + to_string((day*50)-(day*50 *0.05)) + "$ \n";
    }
       else if((month=="May" || month=="October") && day >14){
        ans= "Price for apartment:" + to_string((day*65)-(day*65*0.1)) + "$ \n";
        ans+= "Price for studio:" + to_string((day*50)-(day*50 *0.3)) + "$ \n";
    }
        else if((month=="May" || month=="October") && (day>7 && day <14)){
        ans= "Price for apartment:" + to_string(day*65) + "$ \n" ;
        ans+=  "Price for studio:" + to_string((day*50)-(day*50 *0.05)) + "$ \n";
    }
       else if((month=="June" || month=="September") && day>14){
        ans= "Price for apartment:" + to_string((day*68.70)-(day*68.70*0.1)) + "$ \n" ;
        ans+= "Price for studio:" + to_string((day*75.20)-(day*75.20*0.2)) + "$ \n";
    }
       else if((month=="July" || month=="August") && day >14){
        ans= "Price for apartment:" +  to_string((day*77)-(day*77*0.1)) + "$ \n";
        ans+=  "Price for studio:" + to_string(day*76) + "$ \n" ;
    }
      return ans;

    
}