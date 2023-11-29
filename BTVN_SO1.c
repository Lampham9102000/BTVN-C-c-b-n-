#include <stdio.h>
enum hinhdang {hcn,hv,htgv};
void hinhchunhat(int a, int b)
{
  for(int i= 0; i<a;i++)   printf("* ");
  if(b>2)
  {
    for(int k = 1; k<= b-2;k++) 
    { 
      printf("\n*");
      for(int j =1;j<a-1;j++) printf("  ");
      printf(" *");
      if(k==b-2) printf("\n");
    }
  }
  else printf("\n");
  for(int i= 0; i<a;i++)   printf("* ");
}
void hinhvuong(int a)
{
 hinhchunhat(a,a);
}
void hinhtamgiacvuongcan(int a)
{
  int i,j;
  printf("*");
  for( i= 0; i<a;i++)  
  { 
    for(j = 1; j<=i;i++) printf("* ");
    { 
      printf("*");
      for(int j =1;j<a-1;j++) printf(" ");
      printf("*\n");
    }
  }
  for(int i= 0; i<a;i++)   printf("*");
}
int main() {
  //Khởi tạo giá trị cho biến money
  int money = 33 ;
  int n,a,b;
  printf("0. hinh chu nhat\n1. hinh vuong \n2. hinh tam giac vuong\n");
  scanf("%d",&n);
  switch (n) 
  {
    //Trường hợp đầu tiên
  case hcn:
  printf("nhap chieu dai a va chieu rong b cua hinh chu nhat:\n");
  scanf("%d%d",&a,&b);
  hinhchunhat(a,b);
  break; 
  case hv:
  printf("nhap chieu dai canh a cua hinh vuong: \n");
  scanf("%d",&a);
  hinhvuong(a);
  break;
  case htgv:
  printf("nhap chieu canh goc vuong cua tam giac vuong can:\n");
  scanf("%d",&a);
  hinhtamgiacvuongcan(a);
  break; 
  default:
     printf("khong xac dinh duoc hinh dang ");
  }
  return 0;
}