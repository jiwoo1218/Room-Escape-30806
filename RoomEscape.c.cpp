#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();
void room();
void frame();	//1. ¾×ÀÚ
void bed();		//2. Ä§´ë 
void fridge();	//3. ¼öÁ¤Áß 
void safebox();	//4. ¼öÁ¤Áß  
void closet();	//5. ¼öÁ¤Áß 
void door();	//6. ¼öÁ¤Áß 
void door_password();

int isBrokenFrame = FALSE;	//¾×ÀÚ ÆÄ¼Õ¿©ºÎ 
int isBrokenBed = FALSE;	//Ä§´ë ÆÄ¼Õ¿©ºÎ 

int isFindMagnifyingGlass = FALSE;	//µ¸º¸±â ½Àµæ¿©ºÎ 
int isFindGoldKey = FALSE;		//±İ»ö ¿­¼è È¹µæ ¿©ºÎ 
int isFindSilverKey = FALSE; 	//Àº»ö ¿­¼è È¹µæ ¿©ºÎ 

int isOpenSafebox = FALSE;		//±İ°í ¿ÀÇÂ ¿©ºÎ 

int main() {
	int menu;
	
	while(1) {
		printf("ºñ¹öÀÇ ¹æ\n\n");
		printf("1. °ÔÀÓ ½ÃÀÛ\n");
		printf("0. ÀÀ ¾ÈÇØ\n");
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				intro();
				room();
				break;
			case 0:
				return 0;
			default:
				printf("ÀÔ·Â ¿À·ù\n\n");
				break;
		}
	}
	
}

void intro() {
	system("cls");
	printf("\n\n");
	printf("¿À´ÃÀº ¼Ò²ßÄ£±¸ ¹Ì¶õÀÌ¿Í ³îÀÌ°ø¿ø¿¡ °¡´Â ³¯ÀÌ´Ù.\n\n");
	Sleep(1500);
	printf("³îÀÌ°ø¿ø È­Àå½Ç °¡´Â °ñ¸ñ¿¡¼­.\n");
	Sleep(2500);
	printf("°ËÀº Á¶Á÷¿¡ ¹Ğ°Å·¡ ÇöÀåÀ» ¹ß°ßÇÏ°Ô µÇ°í\n");
	Sleep(1500);
	printf("»çÁøÀ» Âï°í µµ¸Á°¡·Á´ø Âû³ª¿¡ µÚÅë¼ö¸¦ ¸Â¾Ò´ç\n\n");
	Sleep(2500);
	printf("´«À» ¶°º¸´Ï ³¸¼± ¹æ¾È¿¡ µé¾î¿ÍÀÖ´Ù..\n");
	Sleep(1500);
	printf("ÃµÀå¿¡´Â ºñ¹ö»çÁøÀÌ µµ¹èµÇ¾îÀÖ´Ù..\n\n");
	Sleep(1500);
	printf("¿©±ä ¾îµğÁö..? ÀÌ°÷¿¡¼­ Å»ÃâÇØ¾ßµÈ´Ù..\n\n");
	Sleep(1500);
	printf("Áı¿¡´Â ÂîÂî´ß¹ßÀÌ ³¯ ±â´Ù¸®°í ÀÖ¾î!.\n\n");
	Sleep(1500);
	system("pause");
}

void room() {
	int menu;
	
	while(1) {
		system("cls");	
		printf("[ºñ¹öÀÇ ¹æ]\n\n");
		printf("¹æ ¾È¿¡¼­ ÇÒ ¼ö ÀÖ´Â °ÍµéÀ» Ã£¾Æº¸ÀÚ.\n\n");
		printf("1. Ã¥»ó    2.¶ó²Ù¶ó²ÙÄ§´ë    3. ³ÃÀå°í\n");
		printf("4. È­Àå½Ç    5. ¿ÊÀå    6. Å»Ãâ±¸\n");
			
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isBrokenFrame) {
					printf("\nÄ§´ë¸¦ ºÎ¼­¹ö·È´Ù. ´õ ÀÌ»ó Ã£À» ¼ö ¾ø´Ù.\n");
					system("pause");
				} else {
					frame();					
				}
				break;
			case 2:
				bed();
				break;
			case 3:
				fridge();
				break;
			case 4:
				safebox();
				break;
			case 5:
				closet();
				break;
			case 6:
				door();
				break;
			default:
				printf("\n# ERROR # ÀÔ·Â°ª ¿À·ù\n");
				system("pause");
		}
	}
	
}

