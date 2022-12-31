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
        cout << "　 ∩　　     新年"     << endl;
        cout << " ∩ Ｕ∩　　あけまして"   << endl; 
        cout << " ＵＨＵ　 おめでとう"   << endl;
        cout << " Ｈ||Ｕ　 ございます"   << endl;
        cout << " ||ＨＨ"              << endl;
        if(argc > 1)
            cout << nutrient_injection(length);
    }
    else
    {
        cout << " ぬるぽ" << endl;
    }
    cout << " (※※※※)"            << endl;
    cout << " (∵∴∵∴)"            << endl;
    cout << "〔≡≡≡≡〕  2023年元旦" << endl;
    cout << "／≠≠≠≠ ＼"           << endl;
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
            result += " Ｈ||||\n";
        else
            result += " ||ＨＨ\n";
    }
    return result;
}