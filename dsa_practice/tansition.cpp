class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int n = nums.size();
    int *left = new int[ n ]{};
    int *right = new int[ n ]{};
    
    for( int i = 0, j = n - 1; i < n and j >= 0; i++, j-- ) {
        
        if( i == 0 )
            left[ i ] = nums[ i ];
        else if( i != 0 )
            left[ i ] = left[ i - 1 ] + nums[ i ];
        if( j == n - 1 )
            right[ j ] = nums[ j ];
        else if( j != n - 1 )
            right[ j ] = nums[ j ] + right[ j + 1 ];
        
    }
    
    //cout << left[ 0 ] << " " << right[ 0 ] << endl;
    for( int i = 0; i < n; i++ ) {
        
        if( left[ i ] == right[ i ] )
            return i;
        
    }
    delete []left;
    delete []right;
    return -1;
    
}
    
};