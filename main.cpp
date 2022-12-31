#include <iostream>
#include <string>

using namespace std;

string nutrient_injection(int length);
int main(int argc, char *argv[])
{
    int length = 0;
    bool is_nullpoga = false;
    cout << endl;
    if(argc > 1)
    {
        try
        {
            length = stoi(argv[1]);
        }
        catch(const std::invalid_argument& e)
        {
            if(!((string)argv[1] == "NULL")) cout << "正月くらいまともな引数を入れてくれよ\n" << endl;
        }
        catch(const std::out_of_range& e)
        {
            cout << "正月くらい範囲内の値を入れてくれよ\n" << endl;
        }
        if((string)argv[1] == "NULL" || (string)argv[1] == "0") is_nullpoga = true;

    }
    if(is_nullpoga)
    {
        cout << "     A  " << endl;
        cout << "    |V|    " << endl;
        cout << "    | |    " << endl;
        cout << "    |N|    " << endl;
        cout << "    |U|    " << endl;
        cout << "    |L|    " << endl;
        cout << "    |L|    " << endl;
        cout << "    |P|    " << endl;
        cout << "    |O|    Ga! >" << endl;
    }
    else if(length >= 0)
    {
        cout << "     A       新年"     << endl;
        cout << "   A|V|A   あけまして"   << endl; 
        cout << "  |V|-|V|  おめでとう"   << endl;
        cout << "  |-| |-|  ございます"   << endl;
        cout << "  | |-| |"              << endl;
        cout << nutrient_injection(length);
    }
    cout << " (WWWWWWW)"            << endl;
    cout << " (¥¥¥¥¥¥¥)"            << endl;
    cout << " [=======] 2023年元旦" << endl;
    cout << " /#######\\"           << endl;
    
    if(length < 0)
    {
        cout << nutrient_injection(abs(length));
        cout << "  |A| |A|  ございます"     << endl;
        cout << "   V|A|V   おめでとう"     << endl;
        cout << "     V     あけまして"   << endl;
        cout << "             新年"     << endl;

    }
    cout << endl;
    return 0;
}

string nutrient_injection(int length)
{
    if(length > 100) length = 100;

    string result = "";
    for(int i = 0; i < length; i++)
    {
        if(i % 2 == 0)
            result += "  |-| |-|  \n";
        else
            result += "  | |-| |\n";
    }
    return result;
}