#include<iostream>
using namespace std;
float calav(float eng , float math, float che, float ss, float bio);
string calcmarks(float sum);
main(){
    string name;
    float eng=0.0,math=0.0,che=0.0,ss=0,bio=0.0, sum=0.0;
    cout << "Enter your name:";
    cin >> name;
    cout << "Enter marks in English:";
    cin >> eng;
    cout << "Enter marks in Math:";
    cin >> math;
    cout << "Enter marks in Chemistry:";
    cin >> che;
    cout << "Enter marks in Social Sciences:";
    cin >> ss;
    cout << "Enter makrs in Biology:";
    cin >> bio;
    cout << "Name of student " << name << endl;
    
    cout << calav(eng, math, che, ss, bio) << "%" << endl;
    cout << calcmarks(sum) << endl;
}
float calav(float eng , float math, float che, float ss, float bio){
    float sum;
    sum = ((eng+math+che+ss+bio)/500)*100;
    return sum;

}
string calcmarks(float sum){ 
    if(sum<=100 &&sum >= 90){
        return "A+";
    }
    else if (sum <90 &&sum >=80){
        return "A";
    }
    else if(sum <80 && sum >=70){
        return "B+";
    }
    else if(sum <70 && sum >=60){
        return "B";
    }
    else if (sum< 60 && sum >=50){
        return "C";
    }
    else if(sum <50 &&sum >=40){
        return "D";
    }
    else{
        return "F";
    }
}


