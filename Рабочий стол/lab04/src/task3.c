int main(){
	float k = 3;
	float m = 5;
	float n =8;
	float MAX, MIN;
	float c;
	// 
	if(k == m || k == n || m ==n){
		return 1;
	}
	else
	{
	if(k > m && k > n)
	{
		MAX = k;
	}
	if(m > k && m > n){
		MAX = m;
	}
	if(n > k && n > m){
		MAX = n;
	}
	if(k < m && k < n){
		MAX = k;
	}
	if(m < k && m < n){
		MIN = m;
	}
	if(n < k && n < m){
		MIN = n;
	}
	if(k < m && k > n){
		c = k;
	}
	if(k > m && k < n){
		c = k;
	}
	if(m < k && m > n){
		c = m;
	}
	if( m > k && m < n){
		c = m;
	}
	if(n > k && n < m){
		c = n;
	}
	if(n < k && n > m){
		c = n;
	}
}
m = c;
k = MIN;
n = MAX;
return 0;
}
