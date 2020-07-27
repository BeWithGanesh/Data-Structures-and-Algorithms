#include<bits/stdc++.h>
using namespace std;
    
int tour(int petrol[], int distance[], int n)
{
    int start = 0, surplus = 0, deficit = 0;
    for (int i = 0; i < n; i++) {
        surplus = surplus + petrol[i] - distance[i];
        if (surplus < 0) {
            start = i + 1;
            deficit = deficit + surplus;
            surplus = 0;
        }
    }
    return (((surplus + deficit) >= 0) ? start+1 : -1);
}

int main() {

    int petrol[] = {4, 6, 7, 4};
    int distance[] = {6, 5, 3, 5};
    int n = sizeof(petrol) / sizeof(petrol[0]);
    cout << "The first point from where the truck can make a circular tour is from : "<<tour(petrol, distance, n);
    return 0;
}

/*
Output:

The first point from where the truck can make a circular tour is from : 2

*/
