#include<bits/stdc++.h>
using namespace std;

bool hasPath(vector<string> grid,int x,int y)
{

    if(x == grid.size()-1 && y == grid[0].size()-1)
    return true;

    bool right= false;
    bool down = false;

    if(x+1<grid.size() && grid[x+1][y]!='#')
    down = hasPath(grid,x+1,y);

    if(y+1<grid[0].size() && grid[x][y+1]!='#')
    right = hasPath(grid,x,y+1);


    return down || right;
}


string reachTheEnd(vector<string> grid,int maxTime)
{
    int r = grid.size();
    cout<<r;
    int c = grid[0].size();
    cout<<c;

    int time = (r-1)+(c-1);
    if(time>maxTime)
    return "NO";


    bool ans = hasPath(grid,0,0);

    if(ans)
    return "YES";
    else
    return "NO";
}



int main()
{
    vector<string> grid;
    grid.push_back("..##");
    grid.push_back("#.##");
    grid.push_back("#...");
    int time = 5;


    cout<<reachTheEnd(grid,time)<<endl;
}
