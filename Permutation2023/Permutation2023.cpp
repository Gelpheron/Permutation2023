// Permutation2023.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
int GCD(int a, int b) {
    if (a % b == 0)
        return b;
    if (b % a == 0)
        return a;
    if (a > b)
        return GCD(a % b, b);
    return GCD(a, b % a);
}
unsigned int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}
int main()
{
    int N, j, num, ans = 1;
    cin >> N;
    vector<int> a(N+1);
    for (int i = 1; i < N+1; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < N+1; i++)
    {
        num = 0;
        j = i;
        
        do
        {
            j = a[j];
            num++;
        }
        while (j != i);
        ans = LCM(ans,num);
    }
    cout << ans <<endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
