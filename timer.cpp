#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;



string checkFormat(int num){
    /*check timer format is 00:00:00*/
    if(num < 10){
        return "0" + to_string(num);
    }
    return to_string(num);
}



int main(){
    int hour = 0 , min = 0, sec = 0;

    string str;

    while(true){
        system("clear");
        cout << "\n" << "\t" << 
                checkFormat(hour) << ":" <<
                checkFormat(min) << ":" <<
                checkFormat(sec) << endl;



        sleep(1);

        sec = sec + 1;
        if(sec == 60){
            min = min + 1;
            sec = 0;
        }
        if(min == 60){
            hour = hour + 1;
            min = 0;
        }
    }


    return 0;
}