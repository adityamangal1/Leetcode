int binary_search()
{

    int l = 0, r = n - 1;

    while (l <= r)
    {

        int m = l + (r - l) / 2;

        if (arr[m] == k)
            return 1;

        if (k < arr[m])
            r = m - 1;

        else
            l = m + 1;
    }

    return -1;
};