void frame(){//1.  Ã¥»ó 
	int menu;
	
	while(1) {
		system("cls");
		printf("[ºñ¹öÀÇ ¹æ]-[Ã¥»ó]\n\n");
		printf("¹æ¾È¿¡ Å«Ã¥»óÀÌ ÀÖ´Ù.\n\n");
		printf("1. Ã¥»óÀ» »ìÆìº»´Ù\n");
		printf("2. Ã¥»óÀ» ºÎ¼ø´Ù\n");
		printf("0. µ¹¾Æ°¡±â\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindMagnifyingGlass) {
				} else {
					printf("\nÃ¥»ó¿¡´Â º°°Å¾ø´Â°Å °°´Ù .\n\n");
				}
				break;
			case 2:
				isBrokenFrame = TRUE;
				printf("\n Ã¥»ó. ÆÄ±«ÇÑ´Ù..\n");
				printf("Å©½î!!! Ã¶Á¦ Ã¥»óÀÌ¶ó´Ï!!\n\n");
				printf("Á»´õ ·¹º§¾÷À» ÇØ¾ßµÉ°Å °°´Ù.\n\n");
				system("pause");
				return;
			case 0:
				return;
			default:
				printf("\nÀÀ Æ²·È¾û ´Ù½Ã ½á1\n\n");
				break;
		}
		system("pause");
	}	
}	

void bed() {//2. Ä§´ë 
	int menu;
	
	while(1) {
		system("cls");
		printf("[¿ø·ë]-[¶ó²Ù¶ó²ÙÄ§´ë]\n\n");
		printf("±¸¼®¿¡ ¶ó²Ù¶ó²ÙÄ§´ë°¡ ÀÖ´Ù.\n\n");
		printf("1. ¶ó²Ù¶ó²ÙÄ§´ë ¹ØÀ» »ìÆìº»´Ù\n");
		printf("2. ¶ó²Ù¶ó²ÙÄ§´ë¸¦ »ìÆìº»´Ù\n");
		printf("3. ÀÌºÒÀ» »ìÆìº»´Ù\n");
		printf("0. µ¹¾Æ°¡±â\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isBrokenBed)  {
					printf("\n¶ó²Ù¶ó²Ù Ä§´ë´Â ÆÄ±«µÇ¾ú´Ù..\n\n");
				} else {
					printf("\n¸ÕÁö°¡ °¡µæÇÏ´Ù ¾î¿ì´õ·¯¿ı.\n");	
				}
				system("pause");
				break;
			case 2:
				if(isBrokenBed) {
					printf("\nÄ§´ë°¡ ºÎ¼­Á®¼­ ´õ ÀÌ»ó Ã£À» ¼ö ¾ø´Ù.\n\n");
				} else {
					system("cls");
					printf("[¿ø·ë]-[Ä§´ë]-[Ä§´ë]\n\n");
					printf("\n±×Àú Æò¹üÇÑ ¶ó²Ù¶ó²Ù Ä§´ëÃ³·³ º¸ÀÎ´Ù.\n\n");
					printf("1. Ä§´ë¸¦¡ºÆÄ±«¡»ÇÑ´Ù.\n");
					printf("2. Ä§´ë¸¦¡º»ì·Á¡»ÁØ´Ù.\n");
					printf(">> ");
					scanf("%d", &menu);
					
					switch(menu) {
						case 1:
							isBrokenBed = TRUE;	//Ä§´ë ºÎ¼­Áü 
							printf("\n# Ä§´ë°¡¡ºÆÄ±«¡»µÇ¾ú´Ù. \n\n");
							printf("1. ÀÜÇØ¸¦ µÚÁø´Ù.\n");
							printf("2. °¡¸¸È÷ µĞ´Ù.\n");
							printf(">> ");
							scanf("%d", &menu);
							
							switch(menu) {
								case 1: 
									printf("\nÆÄ¶õ»ö ¸Ş¸ğÀåÀÌ ÀÖ´Ù. ºñ¹Ğ¹øÈ£ ÀÎ°Ç°¡?\n");
									printf("³» ¼öÁØ¿¡ Ç®¼ö ¾ø´Â ¹®Á¦´Â ¾øÁö..Å©Å©´\n");
									printf("MON = 3 \n TUE =5 \n WED =4 \n THU = ?\n\n");
									printf("EZÇÏ³ë\n");
									break;
								case 2:
									printf("\nÄ¡¿ì±â ±ÍÂú´Ù. ±×³É µÎÀÚ.\n\n");
									break;
							default:
								printf("\n°áÁ¤À» ¸øÇß´Ù. µ¹¾Æ°¡ÀÚ.\n\n");
								break;
							}
							break;
						case 2:
							printf("\n¿ÍÅ¸½Ã°¡ Æ¯º°È÷¡º»ıÁ¸¡»½ÃÄÑÁÖµµ·Ï ÇÏÁö...\n\n");
							break;
						default:
							printf("\n°áÁ¤À» ¸øÇß´Ù. µ¹¾Æ°¡ÀÚ.\n\n");
							break;
					}	
				}
				system("pause");
				break;		
			case 3:
				system("cls");
				printf("[¿ø·ë]-[Ä§´ë]-[ÀÌºÒ]\n\n");
				printf("\nº£°³¿¡¼­´Â Æ¯ÀÌÇÑ Á¡ÀÌ º¸ÀÌÁö ¾Ê´Â´Ù.\n\n");
				printf("1. ÀÌºÒ »çÀÌ¸¦ µÚÁø´Ù\n");
				printf("2. ÀÌºÒÀ» Âõ¾î¹ö¸°´Ù\n");
				printf(">> ");
				scanf("%d", &menu);
				
				switch(menu) {
					case 1:
						if(isFindGoldKey) {
							printf("\n¿­¼è¸»°í ´Ù¸¥°ÍÀº º¸ÀÌÁö ¾Ê´Â´Ù .\n\n");
						} else {
							isFindGoldKey = TRUE;	//±İ»ö ¿­¼è È¹µæ 
							printf("\nÀÌºÒ ¼Ó¿¡¼­ ¿­¼èÇÏ³ª¸¦ ¹ß°ßÇß´Ù. ¾îµğ¿¡ ¾²´Â°ÅÁö?\n\n");
						}
						break;
					case 2:
						printf("\n³»°¡ ´©¿ö¾ß ÇÏ´Ï±î ³»ºñµÎÀÚ..\n\n");
						break;
					default:
						printf("\n¾Æ¸ô¶û. µ¹¾Æ°¡ÀÚ.\n\n");
						break;
						
				}
				system("pause");
				break;
			case 0:
				return;
			default:
				printf("# ERROR # ÀÀ¾Æ´Ï¾ß\n\n");
				system("pause");
		}
	}
}		

