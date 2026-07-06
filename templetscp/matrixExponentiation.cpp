const long long MOD = 1e9 + 7;

class Matrix {
public:
    vector<vector<long long>> mat;
    int n;

    Matrix(int sz) {
        n = sz;
        mat.assign(n, vector<long long>(n, 0));
    }

    // Identity Matrix
    static Matrix identity(int n) {
        Matrix I(n);
        for (int i = 0; i < n; i++)
            I.mat[i][i] = 1;
        return I;
    }

    // Matrix Multiplication
    Matrix operator*(const Matrix &other) const {
        Matrix res(n);

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (mat[i][k] == 0) continue;
                for (int j = 0; j < n; j++) {
                    res.mat[i][j] =
                        (res.mat[i][j] + mat[i][k] * other.mat[k][j]) % MOD;
                }
            }
        }

        return res;
    }
};

// Binary Exponentiation
Matrix power(Matrix base, long long exp) {
    Matrix ans = Matrix::identity(base.n);

    while (exp > 0) {
        if (exp & 1)
            ans = ans * base;
        base = base * base;
        exp >>= 1;
    }

    return ans;
}

// basic use of this template
  Matrix m(2);
     m.mat={
        {19,6},
        {7,20}
    };
    
    int n;
    cin >> n;
    Matrix ans=power(m,n);
    cout << ans.mat[0][0] << endl;

