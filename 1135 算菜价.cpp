#include <iostream>

using namespace std;

int main() {
	double w,p;
	double sum=0;
	while( scanf("%*s%lf%lf", &w,&p) != EOF ){//EOF ctrl+z
		sum+=w*p;		
	}
	printf("%.1lf",sum);
	return 0;
}