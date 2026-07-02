//land ke padhi
using namespace std;

#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.rbegin(),a.rend());
    bool flag=true;
    for(int i=0;i<n-2;i++){
        if(a[i+2]!= a[i]%a[i+1]) {
            flag=false;
            break;
        }
    }
    if(flag){
        for(int i=0;i<2;i++)cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    flag=true;
    int v=a[n-1];
    for(int i=1;i<n;i++){
        a[i]=a[i-1];
    }
    a[0]=v;
     for(int i=0;i<n-2;i++){
        if(a[i+2]!= a[i]%a[i+1]) {
            flag=false;
            break;
        }
    }
    if(flag){
        for(int i=0;i<2;i++ )cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    cout<<-1<<endl;

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}