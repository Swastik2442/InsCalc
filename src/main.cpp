#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

string timewatch()
{
    time_t     now;
    struct tm  ts;
    char       buf[80];
    time(&now);
    ts = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", &ts);
    return buf;
}

void insuranceGG(){
    int i = 2;
    string ct1;
    ct1 = timewatch();
    string logname = "log " + ct1 + ".txt";
    ofstream LogFile(logname);
    LogFile << "[" + ct1 + "] : Started the Insurance Calculator\n";
    while (i > 1){
        cout << "\n";
        cout << "What do you want to do?";
        cout << "\na\tRead Company Database\nb\tGenerate Vehicle Report\nc\tFormat Old Database\nd\tExit";
        string userchoice;
        cout << "\nEnter your choice: ";
        cin >> userchoice;
        if (userchoice == "a") {
            cout << "Yo";
            i = 0;
        }
        else if (userchoice == "b") {
            cout << "Yo";
            i = 0;
        }
        else if (userchoice == "c") {
            cout << "Yo";
            i = 0;
        }
        else if (userchoice == "d") {
            cout << "\nThanks for using InsCalc!\n";
            i = 0;
        }
        else {
            cout << "\nEnter a valid option!";
        }
    }
        LogFile.close();
}

int main(){
    cout << "Welcome to the Insurance Calculator";
    insuranceGG();
    // while (i > 1) {s}
    //     cout << "\n"
    //     nyc = input("Do you want to continue (y/n)? ")
    //     if nyc.lower() == "y":
    //         logline = "[" + datetime.now().strftime("%d/%m/%Y %H:%M:%S") + "] : Restarted the Insurance Calculator\n"
    //         flog.writelines(logline)
    //         mainFunc()
    //     elif nyc.lower() == "n":
    //         logline = "[" + datetime.now().strftime("%d/%m/%Y %H:%M:%S") + "] : Closing the Insurance Calculator\n"
    //         flog.writelines(logline)
    //         flog.close()
    //         break
    //     else:
    //         cout << "Enter the correct choice!";
    return 0;
}
