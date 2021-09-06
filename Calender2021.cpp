// " Your Daily       Routine is
//  Your Destiny   Route "

#include <iostream>
using namespace std;

struct dayInfo{
    
    int daynum;
    int day_num;

};

int main()
{
    struct dayInfo calendar[365];
    int days_in_months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string months[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    
    int dayn = 0;
    
    for(int i = 0; i < 12; ++i)
    {
        for(int j = 0; j < days_in_months[i]; ++j)
        {
            calendar[dayn].daynum = dayn;
            calendar[dayn].day_num = (dayn+5)%7;
            //(dayn+5) because 1st jan lies on friday;
            ++dayn;
        }
    }
    
    dayn = 0;
    int temp, temp_weekday;
    for(int i = 0; i < 12; ++i){
         
        cout <<"         " << months[i] << endl;
        cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;
        
        temp = dayn;
        temp_weekday = calendar[dayn].day_num;
        
        for(int j = 0; j < temp_weekday; ++j)
        cout << "    ";
        
        
        for(int j = 0; j < days_in_months[i]; ++j)
        {
            if(calendar[dayn].day_num == 6)
            {
                cout << " " << j+1 << endl;
            }
            else
            {
                if(j+1 < 10)
                {
                    cout << " " << j+1 << "  ";
                }
                else
                {
                    cout << j+1 << "  ";
                }
            }
            
            
            ++dayn;
        }
        
        cout << "\n\n";
    }

    
}
