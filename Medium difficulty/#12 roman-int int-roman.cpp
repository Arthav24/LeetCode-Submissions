#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return -1;
}
int romanToInt(string s)
{
    int TOTAL = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int s1 = value(s[i]);
        if (i + 1 < s.length())
        {
            int s2 = value(s[i + 1]);
            if (s1 >= s2)
                TOTAL = TOTAL + s1;
            else
            {
                TOTAL = TOTAL + s2 - s1;
                i++;
            }
        }
        else
            TOTAL = TOTAL + s1;
    }
    return TOTAL;
}
string intToChar(int x)
{
    if (x == 0)
        return "";
    else if (x == 1)
        return "I";
    else if (x == 2)
        return "II";
    else if (x == 3)
        return "III";
    else if (x == 4)
        return "IV";
    else if (x == 5)
        return "V";
    else if (x == 6)
        return "VI";
    else if (x == 7)
        return "VII";
    else if (x == 8)
        return "VIII";
    else if (x == 9)
        return "IX";
    else if (x == 10)
        return "X";
    else if (x == 40)
        return "XL";
    else if (x == 90)
        return "XC";
    else if (x == 50)
        return "L";
    else if (x == 100)
        return "C";
    else if (x == 400)
        return "CD";
    else if (x == 500)
        return "D";
    else if (x == 900)
        return "CM";
    else if (x == 1000)
        return "M";
}
string intToRoman(int num)
{
    int d = 0;
    string roman;
    int t;
    while (num != 0)
    {
        if (d > 0)
            t = (num % 10) * (pow(10, d));
        else
            t = (num % 10);
        roman.insert(0, intToChar(t));
        ++d;
        num = num / 10;
    }
    return roman;
}
string intToRoman2(int num)
{
    string m[] = {"", "M", "MM", "MMM"};
    string c[] = {"", "C", "CC", "CCC", "CD", "D",
                  "DC", "DCC", "DCCC", "CM"};
    string x[] = {"", "X", "XX", "XXX", "XL", "L",
                  "LX", "LXX", "LXXX", "XC"};
    string i[] = {"", "I", "II", "III", "IV", "V",
                  "VI", "VII", "VIII", "IX"};

    string thousands = m[num / 1000];
    string hundereds = c[(num % 1000) / 100];
    string tens = x[(num % 100) / 10];
    string ones = i[num % 10];

    string ans = thousands + hundereds + tens + ones;

    return ans;
}

int main()
{

    cout << intToRoman2(20);
    //cout<<romanToInt("MCMXCVII");
    return 0;
}