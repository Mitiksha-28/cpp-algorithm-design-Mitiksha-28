#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

const double EPSILON=1e-9;
bool is_zero(double x) {
    return fabs(x)<EPSILON;
}
int main() {
    int n;
    cin>>n;
    vector<vector<double> > a(n, vector<double>(n+1));

    for(int i=0; i<n; ++i) {
        int m;
        cin>>m;
        for(int j=0; j<=m; ++j) {
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; ++i) {
        int idx=i;
        for(int j=i+1; j<n; ++j) {
            if(fabs(a[j][i])>fabs(a[idx][i])) {
                idx=j;
            }
        }
        if(is_zero(a[idx][i])) {
            cout<<"NO"<<endl;
            return 0;
        }

        swap(a[i], a[idx]);

        for(int j=i+1; j<n; ++j) {
            double factor=a[j][i]/a[i][i];
            for(int k=i; k<=n; ++k) {
                a[j][k]-=factor*a[i][k];
            }
        }
    }

    for(int i=n-1; i>=0; --i) {
        for(int j=i+1; j<n; ++j) {
            a[i][n]-=a[j][n]*a[i][j];
        }
        a[i][n]/=a[i][i];
    }

    cout<<"YES"<<endl;
    cout<<fixed<<setprecision(2);
    for(int i=0; i<n; ++i) {
        cout<<a[i][n]<<" ";
    }
    cout<<endl;

    return 0;
}
