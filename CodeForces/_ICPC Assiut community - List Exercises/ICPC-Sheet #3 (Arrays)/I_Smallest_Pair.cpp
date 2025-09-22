#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<long long>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t, n, elementos;
    cin >> t;

    while (t--)
    {
        long long menor_numero = LLONG_MAX;
        vl array;
        vi i_;
        vi j_;

        cin >> n;

        for (ll u = 0; u < n; u++)
        {
            cin >> elementos;
            array.push_back(elementos);
        }
        // cout<<"estranhooooo"<<'\n';
        for (ll i = 1; i <= n; i++)
        {
            // cout<<"passou por aqui"<<'\n';

            for (ll j = 2; j <= n; j++)
            {
                // cout<<"i= "<<i<<" j= "<<j<<'\n';
                if ((1 <= i) && (i < j) && (j <= n))
                {
                    i_.push_back(i);
                    j_.push_back(j);
                }
            } // i = 2, j = 3
        }
        ll tamanho = i_.size();
        // Ai + Aj + j - 1
        for (ll k = 0; k < tamanho; k++)
        {
            if (menor_numero > array[j_[k]-1] + array[i_[k]-1] + (j_[k]-1) - (i_[k]-1))
                menor_numero = array[j_[k]-1] + array[i_[k]-1] + (j_[k]-1) - (i_[k]-1);
        }

        // copy(array.begin(), array.end(), ostream_iterator<int>(cout, " "));
        // cout << '\n';
        // copy(i_.begin(), i_.end(), ostream_iterator<int>(cout, " "));
        // cout << '\n';
        // copy(j_.begin(), j_.end(), ostream_iterator<int>(cout, " "));
        // cout << '\n';

        cout << menor_numero << '\n';
        array.clear();
        i_.clear();
        j_.clear();
        if (t == 0)
            break;
    }
    return 0;
}