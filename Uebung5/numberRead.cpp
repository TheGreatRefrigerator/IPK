//
// Created by Amandus Butzer on 11/26/2018.
//

#include <iostream>

using namespace std;

pair<int, int> parse_int(string number) {
    string resultNumber;
    pair<int,int> resultPair;
    bool parsing = true;
    bool signesAllowed = true;
    for (char c : number) {
        if (isdigit(c) && parsing)
            resultNumber += c;
        else if (!parsing)
            ;
        else {
            switch (c) {
                case ' ':
                    if (!signesAllowed)
                        parsing = false;
                    break;
                case '-':
                    if (resultNumber.empty())
                        resultNumber += c;
                case '+':
                    signesAllowed = false;
                    break;
                default:
                    parsing = false;
                    resultPair.second = (int) number.find(c);

            }
        }
    }
    if (resultNumber.empty() || resultNumber == "-") {
        throw invalid_argument("The number should start with space, sign or a digit.");
    }
    resultPair.first = stoi(resultNumber);
    return resultPair;
}

int main () {
    string s;
    getline(cin, s);
    cout << parse_int(s).first << " " << parse_int(s).second << endl;

    return 0;
}