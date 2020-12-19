#include <iostream>
using namespace std;
enum colors{red=5, black};
enum suit{heart,siz,diamond=8, spade=8, club};

int main() {
   cout <<"The value of enum color : "<<red<<","<<black;
   cout <<"\nThe default value of enum suit : "<<heart<<","<<siz<<" "<<diamond<<","<<spade<<","<<club;
   return 0;
}
