#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
using std::chrono::system_clock;

int main(){
    string hoomanName = "";

    cout << "Who am I speaking to?" << endl;
    cin >> hoomanName;
    cout << "I hope you are doing well, " << hoomanName << "!" << endl;
    sleep_until(system_clock::now()+ 1s);
    cout << endl;

    cout << "Let's check up on you now. Okay, " << hoomanName << "?" << endl;
    cout << "[1] Okay, Roy!\n"
         << "[2] Not right now.\n";
    std::string input;
    //std::getline(std::cin, input);
    cin >> input;
    if (input == "1"){
        cout << "Good choice, bitch." << endl;
    } else if(input == "2"){
         cout << "Bitch thought she had a choice lmao!" << endl;
    } else {
        cout << "Invalid!\n\n";
        cout << "Let's check up on you now. Okay, " << hoomanName << "?" << endl;
        cout << "[1] Okay, Roy!\n"
             << "[2] Not right now\n";
        cin >> input;
        if(input == "1"){
            cout << "Good choice, bitch." << endl;
        } else if(input == "2"){
            cout << "Bitch thought she had a choice lmao!" << endl;
        } else {
            cout << "Considering you are spending so much time on this, I will take it as an yes." << endl;
        }
    }
     sleep_until(system_clock::now()+ 1s);
    cout << "Wait for next update for more!" << endl;
    
    return 0;
}
