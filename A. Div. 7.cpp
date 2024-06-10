#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define pb pop_back()
#define pf pop_front()
#define sortx(X) sort(X.begin(),X.end());
#define el "\n"
#define yes cout<<"YES"<<el;
#define no cout<<"NO"<<el;
#define MW_HY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


void solution(){
  ll val;
  cin >> val;
  if (val % 7 == 0)
  {
    cout << val << el;
  }
  else
  {
    val /= 10;
    val *= 10;
    while (true)
    {
      val++;
      if (val % 7 == 0)
      {
        break;
      }
    }
    cout << val << el;
  }
}

int main(){ MW_HY
  int ntimes  = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}