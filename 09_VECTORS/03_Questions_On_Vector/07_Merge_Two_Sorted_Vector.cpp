// Merge Two Sorted Vectors

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m;
    cout << "Enter the size of first vector : ";
    cin >> m;


    vector <int> v1;

    cout << "Enter the elements of first vector in sorted order: ";

    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    int n;
    cout << "Enter the size of second vector : ";
    cin >> n;

    vector <int> v2(n);
    
    cout << "Enter the elements of second vector in sorted order : ";
    for(int i=0; i<n; i++)
    {
        cin >> v2[i];
    }


    vector <int> v3(m+n);

    int i=0;
    int j=0;
    int k=0;
    while (i<m && j<n)
    {
        if(v1[i] < v2[j])
        {
            v3[k] = v1[i];
            k++;
            i++;
        }

        else
        {
            v3[k] = v2[j];
            k++;
            j++;
        }
    }

    if(i == m)
    {
        while(j < n)
        {
            v3[k] = v2[j];
            k++;
            j++;
        }
    }
    
    if(j == n)
    {
        while(i < m)
        {
            v3[k] = v1[i];
            k++;
            i++;
        }
    }
    
    cout << "Merging of two sorted vectors : ";
    for(int i=0; i<m+n; i++)
    {
        cout << v3[i] << " ";
    }
}