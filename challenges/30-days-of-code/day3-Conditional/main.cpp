#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    /**If  is odd, print Weird
    ** If  is even and in the inclusive range of 2 to 5, print Not Weird
    ** If  is even and in the inclusive range of 6 to 20, print Weird
    ** If  is even and greater than 20, print Not Weird**/

    if ((N % 2 == 0) && (N < 6 || N > 20)){
        cout << "Not Weird" << endl;
    }
    else{
        cout << "Weird" << endl;
    }


    return 0;
}
