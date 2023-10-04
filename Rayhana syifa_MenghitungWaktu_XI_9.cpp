#include <bits/stdc++.h>
using namespace std;
// rumus waktu=2(v*sin(s))/10
int main()
{
	float v, s, waktu = 0, selisih;
	cin >> s >> v;
	float sinA = sin(s* 22 / 7 / 180);
	waktu = (2 * (v* sinA)) / 10;
	cout << waktu;
}
