#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     
    //get n for array length
    int n;
    cin >> n;
    //loop for indexes
    for (int i = 0; i < n; i++){
        string s;
        //even odd character
        string s1, s2;
        //get string
        cin >> s;
        //loop through the 2 strings
        for(int k = 0; k < s.size(); k++){
            //even letters in array
            if(k%2==0){
                //if even add to even 
                s1 += s[k];
            }
            else{
                //if odd
                s2 += s[k];
            }
        }
         cout << s1 << " " << s2 << endl ;
        
    }
    
     
    return 0;
}