void fridge(){//3. ³ÃÀå°í
	int menu;
	
	while(1) {
		system("cls");
		printf("[ºñ¹öÀÇ¹æ]-[³ÃÀå°í ]\n\n");
		printf("LG ½Å»ó ³ÃÀå°í°¡ ¹æÇÑÄÒ¿¡ ÀÖ´Ù ¹¹°¡ÀÖ´ÂÁö º¼±î³¶.\n");
		printf("À½½Ä µÚÁö°Ô ¸¹³ß.\n\n");
		printf("1. LPG ¸¦ »ìÆìº»´Ù\n");
		printf("2. ÇØ¹°ÅÁÀ»  »ìÆìº»´Ù\n");
		printf("3. »ç°ú¸¦ »ìÆìº»´Ù\n");
		printf("4. ´ºÆ®¸®¾Æ¾Õ´Ù¸®¸¦ »ìÆìº»´Ù\n");
		printf("5. ´ß¹ßÀ» »ìÆìº»´Ù\n");
		printf("0. µ¹¾Æ°¡±â\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n\n");
				printf("\n ÀÌ°Ô ¿Ö ¿©±â ÀÖ´Â°ÅÁö ¼öÇöÀÌ ÁıÀÎ°¡?\n\n");
				break;
			case 2:
				printf("\n ¹°ºñ¸°³»°¡ ½ÉÇÏ°Ô³­´Ù »óÇÑ°Ç°¡?..\n\n");
				break;
			case 3:
				printf("\n¹ú·¹°¡ ±â¾î´Ù´Ñ´Ù »óÇ¥¸¦º¸´Ï PALDOCOMPANY ¶ó°í ½áÀÖ´Ù..\n\n");
				break;
			case 4:
				printf("\n´Ù2ºùÀ» ÇÏ·Á´Â ±×ÀÇ ÀÇÁö°¡ º¸ÀÎ´Ù..\n\n");
				break;
			case 5:
				printf("\n »óÇ¥¸¸ ÂîÂî´ß¹ßÀÌ°í ÂŞÂŞ´ß¹ßÀÌ¿´´Ù.\n¾ó¸¥ ³ª°¡¼­ Âî´ßÀ» ¸Ô¾î¾ß°Ú¾î!\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n qudtls ¤»¤»\n\n");
				break;
		}
		system("pause");
	}
}	

