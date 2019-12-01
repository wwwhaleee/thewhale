//¶þ·ÖËÑË÷
template <class Type>
int search(Type a[],const Type& x,int n){
	int left = 0, right = n-1, middle;
	
	for(;left <= right;){
		middle = (left + right)/2;
		if(x==a[middle]){
			return middle;
		}
		if(x<a[middle]){
			left = middle - 1;
		}
		if(x>a[middle]){
			right = middle + 1;
		}
	}
	return -1;
} 
