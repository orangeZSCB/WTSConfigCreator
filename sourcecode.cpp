#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
	cout<<"你好！欢迎使用Orange制作的WildTools配置生成器！";
	cout<<"\nUI简陋请见谅。";
	cout<<"\nCopyright(c) Orange Game Studio." ;
	cout<<"\n使用此工具前请确保你已经背熟了MC英文id/不是";
	cout<<"\n请输入你的镐子自定义id：";
	string id;
	cin>>id;
	cout<<"\n破坏等级（回答格式：1为1*1*1，2为2*2*2，以此类推。）：" ;
	string breaklevel;
	cin>>breaklevel; 
	cout<<"\n输入你想要的镐子外观（回答格式：NETHERRITE_PICKAXE是下界合金镐子，DIAMOND_PICKAXE钻石镐子，GOLDEN_PICKAXE金镐子，IRON_PICKAXE铁镐子，STONE_PICKAXE石镐子）";
	string toolid;
	cin>>toolid;
	cout<<"\n输入镐子展示名字（支持颜色代码）"; 
	string name; 
	cin>>name;
	cout<<"\n输入镐子描述（目前只支持编辑一行描述，支持颜色代码）："; 
	string lore; 
	cin>>lore;
	cout<<"\n生成配置中，请稍后......" ;
	Sleep(5000);
	cout<<"\n已经生成到源目录的trenchpickaxe.txt中。" ;
	cout<<"\n请直接写到WildTools配置文件的最后一行。" ;
	cout<<"哪怕是你改WTS配置文件里面自带的工具例子也不要直接复制这个工具生成的！";
		cout<<"哪怕是你改WTS配置文件里面自带的工具例子也不要直接复制这个工具生成的！";
			cout<<"哪怕是你改WTS配置文件里面自带的工具例子也不要直接复制这个工具生成的！";
	freopen("trenchpickaxe.txt","w",stdout);
	cout<<id<<":"<<endl;
	cout<<"    tool-mode: CUBOID"<<endl;
	cout<<"    break-level: "<<breaklevel<<endl;
	cout<<"    only-same-type: false\n";
	cout<<"    unbreakable: true\n";
	cout<<"    type: "<<toolid<<endl;
	cout<<"    name: "<<name<<endl;
	cout<<"    lore:"<<endl;
	cout<<"    - '"<<lore<<"'"<<endl;
	cout<<"    - '"<<"黑名单方块：刷怪笼"<<"'"<<endl;
	cout<<"    - '"<<"&4只会掉落矿物"<<"'"<<endl;
	cout<<"    enchants:\n    - 'DIG_SPEED:5'\n    blacklisted-blocks:\n    - 'MOB_SPAWNER'\n    whitelisted-drops:\n    - 'COAL'\n    - 'IRON_ORE'\n    - 'GOLD_ORE'\n    - 'REDSTONE'\n    - 'INK_SACK:4'\n    - 'DIAMOND'\n    - 'EMERALD'\n    - 'QUARTZ'\n"; 
	system("pause");
	return 0;
} 
