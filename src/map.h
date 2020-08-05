#include<iostream>
class Map{
	public: int  map[10][10];//地图
			int  rmap[10][10];
			int  map15[15][15];
			int  rmap15[15][15];
			int  target;//目标点数目
	Map(int k){//构造不同的地图
		if (k==1)
		{
		int a1[10][10]={
			{ 0, 0, 0, 1, 1, 1, 1, 1, 1, 0 },
			{ 0, 1, 1, 1, 0, 0, 0, 0, 1, 0 },
			{ 1, 1, 3, 0, 4, 1, 1, 0, 1, 1 },
			{ 1, 3, 3, 4, 0, 4, 0, 0, 0, 1 },
			{ 1, 3, 3, 0, 4, 0, 4, 0, 1, 1 },
			{ 1, 1, 1, 1, 1, 1, 0, 5, 1, 0 },
			{ 0, 0, 0, 0, 0, 1, 1, 1, 1, 0 },
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,}
			};
			for (int i=0;i<10;i++)
				for (int j=0;j<10;j++){
				if (a1[i][j]==3)
				target++;
				map[i][j]=a1[i][j];
				rmap[i][j]=a1[i][j];
				}

		}
		else if (k==2)
		{
		int a2[10][10]={
			{ 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
			{ 0, 1, 5, 0, 1, 1, 1, 0, 0, 0 },
			{ 0, 1, 0, 4, 0, 0, 1, 0, 0, 0 },
			{ 1, 1, 1, 0, 1, 0, 1, 1, 0, 0 },
			{ 1, 3, 1, 0, 1, 0, 0, 1, 0, 0 },
			{ 1, 3, 4, 0, 0, 1, 0, 1, 0, 0 },
			{ 1, 3, 0, 0, 0, 4, 0, 1, 0, 0 },
			{ 1, 1, 1, 1, 1, 1, 1, 1, 0, 0,},
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,}
		};
		for (int i=0;i<10;i++)
				for (int j=0;j<10;j++)
				{
				if (a2[i][j]==3)
				target++;
				map[i][j]=a2[i][j];
				rmap[i][j]=a2[i][j];
				}
		}

