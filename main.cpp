/*    WEATHER  APP
NAME -> JANANI S V
COLLEGE NAME -> VIVEKANADHA COLLEGE OF ENGINEERING FOR WOMEN

DATA USED: 
   LOCATION 
   
METHODS USED:
   CLASS&OBJECTS
   IF 
   ELSE IF 
   SWITCH
*/
#include <iostream>

using namespace std;

class Weather
{
    public:
    int c,choice;
    string loc;
    string s1="Dry area";
    string s2="Hill stations";
    string s3="Delta";
    void getdata()
{
   cout<<"\nWelcome to weather app!!!";
   cout<<"\n\nLocation\nDry area\nHill stations\nDelta\n";
   cin>>loc;
}
};
class Today:public Weather
{
    public:
    void printdata1(){
        cout<<"\n\nToday report:";
    if(c=loc.compare(s1))
    {
        cout<<"\nTemparatur:32'c\nSo hot!!\nHeat waves\nDry";
    }
    else if(c=loc.compare(s2))
    {
        cout<<"\nTemperature:15'c\nSo cool!!\nRainy\nThunderstrom";
    }
    else if(c=loc.compare(s3))
    {
        cout<<"\nTemperature:22'c\nNot So hot!!\nCloudy";
    }
     else
    {
        cout<<"\nYou are in out of station";
    }
    }
};
class Yesterday:public Weather
{
    public:
    void printdata2(){
        cout<<"\n\nYesterday report:";
    if(c=loc.compare(s1))
    {
        cout<<"\nTemparatur:37'c\nSo hot!!\nHeat waves\nDry";
    }
    else if(c=loc.compare(s2))
    {
        cout<<"\nTemperature:20'c\nNot So cool!!\nRainy\nThunderstrom";
    }
    else if(c=loc.compare(s3))
    {
        cout<<"\nTemperature:26'c\nNot So hot!!\nCloudy";
    }
    else
    {
        cout<<"\nYou are in out of station";
    }
    }  
};
class Tomorrow:public Weather
{
    public:
    void printdata3(){
        cout<<"\n\nTomorrow report:";
    if(c=loc.compare(s1))
    {
        cout<<"\nTemparatur:33'c\nSo hot!!\nHeat waves\nDry";
    }
    else if(c=loc.compare(s2))
    {
        cout<<"\nTemperature:20'c\nSo cool!!\nRainy\nThunderstrom";
    }
    else if(c=loc.compare(s3))
    {
        cout<<"\nTemperature:27'c\nNot So hot!!\nCloudy";
    }
    else
    {
        cout<<"\nYou are in out of station";
    }
    }  
};
class Weekly:public Weather
{
    public:
    void printdata4(){
        cout<<"\n\nWeekly report:\nEnter your choice(1-6):";
        cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"\nMonday\nHeat waves!!";
        break;
        case 2:
        cout<<"\nTuesday\nDry!!";
        break;
        case 3:
        cout<<"\nWednesday\nSunny!!";
        break;
        case 4:
        cout<<"\nThursday\nCloudy!!";
        break;
        case 5:
        cout<<"\nFriday\nCold breeze!!";
        break;
        case 6:
        cout<<"\nSaturday\nRainy!!";
        break;
        default:
        cout<<"\nSunday\nThunderstorm!!";
        break;
    }  
        
    }
};
int main()
{
  Weather w1;
  Today t1;
  Yesterday y1;
  Tomorrow tw;
  Weekly w2;
  w1.getdata();
  t1.printdata1();
  y1.printdata2();
  tw.printdata3();
  w2.printdata4();

    return 0;
}


