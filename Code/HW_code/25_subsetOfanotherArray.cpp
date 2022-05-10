#include<bits/stdc++.h>
using namespace std;

bool subsetOfanotherArray(int a1[], int a2[], int n1, int n2)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a2[i] == a1[j])
                break;
        }

        /* If the above inner loop was
        not broken at all then arr2[i]
        is not present in arr1[] */
        if (j == n1)
            return 0;
    }

    /* If we reach here then all
    elements of arr2[] are present
    in arr1[] */
    return 1;
}

int main()
{
    int a1[] = {5,4,3,2,1};
    int a2[] = {1,2,3,4};
    int n1 = 5;
    int n2 = 4;
    cout<<subsetOfanotherArray(a1, a2, n1, n2);

    return 0;
}