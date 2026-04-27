#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include "OneNote.h"
#include <stack>
#include <cstring>
#include <sstream>
#include <string>


using namespace std;
class Solution
{
public:
    vector<int> exclusiveTime(int n, vector<string>& logs)
    {
        vector<int> result;
        for (int i = 0; i < n; i++) 
        {
            result.emplace_back(0);
        }
        for (const string& str : logs) 
        {
            stringstream ss(str);
            string part;
            cout << "Log: " << str << endl;

            getline(ss, part, ':');
            int id = stoi(part.c_str());
            cout << "ID: " << id << endl;

            getline(ss, part, ':');
            string act = part;
            cout << "Action: " << act << endl;

            getline(ss, part, ':');
            int time = stoi(part);
            cout << "time = " << time << endl;
            cout << endl;
        }
        return result;
    }
};