void safebox(){//4.Àå½Ç 
	int menu;
	
	while(1) {
		system("cls");
		printf("[ºñ¹öÀÇ ¹æ]-[È­Àå½Ç]\n");
		printf("¹°ºñ¸°³»°¡ ³ª´Â È­Àå½ÇÀÌ´Ù.\n\n");
		printf("1. È­Àå½Ç ¹®À» ¿¬´Ù\n");
		printf("2. È­Àå½Ç ¹®À» ºÎ¼ø´Ù\n");
		printf("3. È­Àå½Ç ¹®À» »ìÆìº»´Ù\n");
		printf("0. µ¹¾Æ°¡±â\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isOpenSafebox) {
					printf("\nÀÀ ÀÌ¹Ì ¿­¾ú¾î ¤»¤» ±î¸Ô¾úÀ¸¸é ´Ù½ÃÇÏ¼À ¤»¤».\n\n");
					break; 
				}
				if(isFindGoldKey && isFindSilverKey) {
					isFindMagnifyingGlass = TRUE;	//È­Àå½Ç ½Àµæ
					isOpenSafebox = TRUE;	//È­Àå½Ç ¿­¾úÀ½ 
					printf("\nÈ­Àå½Ç ¼¼¸é´ë¿¡ ¸Ş¸ğÀåÀÌ ÀÖ´Ù\n");	
					printf("¸Ş¸ğÁö¿¡´Â Å« ±Û¾¾·Î ±ÛÀÌ ÀûÇôÀÖ´Ù.\n\n");
					printf("'ÇÏÃ÷³×¹ÌÄíÀÇ ³ªÀÌ´Â?.\n¤»¤»°³½±³×\n");
					printf("»¡¸® Ç®°í Âî´ß ¸ÔÀ¸·¯ °¡¾ßÂ¡'\n\n");
					printf("ºÎÈ÷ÆRºÎÈ÷ÆR ÈÄÇìÇìÂm\n\n");					
				} else {
					printf("\nÈ­Àå½Ç¿¡ ¿­¼è°¡ ¿Ö 2°³³ª ÇÊ¿äÇÏ³Ä°í!!.\n\n");
				}
				break;
			case 2:
				printf("\n¡ºÆÄ±«¡»ÇØ¾ß°Ú±º\n\n");
				printf("\n Å©½î!!! ¹º³ğ¿¡ ÁıÀÌ ÀüºÎ´Ù Ã¶·Î ¸¸µé¾ú¾î\n\n");
				break;
			case 3:
				printf("\n¾Æ´Ï ¹ºµ¥ È­Àå½Ç¿¡ ¿­¼è±¸¸ÛÀÌ µÎ°³ÀÓ?\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n¶È¹Ù·ÎÁ» ½á¶ó ¼Õ°¡¶ô ¹®Á¦ÀÖÀ½? \n\n");
				break;
		}
		system("pause");
	}	
}	

void closet(){//5. ¿ÊÀå
	int menu;
	
	while(1) {
		system("cls");
		printf("[ºñ¹öÀÇ ¹æ]-[¿ÊÀå]\n\n");
		printf("¹æ ÇÑÂÊÀ» °¡µæ Ã¤¿ï Á¤µµÀÇ Å« ¿ÊÀåÀÌ´Ù.\n\n");
		printf("1. ¼öÇöÀÌ ¿ÊÀ» »ìÆìº»´Ù\n");
		printf("2. µ¿ÇöÀÌ ¿ÊÀ» »ìÆìº»´Ù\n");
		printf("3. ¼®ÇöÀÌ ¿ÊÀ» »ìÆìº»´Ù\n");
		printf("4. ¼®ÁøÀÌ ¿ÊÀ» »ìÆìº»´Ù\n");
		printf("5. ¿ÊÀåÀ» ºÎ¼ø´Ù\n");
		printf("0. µ¹¾Æ°¡±â\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindSilverKey) {
					printf("\n ¼öÇöÀÌ ¿Ê¿¡´Â ´õÀÌ»ó Ã£À»°Ô ¾ø¾îº¸ÀÎ´Ù ¾µ¸ğ¾ø´Â³ğ.\n\n");
				} else {
					isFindSilverKey = TRUE;		//Àº»ö ¿­¼è Ã£À½ 
					printf("\n¼öÇöÀÌ ¿Ê ÁÖ¸Ó´Ï¿¡ Àº»ö¿­¼è¿Í LPG¸íÇÔÀÌ ÀÖ´Ù.\n\n");
				}
				break;
			case 2:
				printf("\nµ¿ÇöÀÌ ¿Ê»çÀÌ¿¡ ¸Ş¸ğÁö°¡ µé¾îÀÖ´Ù\n\n");
				printf("\n 9 + 3 = 12 \n 5 + 10 = 3 \n 7 + 9= 4 \n 15 + 6 = ???\n\n");
				printf("°³½±³ë¤»");
				break;
			case 3:
				printf("\n¼®ÇöÀÌ ¿Ê¿¡´Â ÂîÂî´ß¹ß ¸íÇÔÀÌ µé¾îÀÖ´Ù.\n\n");
				break; 
			case 4:
				printf("\n¼®ÁøÀÌ ¿Ê¿¡´Â ½âÀº »ç°ú¿Í ÆÈµµÃ»°ú ¸íÇÔÀÌ µé¾îÀÖ´Ù.\n\n");
				break; 
			case 5:
				printf("\nÈÄÈÄÈÄ ¡º¿ÊÀå¡»ÀÌ¶ó...\nºÎ½¤ ¹ö·ÁÁêÁö..\nÅ©½î!!!!!!!!!!!\nÃ¶Á¦¿ÊÀåÀÎ°É ±î¸Ô¾î ¹ö·È´Ù..¶ö±î?\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n¾ß·¹¾ß·¹..¼Õ³ª¹ÚÇÏ³ª..\n\n");
				break;
		}
		system("pause");
	}	
}	

