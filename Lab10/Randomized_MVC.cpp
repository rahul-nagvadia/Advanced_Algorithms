//Randomized approximation of the Minimum Vertex problem

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int, int>> vect;
    
    // vect.push_back({0, 1});
    // vect.push_back({1, 2});
    // vect.push_back({1, 3});
    // vect.push_back({2, 4});
    // vect.push_back({2, 5});
    // vect.push_back({3, 4});
    
    vect.push_back({0, 1});
    vect.push_back({0, 2});
    vect.push_back({0, 3});
    vect.push_back({1, 2});
    vect.push_back({1, 3});
    vect.push_back({2, 3});
    
    map<int, bool> visited;
    vector<int> solution;
    

    while(visited.size() < vect.size())
    {
        int randomIndex = rand() % 6;
        cout << "Random Number : " << randomIndex << endl;
        
        if(!visited[randomIndex])
        {
            int u = vect[randomIndex].first;
            int v = vect[randomIndex].second;
            solution.push_back(u);
            solution.push_back(v);
            visited[randomIndex] = true;
            
            for(int i = 0; i < vect.size(); i++)
            {
                if(vect[i].first == u || vect[i].second == u || vect[i].first == v || vect[i].second == v)
                {
                    visited[i] = true;
                }
            }
        }
    }
    
    cout << (double)(solution.size() / 3.0) << endl;
    
    return 0;
}


