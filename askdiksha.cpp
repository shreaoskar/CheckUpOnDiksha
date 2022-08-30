#include <iostream>
#include <chrono>
#include <thread>
#include <cstring>
#include <string>
#include <algorithm>
#include <iomanip>
#include <list>
#include <sstream>

using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
using std::chrono::system_clock;

string hoomanName, hoomanMine, input;
void who(), consent(), checkInput(), talk(), talk2(), ques1(), ques2(), empathy(), end(), birthday();

int main(){

    who();
    sleep_until(system_clock::now()+ 3s);
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
    cout << endl;

    ques2();
    sleep_until(system_clock::now()+ 3s);
    cout << endl;
    end();

    return 0;
}



void who(){
    cout << "Who am I speaking to?" << endl;
    getline(cin, hoomanName);
    transform(hoomanName.begin(), hoomanName.end(),hoomanName.begin(), ::tolower);
    if (hoomanName == "diksha"){
        hoomanName = "Diksha";
        hoomanMine = "my flat ass sweetheart";
        birthday();
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
    cout << "It has been quite some time since I have seen you smile and be happy.\n";
    sleep_until(system_clock::now()+ 2s);
    cout << "I hope to see you soon, pick you up and throw you down a sewer quite literally.\n";
    sleep_until(system_clock::now()+ 3s);
}


void talk2(){
    cout << "Now, I have a couple of questions regarding your mental health,\n";
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
    cout << "I'm really sorry to hear that\n"
         << "but I'm at the same time very proud of you for being so open about it\n";
    sleep_until(system_clock::now()+ 2s);
    cout << "I want to let you know that you are cared about and loved\n";
    cout << "I hope we can meet sometime soon and talk about everything that needs to be freed up from within\n";
    sleep_until(system_clock::now()+ 1s);
}

void ques2(){
    cout << "Are you happy?\n"
         << "[1] Ye-haw.\n"
         << "[2] No, not really.\n"
         << "[3] I avoid thinking about how I am." << endl;
    cin >> input;
    if(input == "1"){
        cout << "I have waited for so long to hear that, " << hoomanMine << ".\n"
             << "I am really fascinated by your growth and maturity.\n";
    } else if(input == "2"){
        cout << "You would be with me. I am giving you a proper solution to your issues.\n"
             << "I would love to see you more often and just try helping yk\n";
    } else if(input == "3"){
        cout << "I am always here to help you express yourself better\n"
             << "Always around for a dance.\n";
    } else {
        cout << "Invalid!\n\n";
        cout << "Are you happy?\n"
         << "[1] Ye-haw.\n"
         << "[2] No, not really.\n"
         << "[3] I avoid thinking about how I am." << endl;
        cin >> input;
        if(input == "1"){
        cout << "I have waited for so long to hear that, " << hoomanMine << ".\n"
             << "I am really fascinated by your growth and maturity.\n";
        } else if(input == "2"){
        cout << "You would be with me. I am giving you a proper solution to your issues.\n"
             << "I would love to see you more often and just try helping yk\n";
        } else if(input == "3"){
        cout << "I am always here to help you express yourself better\n"
             << "Always around for a dance.\n";
        }
    }
}

void end(){
    cout << "This is the first of many such programs that will be made in your name\n"
         << "This is my first program ever and there is much to learn.\n"
         << "Hence why this is so short.\n";
    sleep_until(system_clock::now()+ 1s);
    cout << "Care Take, " << hoomanName << ".\n"
         << "See you next time, till then fuck you.\n";
}

void birthday(){
     auto currentTime = std::chrono::system_clock::to_time_t(
        std::chrono::system_clock::now()
    );

    std::stringstream timeStream;
    timeStream << std::put_time(std::localtime(&currentTime), "%m-%d");

    const std::list<std::string> birthday = {"11-28"};
    for (auto& date : birthday)
    {
        if(timeStream.str() == date)
        {
            std::cout << "Happy birthday!!\n";
        } else {
            cout << endl;
        }
    }

}
