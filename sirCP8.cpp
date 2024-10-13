#include <iostream>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends) {
    int totalWeekends = 48; 
    int sofiaWeekends = totalWeekends - hometownWeekends; 
    double sofiaPlayWeekends = sofiaWeekends * 3.0 / 4.0; 
    double holidayGames = holidays * 2.0 / 3.0; 
    double totalGames = sofiaPlayWeekends + holidayGames + hometownWeekends;
    if (yearType == "leap") {
        totalGames =totalGames*1.15;
    }
    return totalGames;
}
main() {
    string yearType;
    int holidays, hometownWeekends;
    cout << "Enter year type (leap or normal): ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends spent in hometown: ";
    cin >> hometownWeekends;
    int totalGames = calculateVolleyballGames(yearType, holidays, hometownWeekends);
    cout << totalGames << "\n";
}