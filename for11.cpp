#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
#define N 5

struct reises
{
    int number;
    char reis[50];
    char type[50];
    char punct[50];
    float time1;
    float time2;
};



    int main ()
    {
        const int sz = 7;
         reises af[sz];
         cout << "Enter your Aeroflot details: \n";
         for (int i = 0; i < sz; ++i)
              {
                    cout << "Destination: ";
                    cin.getline(af[i].punct, 50);
                    cout << "Flight number: ";
                    cin >> af[i].number;
                    cout << "Type of aircraft (boeng = 1, airbus = 2, tupolev = 3, yak = 4: ";
                    (cin >> af[i].type).get();
                    cout << "Enter the time: ";
                    cin >> af[i].time1;
                    cout<<"Enter the time2: ";
                    cin>>af[i].time2;
                }
         for (int i = 0; i < sz; ++i)
                {
                    for (int j = i + 1; j < sz; ++j)
                    {
                        if (af[j].number < af[i].number)
                        {
                            reises temp = af[i];
                            af[i] = af[j];
                            af[j] = temp;
                        }
                    }
                }
          char punct[50];
          cout << "Enter your destination: ";
          cin.getline(punct, 50);
    bool find = false;
    for (int i = 0; i < sz; ++i)
    {
        if(!strcmp(af[i].punct, punct))
        {
            find = true;
            cout << "Flight number: " << af[i].number << '\n'
                 << "Type of aircraft: " << af[i].type << '\n';
        }
    }

    if (!find)
    {
        cout << "No flights to this destination were found!" << endl;
    }

  getch();
  return 0;

}
