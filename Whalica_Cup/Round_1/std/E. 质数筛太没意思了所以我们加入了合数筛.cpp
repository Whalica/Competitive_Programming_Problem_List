//Code from Whalica
#include<bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;

constexpr i64 P = 998244353;
constexpr int N = 5E6;

class Sieve {
public:
	std::vector<int> primes;

	void init(const int& n_) {
		n = n_;
		is_prime.resize(n_ + 1);
		std::fill(is_prime.begin(), is_prime.end(), true);

		Euler();
	}

	bool operator()(const i64& x) {
		return (x <= n ? is_prime[x] : Simple_isPrime(x));
	}

private:
	int n = -1;
	std::vector<bool> is_prime;

	void Euler() {
	  	is_prime[0] = is_prime[1] = false;

	  	for (int i = 2; i <= n; i++) {
	    	if (is_prime[i]) {
				primes.push_back(i);
			}
			for (auto x : primes) {
				if (1LL * i * x > n) {
					break;
				}
				is_prime[i * x] = false;
				if (i % x == 0) {
					break;
				}
			}
	  	}
	}

	bool Simple_isPrime(const i64& n) {
		if (n < 2) {
			return false;
		} else if (n == 2) {
			return true;
		} else {
			if (n & 1) {
				for (i64 i = 3; i * i <= n; i += 2) {
					if (n % i == 0) {
						return false;
					}
				}
				return true;
			} else {
				return false;
			}
		}
	}
};

Sieve is_prime;

std::vector<int> f(N + 1);
std::vector<i64> pre(N + 1);

void solve() {
	int l, r;
	std::cin >> l >> r;
	
	std::cout << (pre[r] - pre[l - 1] + P) % P << "\n";
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	is_prime.init(N);
	
	int p = 1;
	for (int i = 1; i <= N; i++) {
		if (is_prime(i) || i == 1) {
			continue;
		} else {
			f[i] = p;
			p++;
		}
	}
	
	for (int i = 1; i <= N; i++) {
		if (f[i] != 0) {
			pre[i] = (pre[i - 1] + 1LL * i * f[i] % P) % P;
		} else {
			pre[i] = pre[i - 1];
		}
	}

	int t = 1;
	std::cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
