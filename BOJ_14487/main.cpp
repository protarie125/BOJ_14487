#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n;
ll ans;
ll mx;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;

	ans = 0;
	mx = 0;
	while (0 < (n--)) {
		ll x;
		cin >> x;

		ans += x;
		mx = max(mx, x);
	}

	cout << ans - mx;

	return 0;
}