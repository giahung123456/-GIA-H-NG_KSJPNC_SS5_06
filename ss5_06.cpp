#include<stdio.h>
 main(){
 	int n;
 	double a,b,x;
 	do{
	 	printf("nhap so thu nhat:");
	 	scanf("%lf",&a);
	 	printf("nhap so thu hai:");
	 	scanf("%lf",&b);
	 	printf("CALCULATOR\n 1.Tong 2 so\n 2.Hieu 2 so\n 3.Tich 2 so\n 4.Thuong 2 so\n 5.thoat\n ");
	 	printf("chon :");
		 scanf("%d",&n);
	 	switch(n){
	 		case 1:
	 		x=a+b;
	 		printf("%.2lf+%.2lf==%.2lf\n",a,b,x);
	 		break;
	 		case 2:
	 		x=a-b;
	 		printf("%.2lf-%.2lf==%.2lf\n",a,b,x);
	 		break;
	 		case 3:
	 		x=a*b;
	 		printf("%.2lf*%.2lf==%.2lf\n",a,b,x);
	 	    break;
	 		case 4:
	 		if(b!=0){
	 		x=a/b;
			 printf("%.2lf/%.2lf==%.2lf\n",a,b,x);
		     }else{
		     	printf("khong hop le\n");
			 }
	 		
	 		break;
	 		case 5:
	 			printf("thoat");
	 			break;
			 default:
			 	printf("khong hop le\n");
		 }
		 	
	 }
	 while(n!=5);
	 
	 
 }