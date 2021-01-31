int main(){
	float x = 6, y;
	if(x <= -1)
		y = -1 / x;
	else if(x >= -1 && x <= 1){
		x*=x;
	}
	else{
		y = 1;
	}
	return 0;
}