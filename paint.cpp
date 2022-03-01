//Question: http://www.usaco.org/index.php?page=viewproblem2&cpid=567
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream fin("paint.in");
    ofstream fout("paint.out");
    int arr1[2];
    int arr2[2];
    fin >> arr1[0] >> arr1[1];
    fin >> arr2[0] >> arr2[1];
    fout << arr1[1] - arr2[0];
}
