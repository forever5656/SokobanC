class Human{
	public:int location[2];//在游戏进行中表示人所在的地点
		   int rlocation[2];//保存人所在初始地点
	Human(int i){
		if (i==1){
			location[0]=5;
			location[1]=7;
			rlocation[0]=5;
			rlocation[1]=7;
		}
		else if(i==2){
			location[0]=1;
			location[1]=2;
			rlocation[0]=1;
			rlocation[1]=2;
		}
		else if(i==3){
			location[0]=1;
			location[1]=8;
			rlocation[0]=1;
			rlocation[1]=8;
		}
		else if(i==4){
			location[0]=2;
			location[1]=1;
			rlocation[0]=2;
			rlocation[1]=1;
		}
		else if(i==5){
			location[0]=9;
			location[1]=8;
			rlocation[0]=9;
			rlocation[1]=8;
		}
	}
	void move(Map &map0,Human h){
		map0.changemap(h.rlocation,location[0],location[1]);
	}
	void move15(Map &map0,Human h){
		map0.changemap15(h.rlocation,location[0],location[1]);
	}
};
