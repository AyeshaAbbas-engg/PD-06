#include <iostream>
using namespace std;
string services(char digi, int min, char time);

main()
{
    char digi = ' ', time = ' ';
    int min = 0;
    cout << "Enter service name(P/p for premium and  R/r ffor regular):";
    cin >> digi;
    cout << "Enter number of minutes:";
    cin >> min;
    cout << "Enter time of day:";
    cin >> time;
    services(digi, min, time);
}
string services(char digi, int min, char time)
{
    if ((digi == 'p' || digi == 'P') && (time == 'N' || time == 'n'))
    {
        if (min < 100)
        {
            cout << "Service type Premium" << endl;
            cout << "Total minutes used:" << min << endl;
            cout << "Amount total:" << "$" << 25;
        }
    }
    else if ((digi == 'p' || digi == 'P') && (time == 'D' || time == 'd'))
    {
        if (min < 75)
        {
            cout << "Service type Premium" << endl;
            cout << "Total minutes used:" << min << endl;
            cout << "Amount total:" << "$" << 25;
        }
    }
    else if ((digi == 'p' || digi == 'P') && (time == 'D' || time == 'd'))
    {
        if (min > 75)
        {
            cout << "Service type Premium" << endl;
            cout << "Total minutes used:" << min << endl;
            cout << "Amount total:" << "$" << 25 + ((min - 75) * 0.10);
        }
    }
    else if ((digi == 'p' || digi == 'P') && (time == 'n' || time == 'N'))
    {
        if (min > 100)
        {
            cout << "Service type Premium" << endl;
            cout << "Total minutes used:" << min << endl;
            cout << "Amount total:" << "$" << 25 + ((min - 100) * 0.05);
        }
    }
    else if ((digi == 'r' || digi == 'R') && (time == 'D' || time == 'd'))
    {
        if (min < 75)
        {
            cout << "Service type Regular" << endl;
            cout << "Total minutes used:" << min << endl;
            cout << "Amount total:" << "$" << 10;
        }
    }
    else if ((digi == 'r' || digi == 'R') && (time == 'D' || time == 'd'))
    {
        if (min > 75)
        {
            cout << "Service type Regular" << endl;
            cout << "Total minutes used:" << min << endl;
            cout << "Amount total:" << "$" << 10 + ((min - 75) * 0.10);
        }
    }
    else if ((digi == 'r' || digi == 'R') && (time == 'n' || time == 'N'))
    {
        cout << "Workimhg";
        if (min < 100)
        {
            cout << "Service type Regular" << endl;
            cout << "Total minutes used:" << min << endl;
            cout << "Amount total:" << "$" << 10;
        }
    }
    else if ((digi == 'r' || digi == 'R') && (time == 'n' || time == 'N'))
    {
        if (min > 100)
        {
            cout << "Service type Regular" << endl;
            cout << "Total minutes used:" << min << endl;
            cout << "Amount total:" << "$" << 10 + ((min - 100) * 0.05);
        }
    }
}

