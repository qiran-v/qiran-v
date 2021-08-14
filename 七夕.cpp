#include<stdio.h>
#include<windows.h> 
#include <stdlib.h>
void color(int x) //设置字体颜色

{

if(x>=0 && x<=15)

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);

else

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

}
main(){
	
	
	/*
	   int backgroud;/*i代表每种颜色循环次数相当于停留时间
  while(1)
 {
  for(backgroud=0;backgroud<1;backgroud++)
  system("color ab");
   for(backgroud=0;backgroud<1;backgroud++)
  system("color cd");
   for(backgroud=0;backgroud<1;backgroud++)
  system("color fe");
   for(backgroud=0;backgroud<1;backgroud++)
  system("color dc");
 }
    */

system("color c");
	
	char xiao[]="小";
	char pi[]="屁";
	char hai[]="孩";
	color(6);
	 	printf("%s",xiao);
	Sleep(52); 
	printf("%s",pi);
	Sleep(52);
		printf("%s\n",hai);
	Sleep(52);
	
	char a1[]="今"; 
	char b[]="天"; 
	char c[]="是"; 
	char d[]="七";
	char e[]="夕";
	char f[]="节";
	
	char g[]="其";
	char h[]="实";
	char i1[]="一";
	char j[]="直";
	char k[]="有";
	char l[]="句";
	char m1[]="话";
	char n[]="在";
	char o[]="我";
	char p[]="心";
	char q[]="中";
	char r[]="!";
	
	
	
	//其实一直有句话在我心中
	printf("%s",a1);
	Sleep(52); 
	printf("%s",b);
	Sleep(52);
		printf("%s",c);
	Sleep(52); 
	printf("%s",d);
	Sleep(52);
		printf("%s",e);
	Sleep(52); 
	printf("%s\n",f);
	Sleep(52); 

		printf("%s",g);
	Sleep(52); 
		printf("%s",h);
	Sleep(52); 
		printf("%s",i1);
	Sleep(52); 
		printf("%s",j);
	Sleep(52); 
		printf("%s",k);
	Sleep(52); 
		printf("%s",l);
	Sleep(52); 
		printf("%s",m1);
	Sleep(52); 
		printf("%s",n);
	Sleep(52); 
		printf("%s",o);
	Sleep(52); 
		printf("%s",p);
	Sleep(52); 
		printf("%s",q);
	Sleep(52); 
		printf("%s",r);
	Sleep(52); 
	printf("\n");
	
/*	
	*****         *****          1
   *********     *********       2
 ************* *************     3
*****************************    4
*****************************    5
*****************************    6
 ***************************     7
   ***********************       8
     *******************         9
       ***************           10
         ***********             11
           *******               12
             ***                 13
              *                  14
*/

	color(4);

printf("     *****         *****\n");
printf("   *********     *********\n");
printf(" ************* *************\n");
printf("*****************************\n");
printf("*****************************\n");
printf("*****************************\n");
printf(" ***************************\n");
printf("   ***********************\n");
printf("     *******************\n");
printf("       *************** \n");
printf("         *********** \n");
printf("           *******\n");
printf("             ***\n");
printf("              * \n");

printf("\n");




	color(9);
 printf("你还愿意继续看下去吗？（Y/N）\n"); 
 int xuanze;
 scanf("%c",&xuanze);
 
 
 
 /*
 switch(xuanze){
 		case'Y':
 		printf("你在期盼些什么？牛马！\n");
 		break;
 		case'y':
 		printf("你在期盼些什么？牛马！\n");
 		break;
 		
 		
 		default:
 		break;
 	
 } 
 
 
 */
 
 
 
 
 if(xuanze=='Y') 
 {
 	printf("你在期盼些什么？牛马！\n");
 }else  if(xuanze=='y') 
 {
 	printf("你在期盼些什么？牛马！\n");
 }else  if(xuanze=='N') 
 {
 	printf("你真的想要拒绝我吗？\n");
 }else  if(xuanze=='n') 
 {
 	printf("你真的想要拒绝我吗？\n");
 }else
 {
 	printf("你在想些什么，选错绕开话题？牛马！！\n");
 }
 
  
 	color(7);
 printf("--------------------------------\n");
 printf("Process exited after 12.98 seconds with return value 0\n");
 printf("请按任意键继续. . .\n");
  printf("\n"); 
  printf("\n");
  printf("\n");
  
  
  
  
   	Sleep(2000);
  color(3);
  	int i;
char caidan[254]={"人走了吗？还有最后彩蛋呢！！！"};


for(i=0;i<=strlen(caidan);i++)
{
  printf("%c",caidan[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
		
		
		
	char qianzou[30]={"前奏过去了，下面还有呢！"};


for(i=0;i<=strlen(qianzou);i++)
{
  printf("%c",qianzou[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
		
		
	char nuli[30]={"这段时间你的努力是有目共睹的"};


for(i=0;i<=strlen(nuli);i++)
{
  printf("%c",nuli[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
		
		
		
	char xiang[30]={"我想这可能是你"};


for(i=0;i<=strlen(xiang);i++)
{
  printf("%c",xiang[i]);
  Sleep(50);
}

		
		
		
	char renzhen[254]={"到现在最认真对待的一件事了吧！"};


for(i=0;i<=strlen(renzhen);i++)
{
  printf("%c",renzhen[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
 
 
	char chenggong[30]={"有人说：想要成功，"};


for(i=0;i<=strlen(chenggong);i++)
{
  printf("%c",chenggong[i]);
  Sleep(50);
}

 
 
 
 
	char fuchu[254]={"你需要付出比别人多更多的精力。"};


for(i=0;i<=strlen(fuchu);i++)
{
  printf("%c",fuchu[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
		
		
		
	char shuijiao[30]={"别人睡觉时你在学习，"};


for(i=0;i<=strlen(shuijiao);i++)
{
  printf("%c",shuijiao[i]);
  Sleep(50);
}

 
 
 
 
 	char youxi[254]={"别人玩游戏的时候你在学习；"};


for(i=0;i<=strlen(youxi);i++)
{
  printf("%c",youxi[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
		
		
		
		
		
 	char heiye[254]={"你在黑夜里奔跑，在黎明时舞蹈。"};


for(i=0;i<=strlen(heiye);i++)
{
  printf("%c",heiye[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
		
		
 	char wanmei[254]={"我想这正是最好的你，最完美的你"};


for(i=0;i<=strlen(wanmei);i++)
{
  printf("%c",wanmei[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
		
		
	/*	
 	char wanmei[250]={"我想这正是最好的你，最完美的你"};


for(i=0;i<=strlen(wanmei);i++)
{
  printf("%c",wanmei[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
		
		*/
	char xin1[254]={"      ****          ****"};


for(i=0;i<=strlen(xin1);i++)
{
  printf("%c",xin1[i]);
  Sleep(50);
}
	printf("\n");
	
	char xin2[254]={"   *********     *********"};


for(i=0;i<=strlen(xin2);i++)
{
  printf("%c",xin2[i]);
  Sleep(50);
}
	printf("\n");
	
	char xin3[254]={" ************* *************"};


for(i=0;i<=strlen(xin3);i++)
{
  printf("%c",xin3[i]);
  Sleep(50);
}
	printf("\n");
	
	char xin4[254]={"*****************************"};


for(i=0;i<=strlen(xin4);i++)
{
  printf("%c",xin4[i]);
  Sleep(50);
}
	printf("\n");
	
	char xin5[254]={"*****************************"};


for(i=0;i<=strlen(xin5);i++)
{
  printf("%c",xin5[i]);
  Sleep(50);
}
	printf("\n");
	
	
	char xin6[254]={"*****************************"};


for(i=0;i<=strlen(xin6);i++)
{
  printf("%c",xin6[i]);
  Sleep(50);
}
	printf("\n");
	
	
	
	char xin7[254]={" ***************************"};


for(i=0;i<=strlen(xin7);i++)
{
  printf("%c",xin7[i]);
  Sleep(50);
}
	printf("\n");
	
	char xin8[254]={"   *********************** "};


for(i=0;i<=strlen(xin8);i++)
{
  printf("%c",xin8[i]);
  Sleep(50);
}
	printf("\n");
	
	
	
	char xin9[254]={"     *******************"};


for(i=0;i<=strlen(xin9);i++)
{
  printf("%c",xin9[i]);
  Sleep(50);
}
	printf("\n");
	
	
	
		char xin10[254]={"       ***************  "};


for(i=0;i<=strlen(xin10);i++)
{
  printf("%c",xin10[i]);
  Sleep(50);
}
	printf("\n");



		char xin11[254]={"         ***********"};


for(i=0;i<=strlen(xin11);i++)
{
  printf("%c",xin11[i]);
  Sleep(50);
}
	printf("\n");
	
	
	
	char xin12[254]={"           *******"};


for(i=0;i<=strlen(xin12);i++)
{
  printf("%c",xin12[i]);
  Sleep(50);
}
	printf("\n");
	
	
	char xin13[254]={"             ***"};


for(i=0;i<=strlen(xin13);i++)
{
  printf("%c",xin13[i]);
  Sleep(50);
}
	printf("\n");
	
	
	
	char xin14[30]={"              * "};


for(i=0;i<=strlen(xin14);i++)
{
  printf("%c",xin14[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
	
	
	char jiyu[254]={"这些你本就不需要任何人给予"};


for(i=0;i<=strlen(jiyu);i++)
{
  printf("%c",jiyu[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");




	char xiangxin[254]={"你要相信："};


for(i=0;i<=strlen(xiangxin);i++)
{
  printf("%c",xiangxin[i]);
  Sleep(50);
}
	printf("\n");
 	printf("\n");
 
 
	char jieshu[254]={"在考试结束那一刻,"};


for(i=0;i<=strlen(jieshu);i++)
{
  printf("%c",jieshu[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
	
	
	char songqi[254]={"你可以依靠墙壁，松一口气。"};


for(i=0;i<=strlen(songqi);i++)
{
  printf("%c",songqi[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
	
	
	
	char paipai[254]={"那时我会拍拍你，对你说："};


for(i=0;i<=strlen(paipai);i++)
{
  printf("%c",paipai[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
	
	
	
	char shijian[254]={"世间灿烂盛大,"};


for(i=0;i<=strlen(shijian);i++)
{
  printf("%c",shijian[i]);
  Sleep(50);
}

	
	
	
	char huanyin[254]={"欢迎回家！"};


for(i=0;i<=strlen(huanyin);i++)
{
  printf("%c",huanyin[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
/*
		

	
	
	char str24[] = "             ***";//13
	char tmp24[10] = {0};
	int i24 = 0;
	int len24 = strlen(str24);
	for(i24 = 0; i24 < len; )
	{
		memset(tmp24,0,3);
		if(str[i24] >= 0x80)
			{
				strncpy(tmp24,&(str24[i24]),2);
				i24 += 2;
			}
				else
					{
						strncpy(tmp24,&(str24[i24]),1);
						i24 += 1;
					}
	printf("%s",tmp24);
	Sleep(25);
	}
	printf("\n");
	
	
	
	
	
	
	char str25[] = "              * ";//14
	char tmp25[10] = {0};
	int i25 = 0;
	int len25 = strlen(str25);
	for(i25 = 0; i25 < len; )
	{
		memset(tmp25,0,3);
		if(str[i25] >= 0x80)
			{
				strncpy(tmp25,&(str25[i25]),2);
				i25 += 2;
			}
				else
					{
						strncpy(tmp25,&(str25[i25]),1);
						i25 += 1;
					}
	printf("%s",tmp25);
	Sleep(25);
	}
	printf("\n");
		printf("\n");
		
		
		
			
	char str26[] = "这些你本就不需要任何人给予";//14
	char tmp26[10] = {0};
	int i26 = 0;
	int len26 = strlen(str26);
	for(i26 = 0; i26 < len; )
	{
		memset(tmp26,0,3);
		if(str[i26] >= 0x80)
			{
				strncpy(tmp26,&(str26[i26]),2);
				i26 += 2;
			}
				else
					{
						strncpy(tmp26,&(str26[i26]),1);
						i26 += 1;
					}
	printf("%s",tmp26);
	Sleep(50);
	}
	printf("\n");
		printf("\n");
		
		
		
	char str27[] = "你要相信：";//14
	char tmp27[10] = {0};
	int i27 = 0;
	int len27 = strlen(str27);
	for(i27 = 0; i27 < len; )
	{
		memset(tmp27,0,3);
		if(str[i27] >= 0x80)
			{
				strncpy(tmp27,&(str27[i27]),2);
				i27 += 2;
			}
				else
					{
						strncpy(tmp27,&(str27[i27]),1);
						i27 += 1;
					}
	printf("%s",tmp27);
	Sleep(50);
	}
	printf("\n");
		printf("\n");
	
	
	
			
	char str28[] = "在考试结束那一刻";//14
	char tmp28[10] = {0};
	int i28 = 0;
	int len28 = strlen(str28);
	for(i28 = 0; i28 < len; )
	{
		memset(tmp28,0,3);
		if(str[i28] >= 0x80)
			{
				strncpy(tmp28,&(str28[i28]),2);
				i28 += 2;
			}
				else
					{
						strncpy(tmp28,&(str28[i28]),1);
						i28 += 1;
					}
	printf("%s",tmp28);
	Sleep(50);
	}
	printf("\n");
		printf("\n");
	
	
	
	char str29[] = "你可以依靠墙壁，松一口气";//14
	char tmp29[10] = {0};
	int i29 = 0;
	int len29 = strlen(str29);
	for(i29 = 0; i29 < len; )
	{
		memset(tmp29,0,3);
		if(str[i29] >= 0x80)
			{
				strncpy(tmp29,&(str29[i29]),2);
				i29 += 2;
			}
				else
					{
						strncpy(tmp29,&(str29[i29]),1);
						i29 += 1;
					}
	printf("%s",tmp29);
	Sleep(50);
	}
	printf("\n");
		printf("\n");
		
		
		
	char str30[] = "那时我会拍拍你，对你说：";//14
	char tmp30[10] = {0};
	int i30 = 0;
	int len30 = strlen(str30);
	for(i30 = 0; i30 < len; )
	{
		memset(tmp30,0,3);
		if(str[i30] >= 0x80)
			{
				strncpy(tmp30,&(str30[i30]),2);
				i30 += 2;
			}
				else
					{
						strncpy(tmp30,&(str30[i30]),1);
						i30 += 1;
					}
	printf("%s",tmp30);
	Sleep(50);
	}
	printf("\n");
		printf("\n");
		
		
					char str31[] = "世间灿烂盛大";//14
	char tmp31[10] = {0};
	int i31 = 0;
	int len31 = strlen(str31);
	for(i31 = 0; i31 < len; )
	{
		memset(tmp31,0,3);
		if(str[i31] >= 0x80)
			{
				strncpy(tmp31,&(str31[i31]),2);
				i31 += 2;
			}
				else
					{
						strncpy(tmp31,&(str31[i31]),1);
						i31 += 1;
					}
	printf("%s",tmp31);
	Sleep(50);
	}
	printf("\n");
		printf("\n");
	
	
	
	
	
	
						char str32[] = "欢迎回家！！！";//14
	char tmp32[10] = {0};
	int i32 = 0;
	int len32 = strlen(str31);
	for(i32 = 0; i32 < len; )
	{
		memset(tmp32,0,3);
		if(str[i32] >= 0x80)
			{
				strncpy(tmp32,&(str32[i32]),2);
				i32 += 2;
			}
				else
					{
						strncpy(tmp32,&(str32[i32]),1);
						i32 += 1;
					}
	printf("%s",tmp32);
	Sleep(50);
	}
	printf("\n");
		printf("\n");
		
		
		*/ 
	
	/*	
	*****         *****          1
   *********     *********       2
 ************* *************     3
*****************************    4
*****************************    5
*****************************    6
 ***************************     7
   ***********************       8
     *******************         9
       ***************           10
         ***********             11
           *******               12
             ***                 13
              *                  14
	
 /*
	char cai[]="彩";  
 	char cai[]="彩"; 
	char cai[]="彩"; 
	char cai[]="彩"; 
	char cai[]="彩"; 
	
	char cai[]="彩"; 
	char cai[]="彩"; 
	char cai[]="彩"; 
	char cai[]="彩"; 
	char cai[]="彩"; 
	char cai[]="彩"; 
	char cai[]="彩"; 

 printf("前奏过去了，其实还有呢！\n"); 
 printf("这段时间你的努力是有目共睹的，\n");
 printf("我想这可能是你到现在最认真对待的一件事了吧！\n"); 

*/

 //printf("前奏过去了，其实还有呢！"); 
 //printf("这段时间你的努力是有目共睹的，");
 //printf("我想这可能是你到现在最认真对待的一件事了吧！"); 


	/*
	Sleep(1000);
		printf("%s",a);
	Sleep(1000); 
	printf("%s",b);
	Sleep(1000);
		printf("%s",a);
	Sleep(1000); 
	printf("%s",b);
	Sleep(1000);
	
	*****         *****
   *********     *********
 ************* *************
*****************************
*****************************
*****************************
 ***************************
   ***********************
     *******************
       ***************
         ***********
           *******
             ***
              *
*/

  /*

 
	char str[] = "人走了吗？还有最后彩蛋呢！！！";
	char tmp[3] = {0};
	int i3 = 0;
	int len = strlen(str);
	for(i3 = 0; i3 < len; )
	{
		memset(tmp,0,3);
		if(str[i3] >= 0x80)
			{
				strncpy(tmp,&(str[i3]),2);
				i3 += 2;
			}
				else
					{
						strncpy(tmp,&(str[i3]),1);
						i3 += 1;
					}
	printf("%s",tmp);
	Sleep(50);
	}
	printf("\n");
 		printf("\n");
 
 
	char str1[] = "前奏过去了，下面还有呢！";
	char tmp1[3] = {0};
	int i4 = 0;
	int len1 = strlen(str1);
	for(i4 = 0; i4 < len1; )
	{
		memset(tmp1,0,3);
		if(str[i4] >= 0x80)
			{
				strncpy(tmp1,&(str1[i4]),2);
				i4 += 2;
			}
				else
					{
						strncpy(tmp1,&(str1[i4]),1);
						i4 += 1;
					}
	printf("%s",tmp1);
	Sleep(50);
	}
	printf("\n");
		printf("\n");
	
*/
	
	
	/*
	
	int i;
char hello[30]={"这段时间你的努力是有目共睹的"};


for(i=0;i<=strlen(hello);i++)
{
  printf("%c",hello[i]);
  Sleep(50);
}
	printf("\n");
		printf("\n");
/*	
	char str2[] = "这段时间你的努力是有目共睹的";
	char tmp2[3] = {0};
	int i5 = 0;
	int len2 = strlen(str2);
	for(i5= 0; i5 < len2; )
	{
		memset(tmp2,0,3);
		if(str[i5] >= 0x80)
			{
				strncpy(tmp2,&(str2[i5]),2);
				i5 += 2;
			}
				else
					{
						strncpy(tmp2,&(str2[i5]),1);
						i5 += 1;
					}
	printf("%s",tmp2);
	Sleep(50);
	}
	printf("\n");
		printf("\n");
	
	
	char str301[] = "我想这可能是你";
	char tmp301[3] = {0};
	int i601 = 0;
	int len301 = strlen(str301);
	for(i601 = 0; i601 < len; )
	{
		memset(tmp301,0,9);
		if(str[i601] >= 0x80)
			{
				strncpy(tmp301,&(str301[i601]),2);
				i601 += 2;
			}
				else
					{
						strncpy(tmp301,&(str301[i601]),1);
						i601 += 1;
					}
	printf("%s",tmp301);
	Sleep(50);
	}
	

	
	char str35[] = "到现在最认真对待的一件事了吧！";
	char tmp35[3] = {0};
	int i35 = 0;
	int len35 = strlen(str35);
	for(i35 = 0; i35 < len; )
	{
		memset(tmp35,0,9);
		if(str[i35] >= 0x80)
			{
				strncpy(tmp35,&(str35[i35]),2);
				i35 += 2;
			}
				else
					{
						strncpy(tmp35,&(str35[i35]),1);
						i35 += 1;
					}
	printf("%s",tmp35);
	Sleep(50);
	}
	printf("\n");
		printf("\n");


*/
/* 
			
			
	char str4[] = "有人说：想要成功，";
	char tmp4[3] = {0};
	int i7 = 0;
	int len4 = strlen(str4);
	for(i7 = 0; i7 < len; )
	{
		memset(tmp3,0,3);
		if(str[i7] >= 0x80)
			{
				strncpy(tmp4,&(str3[i7]),2);
				i7 += 2;
			}
				else
					{
						strncpy(tmp4,&(str4[i7]),1);
						i7 += 1;
					}
	printf("%s",tmp4);
	Sleep(50);
	}
	char str40[] = "你需要付出比别人多更多的精力。";
	char tmp40[3] = {0};
	int i70 = 0;
	int len40 = strlen(str40);
	for(i70 = 0; i70 < len; )
	{
		memset(tmp40,0,3);
		if(str[i70] >= 0x80)
			{
				strncpy(tmp40,&(str40[i70]),2);
				i70 += 2;
			}
				else
					{
						strncpy(tmp40,&(str40[i70]),1);
						i70 += 1;
					}
	printf("%s",tmp40);
	Sleep(50);
	}
	printf("\n");
		printf("\n");
		
		
	char str9[] = "别人睡觉时你在学习，";
	char tmp9[9] = {0};
	int i9 = 0;
	int len9 = strlen(str4);
	for(i9 = 0; i9 < len; )
	{
		memset(tmp9,0,3);
		if(str[i9] >= 0x80)
			{
				strncpy(tmp9,&(str9[i9]),2);
				i9 += 2;
			}
				else
					{
						strncpy(tmp9,&(str9[i9]),1);
						i9 += 1;
					}
	printf("%s",tmp9);
	Sleep(50);
	}
	char str90[] = "别人玩游戏的时候你在学习；";
	char tmp90[9] = {0};
	int i90 = 0;
	int len90 = strlen(str90);
	for(i90 = 0; i90 < len; )
	{
		memset(tmp90,0,3);
		if(str[i90] >= 0x80)
			{
				strncpy(tmp90,&(str90[i90]),2);
				i90 += 2;
			}
				else
					{
						strncpy(tmp90,&(str90[i90]),1);
						i90 += 1;
					}
	printf("%s",tmp90);
	Sleep(50);
	}
	printf("\n");
		printf("\n");
		
		
		
	char str10[] = "你在黑夜里奔跑，在黎明时舞蹈。";
	char tmp10[3] = {0};
	int i10 = 0;
	int len10 = strlen(str10);
	for(i10 = 0; i10 < len; )
	{
		memset(tmp10,0,3);
		if(str[i10] >= 0x80)
			{
				strncpy(tmp10,&(str10[i10]),2);
				i10 += 2;
			}
				else
					{
						strncpy(tmp10,&(str10[i10]),1);
						i10 += 1;
					}
	printf("%s",tmp10);
	Sleep(50);
	}
	printf("\n");
		printf("\n");
	
	
	
	char str11[] = "这正是最好的你，最完美的你";
	char tmp11[3] = {0};
	int i11 = 0;
	int len11 = strlen(str11);
	for(i11 = 0; i11 < len; )
	{
		memset(tmp11,0,3);
		if(str[i11] >= 0x80)
			{
				strncpy(tmp11,&(str11[i11]),2);
				i11 += 2;
			}
				else
					{
						strncpy(tmp11,&(str11[i11]),1);
						i11 += 1;
					}
	printf("%s",tmp11);
	Sleep(50);
	}
	printf("\n");
		printf("\n");
		
		
		
			char str12[] = "     ****         ****";//1 
	char tmp12[10] = {0};
	int i12 = 0;
	int len12 = strlen(str12);
	for(i12 = 0; i12 < len; )
	{
		memset(tmp12,0,3);
		if(str[i12] >= 0x80)
			{
				strncpy(tmp12,&(str12[i12]),2);
				i12 += 2;
			}
				else
					{
						strncpy(tmp12,&(str12[i12]),1);
						i12 += 1;
					}
	printf("%s",tmp12);
	Sleep(25);
	}
	printf("\n");

		
		
	char str13[] = "   *********     *********";//2
	char tmp13[10] = {0};
	int i13 = 0;
	int len13 = strlen(str13);
	for(i13 = 0; i13 < len; )
	{
		memset(tmp13,0,3);
		if(str[i13] >= 0x80)
			{
				strncpy(tmp13,&(str13[i13]),2);
				i13 += 2;
			}
				else
					{
						strncpy(tmp13,&(str13[i13]),1);
						i13 += 1;
					}
	printf("%s",tmp13);
	Sleep(25);
	}
	printf("\n");

	
	
			
	char str14[] = " ************* *************";//3
	char tmp14[10] = {0};
	int i14 = 0;
	int len14 = strlen(str14);
	for(i14 = 0; i14 < len; )
	{
		memset(tmp14,0,3);
		if(str[i14] >= 0x80)
			{
				strncpy(tmp14,&(str14[i14]),2);
				i14 += 2;
			}
				else
					{
						strncpy(tmp14,&(str14[i14]),1);
						i14 += 1;
					}
	printf("%s",tmp14);
	Sleep(25);
	}
	printf("\n");

		
		
	char str15[] = "*****************************";//4
	char tmp15[10] = {0};
	int i15 = 0;
	int len15 = strlen(str15);
	for(i15 = 0; i15 < len; )
	{
		memset(tmp15,0,3);
		if(str[i15] >= 0x80)
			{
				strncpy(tmp15,&(str15[i15]),2);
				i15 += 2;
			}
				else
					{
						strncpy(tmp15,&(str15[i15]),1);
						i15 += 1;
					}
	printf("%s",tmp15);
	Sleep(25);
	}
	printf("\n");

	
	
	
	
	char str16[] = "*****************************";//5
	char tmp16[10] = {0};
	int i16 = 0;
	int len16 = strlen(str16);
	for(i16 = 0; i16 < len; )
	{
		memset(tmp16,0,3);
		if(str[i16] >= 0x80)
			{
				strncpy(tmp16,&(str16[i16]),2);
				i16 += 2;
			}
				else
					{
						strncpy(tmp16,&(str16[i16]),1);
						i16 += 1;
					}
	printf("%s",tmp16);
	Sleep(25);
	}
	printf("\n");

	
	
	char str17[] = "*****************************";//6 
	char tmp17[10] = {0};
	int i17 = 0;
	int len17 = strlen(str17);
	for(i17 = 0; i17 < len; )
	{
		memset(tmp17,0,3);
		if(str[i17] >= 0x80)
			{
				strncpy(tmp17,&(str17[i17]),2);
				i17 += 2;
			}
				else
					{
						strncpy(tmp17,&(str17[i17]),1);
						i17 += 1;
					}
	printf("%s",tmp17);
	Sleep(25);
	}
	printf("\n");
	
	
	
	
	char str18[] = " ***************************";//7 
	char tmp18[10] = {0};
	int i18 = 0;
	int len18 = strlen(str18);
	for(i18 = 0; i18 < len; )
	{
		memset(tmp18,0,3);
		if(str[i18] >= 0x80)
			{
				strncpy(tmp18,&(str18[i18]),2);
				i18 += 2;
			}
				else
					{
						strncpy(tmp18,&(str18[i18]),1);
						i18 += 1;
					}
	printf("%s",tmp18);
	Sleep(25);
	}
	printf("\n");

	
	
	
	
	char str19[] = "   *********************** ";//8 
	char tmp19[10] = {0};
	int i19 = 0;
	int len19 = strlen(str19);
	for(i19 = 0; i19 < len; )
	{
		memset(tmp19,0,3);
		if(str[i19] >= 0x80)
			{
				strncpy(tmp19,&(str19[i19]),2);
				i19 += 2;
			}
				else
					{
						strncpy(tmp19,&(str19[i19]),1);
						i19 += 1;
					}
	printf("%s",tmp19);
	Sleep(25);
	}
	printf("\n");

	
	
	
	char str20[] = "     *******************";//9 
	char tmp20[10] = {0};
	int i20 = 0;
	int len20 = strlen(str20);
	for(i20 = 0; i20 < len; )
	{
		memset(tmp20,0,3);
		if(str[i20] >= 0x80)
			{
				strncpy(tmp20,&(str20[i20]),2);
				i20 += 2;
			}
				else
					{
						strncpy(tmp20,&(str20[i20]),1);
						i20 += 1;
					}
	printf("%s",tmp20);
	Sleep(25);
	}
	printf("\n");

		
		
		
	char str21[] = "       ***************  ";//10 
	char tmp21[10] = {0};
	int i21 = 0;
	int len21 = strlen(str21);
	for(i21 = 0; i21 < len; )
	{
		memset(tmp21,0,3);
		if(str[i21] >= 0x80)
			{
				strncpy(tmp21,&(str21[i21]),2);
				i21 += 2;
			}
				else
					{
						strncpy(tmp21,&(str21[i21]),1);
						i21 += 1;
					}
	printf("%s",tmp21);
	Sleep(25);
	}
	printf("\n");
	
	
	
	
	char str22[] = "         ***********";//11
	char tmp22[10] = {0};
	int i22 = 0;
	int len22 = strlen(str22);
	for(i22 = 0; i22 < len; )
	{
		memset(tmp22,0,3);
		if(str[i22] >= 0x80)
			{
				strncpy(tmp22,&(str22[i22]),2);
				i22 += 2;
			}
				else
					{
						strncpy(tmp22,&(str22[i22]),1);
						i22 += 1;
					}
	printf("%s",tmp22);
	Sleep(25);
	}
	printf("\n");
	
	
	
	
	char str23[] = "           *******";//12
	char tmp23[10] = {0};
	int i23 = 0;
	int len23 = strlen(str23);
	for(i23 = 0; i23 < len; )
	{
		memset(tmp23,0,3);
		if(str[i23] >= 0x80)
			{
				strncpy(tmp23,&(str23[i23]),2);
				i23 += 2;
			}
				else
					{
						strncpy(tmp23,&(str23[i23]),1);
						i23 += 1;
					}
	printf("%s",tmp23);
	Sleep(25);
	}
	printf("\n");
	

	
	*/

} 