void door(){//6. ÃâÀÔ¹® 
	int menu;
	
	while(1) {
		system("cls");
		printf("[ºñ¹öÀÇ¹æ]-[Å»Ãâ±¸]\n\n");
		printf("¿ÀÀ× ¹®ÀÌ ¿©±âÀÖ¾ú³ß.\n");
		printf("¹® ¾Õ¿¡´Â È­ÀÌÆ®º¸µå¿¡ ±Û±Í°¡ ½áÀÖ´Ù.\n\n");
		
		printf("1. È­ÀÌÆ®º¸µå¸¦ »ìÆìº»´Ù\n");
		printf("2. ºñ¹Ğ¹øÈ£¸¦ ÀÔ·ÂÇÑ´Ù\n");
		printf("0. µ¹¾Æ°¡±â\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\nÈ­ÀÌÆ®º¸µå¿¡´Â °£´ÜÇÏ°Ô ¸îÁÙ½áÀÖ´Ù?\n\n");
				printf("¹æ¿¡ÀÖ´Â ÈùÆ® ¿ä¼Ò¸¦ ¸ğ¾Æ ºñ¹Ğ¹øÈ£¸¦ ÀÔ·ÂÇØ Å»ÃâÇÏ¶ó.\n\n");
				printf("±×·¯°Ô ¿Ö »çÁø Âï¾î°¡Áö°í Ã³ ÀâÇô¿È¤»¤»\n");
				break;
			case 2:
				door_password();
				break;
			case 0:
				return;
			default:
				printf("\nÀÀ ¾Æ´Ï¾ß ´Ù½ÃÇØ ¤»¤»\n\n");
				break;
		}
		system("pause");
	}	
}	

void door_password() {
	char pass[5] = "6169", temp[5];
	
	system("cls");
	printf("\n\n      [ PASSWORD ]\n\n");
	printf(">> ");
	scanf("%s", &temp);
	
	if(!strcmp(pass, temp)) {
		system("cls");
		printf("\n\n¾Æ¤»¤» µåµğ¾î ³ª¿Ô³× ¤»¤».\n\n");
		printf("¾Æ ¹è µÚÁö°Ô °íÇÁ³×.\n");
		printf("¾Æ ±×³ªÀú³ª ¿©±â ¾îµğÁö ¤»¤»\n");
		printf("¾Æ¸ô¶û Áı°¡¼­ Âî´ßÀÌ³ª ¸Ô¾î¾ßÁö.\n\n");
		printf("±× ÀÌÈÄ ÁÖÀÎ°øÀº ¿ì¿©°îÀı ³¡¿¡ Áı¿¡ µ¹¾Æ°¡ »óÇÑ Âî´ßÀ» º¸°í ºĞ³ëÇÏ¿´°í..\n\n");
		printf("±× ´ÙÀ½..");
		printf("#1.SAD ENDING");
		system("pause");
		exit(0);
	} else {
		printf("\n\nºñ¹Ğ¹øÈ£ ´©°¡¸ğ¸§ ¤»¤» ¾Æ¤»¤» ³Ê¸¸ ¸ğ¸§ ¤»¤»\n\n");
		return;	
	}
}

