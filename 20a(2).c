#include<stdio.h>

struct book{
	char authorname[30];
	char publicationname[40];
	char booktitlename[50];
	int price;
};

void main(){
	int i;
	struct book id;
	for(i=0;i<3;i++){
		printf("enter author name:");
		scanf("%s",id.authorname);
		printf("enter publication name:");
		scanf("%s",id.publicationname);
		printf("enter book title name:");
		scanf("%s",id.booktitlename);
		printf("enter price");
		scanf("%d",&id.price);
	}
for(i=0;i<3;i++){ 
	printf("author name: %s",id.authorname);
	printf("publication name: %s",id.publicationname);
	printf("book title name: %s",id.booktitlename);
	printf("price: %d",id.price);
  }
}
