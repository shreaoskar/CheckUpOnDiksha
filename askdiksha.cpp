#include <iostream>
#include <chrono>
#include <thread>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
using std::chrono::system_clock;

string hoomanName, hoomanMine, input;
void who(), consent(), checkInput(), talk(), talk2(), ques1(), empathy();

int main(){

    who();
    sleep_until(system_clock::now()+ 1s);
    cout << endl;

    consent();
    cin >> input;
    
    checkInput();
    sleep_until(system_clock::now()+ 1s);
    cout << endl;

    talk();
    cout << endl;

    talk2();
    sleep_until(system_clock::now()+ 1s);
    ques1();

    return 0;
}



void who(){
    cout << "Who am I speaking to?" << endl;
    getline(cin, hoomanName);
    transform(hoomanName.begin(), hoomanName.end(),hoomanName.begin(), ::tolower);
    if (hoomanName == "diksha"){
        hoomanName = "Diksha";
        hoomanMine = "my flat ass sweetheart";
    }
    cout << "I hope you are doing well, " << hoomanName << "!" << endl;
}


void consent(){
    cout << "Let's check up on you now. Okay, " << hoomanName << "?" << endl;
    cout << "[1] Okay, Roy!\n"
         << "[2] Not right now.\n";
}


void checkInput(){
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
}


void talk(){
    cout << "Anyways, let's get back to fulfilling our objectives!\n";
    sleep_until(system_clock::now()+ 2s);
    cout << "It has been quite some time since I have seen you smile and be happy.\n";
    sleep_until(system_clock::now()+ 3s);
    cout << "I hope to see you soon, pick you up and throw you down a sewer quite literally.\n";
    sleep_until(system_clock::now()+ 4s);
}


void talk2(){
    cout << "Now, I have a few questions regarding your mental health,\n";
    sleep_until(system_clock::now()+ 2s);
    cout << "but as I do not have the knowledge to make real time applications\n";
    sleep_until(system_clock::now()+ 2s);
    cout << "I can't ask you questions to which I don't have pre-recorded responses.\n";
    sleep_until(system_clock::now()+ 2s);
    cout << "So I will ask some of the easy questions now.\n";
}


void ques1(){
    cout << "First of all, are you depressed?\n";
    sleep_until(system_clock::now()+ 1s);
    cout << "[1] Yes.\n"
         << "[2] No.\n"
         << "[3] Maybe, idk.\n";
    cin >> input;


    if (input == "1"){
        empathy();
    } else if(input == "2"){
        cout << "I'm happy that's the case,\n"
             << "but I guarantee you that you would have been happier\n"
             << "if you were with me. ;)\n";   
    } else if(input == "3"){
        cout << "I'm always here to help you figure things out, " << hoomanMine << ".\n";
    } else {
        cout << "Invalid!\n\n";
        cout << "Are you depressed, "<< hoomanMine << "?\n";
        cout << "[1] Yes.\n"
             << "[2] No.\n"
             << "[3] Maybe, idk.\n";
        cin >> input;
        if(input == "1"){
            empathy();
        } else if(input == "2"){
            cout << "I'm happy that's the case,\n"
             << "but I guarantee you that you would have been happier\n"
             << "if you were with me;)\n";
        } else if(input == "3"){
        cout << "I'm always here to help you figure things out, " << hoomanMine << ".\n";
        } else {
            cout << "You're testing my code too much " << hoomanMine <<".\n";
        }
    }
}


void empathy(){

}
