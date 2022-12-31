#include <iostream>
#include <string>

using namespace std;

string nutrient_injection(int length);
int main(int argc, char *argv[])
{
    int length = 0;
    cout << endl;
    if(argc > 1)
    {
        try
        {
            length = stoi(argv[1]);
        }
        catch(const std::invalid_argument& e)
        {
            cout << "正月くらいまともな引数を入れてくれよ\n" << endl;
        }
        catch(const std::out_of_range& e)
        {
            cout << "正月くらい範囲内の値を入れてくれよ\n" << endl;
        }

    }
    
    if(length >= 0)
    {
        cout << "     A       新年"     << endl;
        cout << "   A|V|A   あけまして"   << endl; 
        cout << "  |V|-|V|  おめでとう"   << endl;
        cout << "  |-| |-|  ございます"   << endl;
        cout << "  | |-| |"              << endl;
        if(argc > 1)
            cout << nutrient_injection(length);
    }
    else
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
    cout << " (※※※※※※※)"            << endl;
    cout << " (∵∴∵∴∵∴∵)"            << endl;
    cout << " [≡≡≡≡≡≡≡] 2023年元旦" << endl;
    cout << " /≠≠≠≠≠≠≠\\"           << endl;
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