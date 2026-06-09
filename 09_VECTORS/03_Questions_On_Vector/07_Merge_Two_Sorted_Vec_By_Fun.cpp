// Merge Two Sorted Vector by using function

#include <iostream>
#include <vector>
using namespace std;

vector<int> Merge_Function(vector<int> &R1, vector<int> &R2)
{
    int m = R1.size(); // As this is a vector --> So, we can calculate the size of the vector (In Pass by refrence Method)
    int n = R2.size(); // But, we can't calculate the size of an array (In pass by reference method)

    vector<int> join(m + n);

    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n)
    {
        if (R1[i] < R2[j])
        {
            join[k] = R1[i];
            i++;
        }

        else
        {
            join[k] = R2[j];
            j++;
        }

        k++;
    }

    if (i == m)
    {
        while (j < n)
        {
            join[k] = R2[j];
            k++;
            j++;
        }
    }

    if (j == n)
    {
        while (i < m)
        {
            join[k] = R1[i];
            k++;
            i++;
        }
    }

    return join;
}
int main()
{
    int m;
    cout << "Enter the size of First vector : ";
    cin >> m;

    vector<int> v1(m);
    cout << "Enter the elements First of vector : ";
    for (int i = 0; i < v1.size(); i++)
        cin >> v1[i];

    int n;
    cout << "Enter the size of Second vector : ";
    cin >> n;

    vector<int> v2;
    cout << "Enter the elements of Second vector : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    vector<int> Combine = Merge_Function(v1, v2);

    cout << "Merging of Two sorted Vector : ";
    for (int i = 0; i < Combine.size(); i++)
        cout << Combine[i] << " ";

    return 0;
}