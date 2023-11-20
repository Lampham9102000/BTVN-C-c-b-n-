#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Menu_choose()
{
    int temp;

    do
    {
        printf("MENU:\n");
        printf("0. Exit\n");
        printf("1. Man hinh chinh\n");
        scanf("%d",&temp);
        // printf("%d",temp);
    }
    while(temp!='1'&& temp !='0');
    printf("done");
   return temp;
}
void Distance2Points(int x1, int y1, int x2, int y2)
{
    printf("Khoang cach diem A(%d,%d) va B(%d,%d) = %.2lf\n",x1,y1,x2,y2,sqrt(pow((x1-x2),2)+pow((y1-y2),2)));
}
void TriangleArea(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double temp;
    temp = (abs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1)))/2;
    printf("Dien tich tam giac tu 3 diem toa do: A(%d,%d), B(%d,%d) va C(%d,%d) = %.2lf\n",x1,y1,x2,y2,x3,y3,temp);
}
int main()
{
    int key;
    int x1,x2,x3,y1,y2,y3;
    while (1)
    {
        do
        {
            printf("Chuong trinh toan hoc\n ");
            printf("1. Chuong trinh tinh khoang cach\n ");
            printf("2. Chuong trinh tinh dien tich tam giac\n ");
            printf("0. EXIT\n ");
            printf("Vui long nhap lua chon cua ban:");
            scanf("%d",&key);
        } while (2<key || key<0);
        switch (key)
        {
            case '1':
            printf("Tinh khoang cach 2 diem:\n");
            printf("Vui long nhap:\n");
            printf("Toa do diem A(x1,y1):\n");
            printf("Toa do x1:");
            scanf("%d",&x1);
            printf("Toa do y1:");
            scanf("%d",&y1);
            printf("Toa do diem B(x2,y2):\n");
            printf("Toa do x2:");
            scanf("%d",&x2);
            printf("Toa do y2:");
            scanf("%d",&y2);
            Distance2Points(x1,y1,x2,y2);
            break;
            case '2':
            printf("Tinh khoang cach 2 diem:\n");
            printf("Vui long nhap:\n");
            printf("Toa do diem A(x1,y1):\n");
            printf("Toa do x1:");
            scanf("%d",&x1);
            printf("Toa do y1:");
            scanf("%d",&y1);
            printf("Toa do diem B(x2,y2):\n");
            printf("Toa do x2:");
            scanf("%d",&x2);
            printf("Toa do y2:");
            scanf("%d",&y2);
            printf("Toa do diem C(x3,y3):\n");
            printf("Toa do x3:");
            scanf("%d",&x3);
            printf("Toa do y3:");
            scanf("%d",&y3);
            TriangleArea(x1,y1,x2,y2,x3,y3);
            break;
            default:
            exit(0);
            break;
        }
        key = Menu_choose();
      if(key=='0') exit(0);
    }  
	printf("stop")  ;
}