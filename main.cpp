#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto a = vi(9);
	auto sum = int{ 0 };
	for (auto i = 0; i < 9; ++i) {
		cin >> a[i];
		sum += a[i];
	}

	for (auto i = 0; i < 9; ++i) {
		sum -= a[i];
		for (auto j = i + 1; j < 9; ++j) {
			sum -= a[j];

			if (100 == sum) {
				for (auto k = 0; k < 9; ++k) {
					if (i == k || j == k) {
						continue;
					}

					cout << a[k] << '\n';
				}

				return 0;
			}

			sum += a[j];
		}

		sum += a[i];
	}

	return 0;
}