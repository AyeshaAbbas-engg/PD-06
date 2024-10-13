#include<iostream>
using namespace std;
string astro(int date, string month);


main(){
    int date=0;
    string month=" ";
    cout << "Enter thr date of birth:";
    cin >> date;
    cout << "Enter month name:";
    cin >> month;
    cout << "Your sign is :" << astro(date , month);
}
string astro(int date, string month){
    if((month== "March"  && (date>=21&&date>=31) ) || ( month== "April" &&(date>=1 && date<=19))){
        return "Aries";
    }
    if((month== "April" && (date<=30 && date>=20) || (month=="May" && (date<=20 && date>=1)))){
        return "Taurus";
    }
    if((month=="May" && (date>=21 && date<=30) || (month=="June" && (date<=20 && date >=1)))){
        return "Gemini";
    }
    if((month=="June" && (date<=30 && date>=21)) || (month=="July" && (date<=22 && date>=1))){
        return "Cancer";
    }
    if((month== "July" && (date<=30 && date>=23)) || (month=="August" && (date<=22 && date>=1))){
        return "Leo";
    }
    if((month=="August" && (date<=30 && date>=23)) || (month=="September" && (date<=22 && date>=1))){
        return "Virgo The supreme";
    }
    if((month=="September" && (date<=30 && date>=23)) || (month=="October" && (date<=22 && date>=1))){
        return "Libra";
    }
    if((month=="October" && (date<=30 && date>=23)) || (month=="November" && (date<=22 && date>=1))){
        return "Scorpio";
    }
    if((month=="November" && (date<=30 && date>=23)) || (month=="December" && (date<=22 && date>=1))){
        return "Saggitarius";
    }
    if((month=="December" && (date<=30 && date>=22)) || (month=="January" && (date<=19 && date>=1))){
        return "Capricon";
    }
    
    if((month=="January" && (date<=30 && date>=20)) || (month=="Feburary" && (date<=18 && date>=1))){
        return "Aquarius";
    }

   
}
