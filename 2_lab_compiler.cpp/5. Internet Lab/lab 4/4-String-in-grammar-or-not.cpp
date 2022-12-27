
#include <bits/stdc++.h>
using namespace std;

vector<string> terminals, non_terminals;

unordered_map<string, vector<vector<string>>> R;

void cykParse(vector<string> w)
{
    int n = (int)w.size();

    map<int, map<int, set<string>>> T;

    for (int j = 0; j < n; j++)
    {

        for (auto x : R)
        {
            string lhs = x.first;
            vector<vector<string>> rule = x.second;

            for (auto rhs : rule)
            {

                // If a terminal is found
                if (rhs.size() == 1 && rhs[0] == w[j])
                    T[j][j].insert(lhs);
            }
        }
        for (int i = j; i >= 0; i--)
        {

            // Iterate over the range from i to j
            for (int k = i; k <= j; k++)
            {

                // Iterate over the rules
                for (auto x : R)
                {
                    string lhs = x.first;
                    vector<vector<string>> rule = x.second;

                    for (auto rhs : rule)
                    {

                        if (rhs.size() == 2 && T[i][k].find(rhs[0]) != T[i][k].end() && T[k + 1][j].find(rhs[1]) != T[k + 1][j].end())
                            T[i][j].insert(lhs);
                    }
                }
            }
        }
    }

    if (T[0][n - 1].size() != 0)
        cout << "True\n";
    else
        cout << "False\n";
}

int main()
{

    terminals = {"a", "b"};

    non_terminals = {"S"};

    R["S"] = {{"a", "S"}, {"S", "b"}, {"a", "b"}};

    vector<string> w = {"a", "a", "b"};

    cykParse(w);

    return 0;
}