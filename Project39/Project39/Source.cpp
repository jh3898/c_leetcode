#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 double Binarytree(double sigma,int n,double u,double d,double q,double r,double S0,double X  ) {
	 double delt = 1. / n;
	 vector<vector<double>> S(n+1,vector<double> (n+1)),V(n + 1, vector<double>(n + 1));
	u = exp(sigma*sqrt(delt));
	d = exp(-sigma*sqrt(delt));
	q = (exp(r*delt)-d)/(u-d);

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <=i; j++) {

			S[i][j] = S0 *pow(u,j)*pow(d,i-j);
			cout << S[i][j] << " ";

		}
		cout << endl;
	}
	for (int j = 0; j <= n; j++) {
		
			V[n][j] = max(S[n][j] - X, 0.);
			cout << V[n][j] << " ";
		}
	cout << endl;
	for (int i = n-1; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
		V[i][j] = exp(-r*delt)*(q*V[i + 1][j+1] + (1 - q)*V[i + 1][j ]);
				cout << V[i][j] << " ";
			


		}
		cout << endl;
	}
	
	return V[0][0];
}
int main() {
	double sigma=0.2,u=0.,d=0.,q=0.,r=0.06,S0=100.;
	int n = 3;
	double X = 100.;
	double V;
	V = Binarytree(sigma, n, u, d, q, r, S0, X);
	cout << V << endl;

}