		else if(k==3)
		{
			int a3[10][10]={
			{ 0, 0, 0, 1, 1, 1, 1, 1, 1, 1 },
			{ 0, 0, 1, 1, 0, 0, 1, 0, 5, 1 },
			{ 0, 0, 1, 0, 0, 0, 1, 0, 0, 1 },
			{ 0, 0, 1, 4, 0, 4, 0, 4, 0, 1 },
			{ 0, 0, 1, 0, 4, 1, 1, 0, 0, 1 },
			{ 1, 1, 1, 0, 4, 0, 1, 0, 1, 1 },
			{ 1, 3, 3, 3, 3, 3, 0, 0, 1, 0 },
			{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 0,},
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,}
			};
			for (int i=0;i<10;i++)
				for (int j=0;j<10;j++)
				{
				if (a3[i][j]==3)
				target++;
				map[i][j]=a3[i][j];
				rmap[i][j]=a3[i][j];
				}
		}

		else if(k==4)
		{
			int a4[10][10]={
			{ 0, 1, 1, 1, 1, 0, 0, 0, 0, 0 },
			{ 1, 1, 0, 0, 1, 0, 0, 0, 0, 0 },
			{ 1, 5, 4, 0, 1, 0, 0, 0, 0, 0 },
			{ 1, 1, 4, 0, 1, 1, 0, 0, 0, 0 },
			{ 1, 1, 0, 4, 0, 1, 0, 0, 0, 0 },
			{ 1, 3, 4, 0, 0, 1, 0, 0, 0, 0 },
			{ 1, 3, 3, 7, 3, 1, 0, 0, 0, 0 },
			{ 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,},
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,},
			{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,}
			};
			for (int i=0;i<10;i++)
				for (int j=0;j<10;j++)
				{
				if (a4[i][j]==3)
				target++;
				map[i][j]=a4[i][j];
				rmap[i][j]=a4[i][j];
			    }

		}

		else if(k==5)
		{
			int a5[15][15]={
			{0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0},
			{0, 0, 1, 1, 1, 1, 1, 0, 4, 1, 0, 0, 0, 0, 0},
			{0, 0, 1, 0, 0, 4, 0, 0, 0, 1, 1, 0, 0, 0, 0},
			{1, 1, 1, 0, 0, 0, 4, 0, 4, 0, 1, 1, 0, 0, 0},
			{1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0},
			{1, 0, 0, 0, 3, 3, 3, 1, 0, 4, 0, 0, 0, 1, 0},
			{1, 0, 4, 1, 3, 3, 3, 1, 4, 0, 1, 1, 0, 1, 0},
			{1, 0, 0, 0, 3, 3, 3, 1, 0, 4, 1, 0, 0, 1, 0},
			{1, 1, 0, 1, 3, 3, 3, 4, 5, 0, 0, 0, 1, 1, 0},
			{0, 1, 0, 1, 1, 4, 0, 4, 4, 0, 1, 1, 1, 0, 0},
			{0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
			{0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
			};

		for (int i=0;i<15;i++)
				for (int j=0;j<15;j++)
				{
				if (a5[i][j]==3)
				target++;
				map15[i][j]=a5[i][j];
				rmap15[i][j]=a5[i][j];
				}
		}


	}



	 void showmap10(){
		for (int i=0;i<10;i++)
		{

			for(int j=0;j<10;j++)
			switch (map[i][j]){
				case 0:
					std::cout<<"  ";//空地
					break;
				case 1:
					std::cout<<"■";//墙
					break;
				case 3:
					std::cout<<"○";//目标点
					break;
				case 4:
					std::cout<<"□";//箱子
					break;
				case 5:
					std::cout<<"雄";//人
					break;
				case 7:
					std::cout<<"★";//箱子到达目标点
				 	break;
				case 8:
					std::cout<<"杉";//人到达目的地
					break;


			}
			std::cout<<"\n";

		}
	}

	void showmap15(){
		for (int i=0;i<15;i++)
		{

			for(int j=0;j<15;j++)
			switch (map15[i][j]){
				case 0:
					std::cout<<"  ";//空地
					break;
				case 1:
					std::cout<<"■";//墙
					break;
				case 3:
					std::cout<<"○";//目标点
					break;
				case 4:
					std::cout<<"□";//箱子
					break;
				case 5:
					std::cout<<"雄";//人
					break;
				case 7:
					std::cout<<"★";//箱子到达目标点
				 	break;
				case 8:
					std::cout<<"杉";//人到达目的地
					break;
			}
			std::cout<<"\n";
		}
	}


	void changemap15(int h[2],int &row,int &col){//控制地图的改变

		switch(getch()){
		case 'w': //上
			if (map15[row - 1][col] == 0||map15[row-1][col]==3) //如果人的前面是空地或者目的地
		{
				map15[row][col] -= 5; //人的ID有可能是5 也有可能是8
				map15[row - 1][col] += 5;
				row--;
		}
		else if (map15[row - 1][col] == 4 || map15[row - 1][col] == 7)//人的前面是箱子
		{
			if (map15[row - 2][col] == 0 || map15[row - 2][col] == 3)//箱子的前面是空地
			{
				map15[row - 2][col] += 4;
				map15[row - 1][col] += 1;
				map15[row][col] -= 5;
				row--;
			}
		}
		break;

		case 's': //下
		if (map15[row + 1][col] == 0 || map15[row + 1][col] == 3) //如果人的前面是空地或者目的地
		{
			map15[row][col] -= 5; //人的ID有可能是5 也有可能是8
			map15[row + 1][col] += 5;
			row++;
		}

		else if (map15[row + 1][col] == 4 || map15[row + 1][col] == 7)//人的前面是箱子
		{
			if (map15[row + 2][col] == 0 || map15[row + 2][col] == 3)//箱子的前面是空地
			{
				map15[row + 2][col] += 4;
				map15[row + 1][col] += 1;
				map15[row][col] -= 5;
				row++;
			}
		}
		break;

		case 'a': //左
		if (map15[row][col - 1] == 0 || map15[row][col - 1] == 3) //如果人的前面是空地或者目的地
		{
			map15[row][col] -= 5; //人的ID有可能是5 也有可能是8
			map15[row][col - 1] += 5;
			col--;
		}

		else if (map15[row][col - 1] == 4 || map15[row][col - 1] == 7)//人的前面是箱子
		{
			if (map15[row][col - 2] == 0 || map15[row][col - 2] == 3)//箱子的前面是空地
			{
				map15[row][col - 2] += 4;
				map15[row][col - 1] += 1;
				map15[row][col] -= 5;
				col--;
			}
		}
		break;

		case 'd': //右
		if (map15[row][col + 1] == 0 || map15[row][col + 1] == 3) //如果人的前面是空地或者目的地
		{
			map15[row][col] -= 5; //人的ID有可能是5 也有可能是8
			map15[row][col + 1] += 5;
			col++;
		}

		else if (map15[row][col + 1] == 4 || map15[row][col + 1] == 7)//人的前面是箱子
		{
			if (map15[row][col + 2] == 0 || map15[row][col + 2] == 3)//箱子的前面是空地
			{
				map15[row][col + 2] += 4;
				map15[row][col + 1] += 1;
				map15[row][col] -= 5;
				col++;
			}
		}
		break;

		case 'r'://重新开始
			for (int i=0;i<15;i++)
				for (int j=0;j<15;j++){
				map15[i][j]=rmap15[i][j];
				}
			row=h[0];
			col=h[1];
		break;
		}
	}

	void changemap(int h[2],int &row,int &col){//控制地图的改变

		switch(getch()){
		case 'w': //上
			if (map[row - 1][col] == 0||map[row-1][col]==3) //如果人的前面是空地或者目的地
		{
				map[row][col] -= 5; //人的ID有可能是5 也有可能是8
				map[row - 1][col] += 5;
				row--;
		}
		else if (map[row - 1][col] == 4 || map[row - 1][col] == 7)//人的前面是箱子
		{
			if (map[row - 2][col] == 0 || map[row - 2][col] == 3)//箱子的前面是空地
			{
				map[row - 2][col] += 4;
				map[row - 1][col] += 1;
				map[row][col] -= 5;
				row--;
			}
		}
		break;

		case 's': //下
		if (map[row + 1][col] == 0 || map[row + 1][col] == 3) //如果人的前面是空地或者目的地
		{
			map[row][col] -= 5; //人的ID有可能是5 也有可能是8
			map[row + 1][col] += 5;
			row++;
		}

		else if (map[row + 1][col] == 4 || map[row + 1][col] == 7)//人的前面是箱子
		{
			if (map[row + 2][col] == 0 || map[row + 2][col] == 3)//箱子的前面是空地
			{
				map[row + 2][col] += 4;
				map[row + 1][col] += 1;
				map[row][col] -= 5;
				row++;
			}
		}
		break;

		case 'a': //左
		if (map[row][col - 1] == 0 || map[row][col - 1] == 3) //如果人的前面是空地或者目的地
		{
			map[row][col] -= 5; //人的ID有可能是5 也有可能是8
			map[row][col - 1] += 5;
			col--;
		}

		else if (map[row][col - 1] == 4 || map[row][col - 1] == 7)//人的前面是箱子
		{
			if (map[row][col - 2] == 0 || map[row][col - 2] == 3)//箱子的前面是空地
			{
				map[row][col - 2] += 4;
				map[row][col - 1] += 1;
				map[row][col] -= 5;
				col--;
			}
		}
		break;

		case 'd': //右
		if (map[row][col + 1] == 0 || map[row][col + 1] == 3) //如果人的前面是空地或者目的地
		{
			map[row][col] -= 5; //人的ID有可能是5 也有可能是8
			map[row][col + 1] += 5;
			col++;
		}

		else if (map[row][col + 1] == 4 || map[row][col + 1] == 7)//人的前面是箱子
		{
			if (map[row][col + 2] == 0 || map[row][col + 2] == 3)//箱子的前面是空地
			{
				map[row][col + 2] += 4;
				map[row][col + 1] += 1;
				map[row][col] -= 5;
				col++;
			}
		}
		break;

		case 'r'://重新开始
			for (int i=0;i<10;i++)
				for (int j=0;j<10;j++){
				map[i][j]=rmap[i][j];
				}
			row=h[0];
			col=h[1];
		break;
		}
	}

	bool victory(){
		int v=0;
		for (int i=0;i<10;i++)
			for(int j=0;j<10;j++)
			if (map[i][j]==7)
			v++;
		if (v==target)
		return true;
		else
		return false;
	}
};
