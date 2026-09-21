#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	int n; cin >> n;
	queue<string> q;

	for (int i = 0; i < n; i++) {
		string ime; cin >> ime;
		q.push(ime);
	}

	int k; cin >> k;

	while (q.size() > 1) {
		cout << "Red: ";
		int vel = q.size();

		for (int i = 0; i < vel; i++) {
			cout << q.front() << " ";
			
			q.push(q.front());
			q.pop();
		}

		cout << endl;

		for (int i = 0; i < k; i++) {
			q.push(q.front());
			q.pop();
		}

		cout << "Ispada: " << q.front() << endl;
		q.pop();
	}

	cout << "Pobjednik: " << q.front() << endl;
	return 0;
}
