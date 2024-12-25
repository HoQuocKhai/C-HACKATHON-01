#include<stdio.h>

int main (){
	int MAX_SIZE=100;
	int arr[MAX_SIZE];
	int size;

	do{
		printf("========MENU========\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra gia tri cac phan tu trong mang\n");
		printf("3. Tim gia tri nho nhat va lon nhat trong mang\n");
		printf("4. In ra tong cua tat ca cac phan tu\n");
		printf("5. Them mot phan tu vao cuoi mang\n");
		printf("6. Xoa phan tu tai mot vi tri cu the\n");
		printf("7. sap xep mang theo thu tu giam dan\n");
		printf("8. Kiem tra phan tu co ton tai hay khong\n");
		printf("9. In ra toan bo so nguyen to trong mang\n");
		printf("10.Sap xep mang theo thu tu tang dan\n");
		
		int choice;
		printf("nhap vao lua chon: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				int n;
				printf("nhap vao so phan tu trong mang");
				scanf("%d",&n);
				size = n;
				for (int i = 0; i < size; i++){
					printf("nhap gia tri phan tu index[%d]",i);
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				for (int i =0; i <size; i++){
					printf("arr[%d]=%d,",i,arr[i]);
				}
				break;
			case 3:
				int min=arr[0],max=arr[0];
				for (int i=1; i<n; i++){
					if(min>arr[i]){
						min=arr[i];
					}
				}for (int i=1; i<n; i++){
					if(max<arr[i]){
						max=arr[i];
					}
				}
				printf("gia tri nho nhat: %d\n",min);
				printf("gia tri lon nhat: %d",max);
				break;
			case 4:
				int sum=0;
				for (int i=0; i<size; i++){
					sum+=arr[i];
				}
				printf("tong cua tat ca phan tu: %d",sum);
				break;
			
			case 5:
				int valu;
				printf("gia tri phan tu can them vao mang");
				scanf("%d",&valu);
				arr[size]=valu;
				size++;
				break;
			case 6:
				int deleteIndex;
                printf("Hay nhap vi tri can xoa:");
                scanf("%d", &deleteIndex);
                if(deleteIndex <0 || deleteIndex > size - 1){
                    printf("vi tri can xoa ko hop le \n");
                } else{
                    for (int i = deleteIndex; i < size-1; ++i) {
                        arr[i] = arr[i+1];
                    }
                    size--;
                }
                break;
            case 7:
            	for (int i = 0; i < n; i++){
            		for(int j = 0; j<n-i-1; j++){
            			if(arr[j]<arr[j+1]){
            				int temp = arr[j];
            				arr[j]=arr[j+1];
            				arr[j+1]=temp;
						}
					}
				}
				break;
			case 8:
				int find;
				printf("nhap vao gia tri can tim");
				scanf("%d",&find);
				for(int i =0 ;i< size; i++){
					if(arr[i]==find){
						printf("phan tu %d nam o vi tri index[%d]",find,i);
					}else{
						printf("phan tu khong ton tai trong mang");
					}
				}
				break;
			case 9:
				for (int i =0; i<n ;i++){
					if (arr[i]<2){
					}else if(arr[i]==2){
						printf("%d ",arr[i]);
					}else {
						for (int j=2;j<arr[i];j++){
							if(j<=sqrt(arr[i])){
								if(arr[i]%j==0){
									break;
								}
							}else{
							printf("%d ",arr[i]);
							break;
							}
						}
					}
				}
				for (int i =0; i<n ;i++){
					if (arr[i]<2){
						continue;
					}else if(arr[i]==2){
						printf("%d ",arr[i]);
					}else {
						for (int j=2;j<arr[i];j++){
							if(j<=sqrt(arr[i])){
								if(arr[i]%j==0){
									break;
								}
							}else{
							printf("%d ",arr[i]);
							break;
							}
						}
					}
				}
			case 10:
				for (int i = 0; i<size-1; i++){
					int minValu=i;
					for (int j = i + 1; j < size; j++ ){
						if(arr[j]<arr[minValu]){
							min=j;
						}
					}
					int temp = arr[minValu];
					a[minValu]=a[i];
					a[i]=temp;
				}
				break;
			case 11:
				printf("thoat ...");
				return 0;
			default:
				printf("ban nhap sai roi");
		}
	}while(1);
	return 0;
}
