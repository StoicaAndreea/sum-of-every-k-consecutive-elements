// Sum of k elements with good complexity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void sum(queue<int>q, int n, vector<int>& res) {
    int sum = 0;
    queue<int> in;
    if (n < 0 or n>q.size()) res.push_back(0);
    else {
        for (int i = 0; i < n; i++) {
            sum += q.front();
            in.push(q.front());
            q.pop();
        }
        res.push_back(sum);
        while (!q.empty()) {
            sum = sum + q.front() - in.front();
            in.push(q.front());
            res.push_back(sum);
            in.pop();
            q.pop();
        }
    }

}
int main()
{
    queue<int> d;
    vector<int> res;
    int ok;
    cin >> ok;
    while (ok !=-1) {
        d.push(ok);
        cin >> ok;
    }
    int n;
    cout << "nr: "<<endl;
    cin >> n;
    sum(d, n, res);
    std::cout << "Hello World!\n";
    for (int i=0; i<res.size(); i++)
    {
        cout << res[i] << "  ";
        cout << endl;
    }
    return 0;

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
