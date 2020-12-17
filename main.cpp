/* Ќайти  мах2 в одномерном массиве.
   (наибольший элемент массива при исключении максимального элемента этого массива;
   один проход по массиву)
   ¬водитс€ только размер, сам массив заплн€етс€ рандомно.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;

//------------------------------------------------------
int main()
{
    int sz;
    cout << "Array size>";
    cin>>sz;
    cout<<endl;
    vector<int> v(sz);
    vector<int>::iterator it;
    for(it = v.begin(); it < v.end(); it++) {
        *it = rand () %10;
        cout << *it << " ";
    }
    // массив готов
    int max1 = INT_MIN, max2 = INT_MIN;
    for(it = v.begin(); it < v.end(); it++) {
        if( *it<= max2) continue;
        // теперь *it > max2
        if( *it <= max1) max2 = *it;
        else { max2=max1;  max1=*it; }

        //cout << *it << " " << max2 << " " << max1 << endl;
    }
    cout<< "\n max2=" << max2;

    return 0;
}
