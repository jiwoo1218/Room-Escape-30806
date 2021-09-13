/*
개발자: 박지우, 윤민혁, 정민태
개발일: 2021.09.07
문의: p0312181@naver.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TRUE 1
#define FALSE 0

void intro();
void room();
void frame();	//1. 액자
void bed();		//2. 침대 
void fridge();	//3. 수정중 
void safebox();	//4. 수정중  
void closet();	//5. 수정중 
void door();	//6. 수정중 
void door_password();

int isBrokenFrame = FALSE;	//액자 파손여부 
int isBrokenBed = FALSE;	//침대 파손여부 

int isFindMagnifyingGlass = FALSE;	//돋보기 습득여부 
int isFindGoldKey = FALSE;		//금색 열쇠 획득 여부 
int isFindSilverKey = FALSE; 	//은색 열쇠 획득 여부 

int isOpenSafebox = FALSE;		//금고 오픈 여부 

int main() {
	int menu;
	
	while(1) {
		printf("비버의 방\n\n");
		printf("1. 게임 시작\n");
		printf("0. 응 안해\n");
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
				printf("입력 오류\n\n");
				break;
		}
	}
	
}

void intro() {
	system("cls");
	printf("\n\n");
	printf("오늘은 소꿉친구 미란이와 놀이공원에 가는 날이다.\n\n");
	Sleep(1500);
	printf("놀이공원 화장실 가는 골목에서.\n");
	Sleep(2500);
	printf("검은 조직에 밀거래 현장을 발견하게 되고\n");
	Sleep(1500);
	printf("사진을 찍고 도망가려던 찰나에 뒤통수를 맞았당\n\n");
	Sleep(2500);
	printf("눈을 떠보니 낯선 방안에 들어와있다..\n");
	Sleep(1500);
	printf("천장에는 비버사진이 도배되어있다..\n\n");
	Sleep(1500);
	printf("여긴 어디지..? 이곳에서 탈출해야된다..\n\n");
	Sleep(1500);
	printf("집에는 찌찌닭발이 날 기다리고 있어!.\n\n");
	Sleep(1500);
	system("pause");
}

void room() {
	int menu;
	
	while(1) {
		system("cls");	
		printf("[비버의 방]\n\n");
		printf("방 안에서 할 수 있는 것들을 찾아보자.\n\n");
		printf("1. 책상    2.라꾸라꾸침대    3. 냉장고\n");
		printf("4. 화장실    5. 옷장    6. 탈출구\n");
			
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isBrokenFrame) {
					printf("\n침대를 부서버렸다. 더 이상 찾을 수 없다.\n");
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
				printf("\n# ERROR # 입력값 오류\n");
				system("pause");
		}
	}
	
}

void frame(){//1.  책상 
	int menu;
	
	while(1) {
		system("cls");
		printf("[비버의 방]-[책상]\n\n");
		printf("방안에 큰책상이 있다.\n\n");
		printf("1. 책상을 살펴본다\n");
		printf("2. 책상을 부순다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindMagnifyingGlass) {
				} else {
					printf("\n책상에는 별거없는거 같다 .\n\n");
				}
				break;
			case 2:
				isBrokenFrame = TRUE;
				printf("\n 책상. 파괴한다..\n");
				printf("크쏘!!! 철제 책상이라니!!\n\n");
				printf("좀더 레벨업을 해야될거 같다.\n\n");
				system("pause");
				return;
			case 0:
				return;
			default:
				printf("\n응 틀렸엉 다시 써1\n\n");
				break;
		}
		system("pause");
	}	
}	

void bed() {//2. 침대 
	int menu;
	
	while(1) {
		system("cls");
		printf("[원룸]-[라꾸라꾸침대]\n\n");
		printf("구석에 라꾸라꾸침대가 있다.\n\n");
		printf("1. 라꾸라꾸침대 밑을 살펴본다\n");
		printf("2. 라꾸라꾸침대를 살펴본다\n");
		printf("3. 이불을 살펴본다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isBrokenBed)  {
					printf("\n라꾸라꾸 침대는 파괴되었다..\n\n");
				} else {
					printf("\n먼지가 가득하다 어우더러웡.\n");	
				}
				system("pause");
				break;
			case 2:
				if(isBrokenBed) {
					printf("\n침대가 부서져서 더 이상 찾을 수 없다.\n\n");
				} else {
					system("cls");
					printf("[원룸]-[침대]-[침대]\n\n");
					printf("\n그저 평범한 라꾸라꾸 침대처럼 보인다.\n\n");
					printf("1. 침대를『파괴』한다.\n");
					printf("2. 침대를『살려』준다.\n");
					printf(">> ");
					scanf("%d", &menu);
					
					switch(menu) {
						case 1:
							isBrokenBed = TRUE;	//침대 부서짐 
							printf("\n# 침대가『파괴』되었다. \n\n");
							printf("1. 잔해를 뒤진다.\n");
							printf("2. 가만히 둔다.\n");
							printf(">> ");
							scanf("%d", &menu);
							
							switch(menu) {
								case 1: 
									printf("\n파란색 메모장이 있다. 비밀번호 인건가?\n");
									printf("내 수준에 풀수 없는 문제는 없지..크크\n");
									printf("MON = 3 \n TUE =5 \n WED =4 \n THU = ?\n\n");
									printf("EZ하노\n");
									break;
								case 2:
									printf("\n치우기 귀찮다. 그냥 두자.\n\n");
									break;
							default:
								printf("\n결정을 못했다. 돌아가자.\n\n");
								break;
							}
							break;
						case 2:
							printf("\n와타시가 특별히『생존』시켜주도록 하지...\n\n");
							break;
						default:
							printf("\n결정을 못했다. 돌아가자.\n\n");
							break;
					}	
				}
				system("pause");
				break;		
			case 3:
				system("cls");
				printf("[원룸]-[침대]-[이불]\n\n");
				printf("\n베개에서는 특이한 점이 보이지 않는다.\n\n");
				printf("1. 이불 사이를 뒤진다\n");
				printf("2. 이불을 찢어버린다\n");
				printf(">> ");
				scanf("%d", &menu);
				
				switch(menu) {
					case 1:
						if(isFindGoldKey) {
							printf("\n열쇠말고 다른것은 보이지 않는다 .\n\n");
						} else {
							isFindGoldKey = TRUE;	//금색 열쇠 획득 
							printf("\n이불 속에서 열쇠하나를 발견했다. 어디에 쓰는거지?\n\n");
						}
						break;
					case 2:
						printf("\n내가 누워야 하니까 내비두자..\n\n");
						break;
					default:
						printf("\n아몰랑. 돌아가자.\n\n");
						break;
						
				}
				system("pause");
				break;
			case 0:
				return;
			default:
				printf("# ERROR # 응아니야\n\n");
				system("pause");
		}
	}
}		

void fridge(){//3. 냉장고
	int menu;
	
	while(1) {
		system("cls");
		printf("[비버의방]-[냉장고 ]\n\n");
		printf("LG 신상 냉장고가 방한켠에 있다 뭐가있는지 볼까낭.\n");
		printf("음식 뒤지게 많넹.\n\n");
		printf("1. LPG 를 살펴본다\n");
		printf("2. 해물탕을  살펴본다\n");
		printf("3. 사과를 살펴본다\n");
		printf("4. 뉴트리아앞다리를 살펴본다\n");
		printf("5. 닭발을 살펴본다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n\n");
				printf("\n 이게 왜 여기 있는거지 수현이 집인가?\n\n");
				break;
			case 2:
				printf("\n 물비린내가 심하게난다 상한건가?..\n\n");
				break;
			case 3:
				printf("\n벌레가 기어다닌다 상표를보니 PALDOCOMPANY 라고 써있다..\n\n");
				break;
			case 4:
				printf("\n다2빙을 하려는 그의 의지가 보인다..\n\n");
				break;
			case 5:
				printf("\n 상표만 찌찌닭발이고 쭈쭈닭발이였다.\n얼른 나가서 찌닭을 먹어야겠어!\n\n");
				break;
			case 0:
				return;
			default:
				printf("\n qudtls ㅋㅋ\n\n");
				break;
		}
		system("pause");
	}
}	

void safebox(){//4.장실 
	int menu;
	
	while(1) {
		system("cls");
		printf("[비버의 방]-[화장실]\n");
		printf("물비린내가 나는 화장실이다.\n\n");
		printf("1. 화장실 문을 연다\n");
		printf("2. 화장실 문을 부순다\n");
		printf("3. 화장실 문을 살펴본다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isOpenSafebox) {
					printf("\n응 이미 열었어 ㅋㅋ 까먹었으면 다시하셈 ㅋㅋ.\n\n");
					break; 
				}
				if(isFindGoldKey && isFindSilverKey) {
					isFindMagnifyingGlass = TRUE;	//화장실 습득
					isOpenSafebox = TRUE;	//화장실 열었음 
					printf("\n화장실 세면대에 메모장이 있다\n");	
					printf("메모지에는 큰 글씨로 글이 적혀있다.\n\n");
					printf("'하츠네미쿠의 나이는?.\nㅋㅋ개쉽네\n");
					printf("빨리 풀고 찌닭 먹으러 가야징'\n\n");
					printf("부히R부히R 후헤헤m\n\n");					
				} else {
					printf("\n화장실에 열쇠가 왜 2개나 필요하냐고!!.\n\n");
				}
				break;
			case 2:
				printf("\n『파괴』해야겠군\n\n");
				printf("\n 크쏘!!! 뭔놈에 집이 전부다 철로 만들었어\n\n");
				break;
			case 3:
				printf("\n아니 뭔데 화장실에 열쇠구멍이 두개임?\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n똑바로좀 써라 손가락 문제있음? \n\n");
				break;
		}
		system("pause");
	}	
}	

void closet(){//5. 옷장
	int menu;
	
	while(1) {
		system("cls");
		printf("[비버의 방]-[옷장]\n\n");
		printf("방 한쪽을 가득 채울 정도의 큰 옷장이다.\n\n");
		printf("1. 수현이 옷을 살펴본다\n");
		printf("2. 동현이 옷을 살펴본다\n");
		printf("3. 석현이 옷을 살펴본다\n");
		printf("4. 석진이 옷을 살펴본다\n");
		printf("5. 옷장을 부순다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				if(isFindSilverKey) {
					printf("\n 수현이 옷에는 더이상 찾을게 없어보인다 쓸모없는놈.\n\n");
				} else {
					isFindSilverKey = TRUE;		//은색 열쇠 찾음 
					printf("\n수현이 옷 주머니에 은색열쇠와 LPG명함이 있다.\n\n");
				}
				break;
			case 2:
				printf("\n동현이 옷사이에 메모지가 들어있다\n\n");
				printf("\n 9 + 3 = 12 \n 5 + 10 = 3 \n 7 + 9= 4 \n 15 + 6 = ???\n\n");
				printf("개쉽노ㅋ");
				break;
			case 3:
				printf("\n석현이 옷에는 찌찌닭발 명함이 들어있다.\n\n");
				break; 
			case 4:
				printf("\n석진이 옷에는 썩은 사과와 팔도청과 명함이 들어있다.\n\n");
				break; 
			case 5:
				printf("\n후후후 『옷장』이라...\n부숴 버려쥬지..\n크쏘!!!!!!!!!!!\n철제옷장인걸 까먹어 버렸다..랄까?\n\n");
				break; 
			case 0:
				return;
			default:
				printf("\n야레야레..손나박하나..\n\n");
				break;
		}
		system("pause");
	}	
}	

void door(){//6. 출입문 
	int menu;
	
	while(1) {
		system("cls");
		printf("[비버의방]-[탈출구]\n\n");
		printf("오잉 문이 여기있었넹.\n");
		printf("문 앞에는 화이트보드에 글귀가 써있다.\n\n");
		
		printf("1. 화이트보드를 살펴본다\n");
		printf("2. 비밀번호를 입력한다\n");
		printf("0. 돌아가기\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch(menu) {
			case 1:
				printf("\n화이트보드에는 간단하게 몇줄써있다?\n\n");
				printf("방에있는 힌트 요소를 모아 비밀번호를 입력해 탈출하라.\n\n");
				printf("그러게 왜 사진 찍어가지고 처 잡혀옴ㅋㅋ\n");
				break;
			case 2:
				door_password();
				break;
			case 0:
				return;
			default:
				printf("\n응 아니야 다시해 ㅋㅋ\n\n");
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
		printf("\n\n아ㅋㅋ 드디어 나왔네 ㅋㅋ.\n\n");
		printf("아 배 뒤지게 고프네.\n");
		printf("아 그나저나 여기 어디지 ㅋㅋ\n");
		printf("아몰랑 집가서 찌닭이나 먹어야지.\n\n");
		printf("그 이후 주인공은 우여곡절 끝에 집에 돌아가 상한 찌닭을 보고 분노하였고..\n\n");
		printf("그 다음..");
		printf("#1.SAD ENDING");
		system("pause");
		exit(0);
	} else {
		printf("\n\n비밀번호 누가모름 ㅋㅋ 아ㅋㅋ 너만 모름 ㅋㅋ\n\n");
		return;	
	}
}

