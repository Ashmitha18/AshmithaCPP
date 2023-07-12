/*Weather report

P.Ashmitha
Vivekanandha College of engineering for Women,Tiruchengode,Namakkal

*/
#include <iostream>
#include <string>
using namespace std;

class WeatherReport {
protected:
    string weather;

public:
    void setWeather(string w) {
        weather = w;
    }

    void displayReport() {
        cout << "Weather: " << weather << endl;
    }
};

class Today : public WeatherReport {
public:
    void showTodayReport() {
        setWeather("Cloudy");
        displayReport();
    }
};

class Yesterday : public WeatherReport {
public:
    void showYesterdayReport() {
        setWeather("Dry");
        displayReport();
    }
};

class Tomorrow : public WeatherReport {
public:
    void showTomorrowReport() {
        setWeather("Sunny");
        displayReport();
    }
};

class Weekly : public WeatherReport {
public:
    void showWeeklyReport() {
        setWeather("Rain, Thunderstorm, Heatwaves");
        displayReport();
    }
};

class Monthly : public WeatherReport {
public:
    void showMonthlyReport() {
        setWeather("Temperature, Rain Possibility, Humidity");
        displayReport();
    }
};

int main() {
    Today today;
    Yesterday yesterday;
    Tomorrow tomorrow;
    Weekly weekly;
    Monthly monthly;
    int choice;
    cout << "Choose an option:" << endl;
    cout << "1. Today's weather" << endl;
    cout << "2. Yesterday's weather" << endl;
    cout << "3. Tomorrow's weather" << endl;
    cout << "4. Weekly weather" << endl;
    cout << "5. Monthly weather" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
    cout << "Today's Weather Report:" << endl;
    today.showTodayReport();
    break;
    case 2:
    cout << "\nYesterday's Weather Report:" << endl;
    yesterday.showYesterdayReport();
    break;
    case 3:
    cout << "\nTomorrow's Weather Report:" << endl;
    tomorrow.showTomorrowReport();
    break;
    case 4:
    cout << "\nWeekly Weather Report:" << endl;
    weekly.showWeeklyReport();
    break;
    case 5:
    cout << "\nMonthly Weather Report:" << endl;
    monthly.showMonthlyReport();
    break;
    }
    return 0;
}
