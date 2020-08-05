//forever.5656 rainbow
#include <iostream>
#include <conio.h>
#include <windows.h>
#include "human.h"
#include "action.h"
using namespace std;

int main(){
Map map1(1),map2(2),map3(3),map4(4),map5(5);
Human human1(1),human2(2),human3(3),human4(4),human5(5);
int a[5]={0},s=0,t;
for (int i=0;i<5;i++)
	s=s+a[i];

while (s<5)
{
	system("cls");
	t=chosemap(a,map1,map2,map3,map4,map5);
	if (t!=0){
		switch (t){

			case 1:
				do{
					system("cls");
					map1.showmap10();
					human1.move(map1,human1);
				}while(!map1.victory());
				system("cls");
				map1.showmap10();
				a[0]++;
				break;
			case 2:
				do{
					system("cls");
					map2.showmap10();
					human2.move(map2,human2);
				}while(!map2.victory());
				system("cls");
				map2.showmap10();
				a[1]++;
				break;
			case 3:
				do{
					system("cls");
					map3.showmap10();
					human3.move(map3,human3);
				}while(!map3.victory());
				system("cls");
				map3.showmap10();
				a[2]++;
				break;
			case 4:
				do{
					system("cls");
					map4.showmap10();
					human4.move(map4,human4);
				}while(!map4.victory());
				system("cls");
				map4.showmap10();
				a[3]++;
				break;
			case 5:
				do{
					system("cls");
					map5.showmap15();
					human5.move15(map5,human5);
				}while(!map5.victory());
				system("cls");
				map5.showmap15();
				a[4]++;
				break;
			}
			cout<<"重新选择";
	}
}
cout<<"完成";
}

int chosemap(int *a,Map m1,Map m2,Map m3,Map m4,Map m5){
	cout<<"选择相应地图:"<<"\n";
		if (a[0]==0){
		cout<<"1"<<"\n";
		m1.showmap10();
		}
		if (a[1]==0){
		cout<<"2"<<"\n";
		m2.showmap10();
		}
		if (a[2]==0){
		cout<<"3"<<"\n";
		m3.showmap10();
		}
		if (a[3]==0){
		cout<<"4"<<"\n";
		m4.showmap10();
		}
		if (a[4]==0){
		cout<<"5"<<"\n";
		m5.showmap15();
		}

	int x=getch()-48;
	if (x<1||x>5){
	 	cout<<"无此图"<<"输入任意键继续";
	 	getch();

	 	return 0;
	 }
	else if (a[x-1]==1){
		cout<<"此图已过"<<"输入任意键继续";
		getch();
		return 0;
	}
	else
	return x;
}
