#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS


void art(int num) {
	if (num == 0) {		//제목
		printf("\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("                     :-    -~                 -=,     \n");
		printf("                   .!   . -$-                  ~:  \n");
		printf("                   .!  := ::       #           ~:\n");
		printf("                   .!  := .!,  -~ = *  @$$#==  ~:  \n");
		printf("                    .$;*=  -;;;;;;;;-   #$   ;:;,   \n");
		printf("                      @-!  ===   ===    ;     ==     \n");
		printf("                      @ -.                   *:  \n");
		printf("                      .;;#,             ~;;=#.      \n");
		printf("                         .*$:         :*~~~~~~;  \n");
		printf("                        .@  ;;;;;;;.*$,       !* \n");
		printf("                        ~@=--==;      ,-      =$! \n");
		printf("                   @@@@@@@@@@@@@@@@@@@~ #       ;.\n");
		printf("                   $                    #        !~   \n");
		printf("                   $                    ~:        ~:   \n");
		printf("                   $                     =  ~:::,  =  \n");
		printf("-------------------------------------------------------------------------------\n");
		printf("                         [김상명의 중간고사]\n");
		printf("\n");
	}
	else if (num == 1) {		//교양1 대체과제 노트북
		printf("\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("                r-----------ㄱ\n");
		printf("                |r---------ㄱ|\n");
		printf("                ||__________||\n");
		printf("                L____________|\n");
		printf("               /++++++++++++/\n");
		printf("              /++++++++++++/\n");
		printf("             /___//////___/\n");
		printf("-------------------------------------------------------------------------------\n");
	}
	else if (num == 2) {	//교양2 필기 시험지
		printf("\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("            r------------ㄱ\n");
		printf("            | ㅁ      000 |\n");
		printf("            | ___________ |\n");
		printf("            | ___________ |\n");
		printf("            | ___________ |\n");
		printf("            | ___________ |\n");
		printf("            | ___________ |\n");
		printf("            ㄴ____________|\n");
		printf("-------------------------------------------------------------------------------\n");
	}
	else if (num == 3) {	//전공1 실기 모니터
		printf("\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("          r-----------------ㄱ\n");
		printf("          |r---------------ㄱ|\n");
		printf("          ||ㅁㅁ            ||\n");
		printf("          ||ㅁ              ||\n");
		printf("          ||________________||\n");
		printf("          ㄴ_________________|\n");
		printf("                 _| |_\n");
		printf("                ㄴ____|\n");
		printf("-------------------------------------------------------------------------------\n");
	}
	else if (num == 4) {	//보스전공2 필기
		printf("\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("          r----------ㄱ       \n");
		printf("          | cc     00 |-----ㄱ\n");
		printf("          | _________ |----ㄱ|\n");
		printf("          | _________ |     ||\n");
		printf("          | _________ |_____||\n");
		printf("          | _________ |______|\n");
		printf("          ㄴ__________| |_    \n");
		printf("                    ㄴ____|   \n");
		printf("-------------------------------------------------------------------------------\n");
	}
	else if (num == 5) {	//보스전공2 실기
		printf("\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("          r-----------------ㄱ\n");
		printf("          |r---------------ㄱ|\n");
		printf("          ||cccc            ||\n");
		printf("          ||cc              ||\n");
		printf("          ||________________||\n");
		printf("          ㄴ_________________|\n");
		printf("                 _| |_\n");
		printf("                ㄴ____|\n");
		printf("-------------------------------------------------------------------------------\n");
	}
}

void start() {		//시작설명
	system("cls");
	printf("-------------------------------------------------------------------------------\n");
	Sleep(1000);
	printf("대학에 들어와 첫 중간고사를 치르게 된 1학년 김상명.\n");
	Sleep(1000);
	printf("이제껏 갈고 닦은 기술들을 이용해 시험을 헤쳐 나가기로 한다.\n");
	Sleep(1000);
	printf("시험 과목은 교양 두 개, 전공 두 개로 총 4가지.\n");
	Sleep(1000);
	printf("종류는 대체과제, 필기, 실기 등 다양하다.\n");
	Sleep(1000);
	printf("김상명은 모든 과목에서 좋은 성적을 얻을 수 있을까?\n");
	Sleep(1000);
	system("pause");
	system("cls");
}


void statTable(int userSkillBrain, int userSkillConfidence, int userSkillMoney, int statPoint) {	//스탯표출력
	printf("[상명대 1학년 김상명]\n");
	printf("체력: 100 정신력: 50\n");
	printf("지능   ");
	for (int i = 0; i < userSkillBrain; i++) printf("■");
	for (int i = 0; i < 5 - userSkillBrain; i++) printf("□");
	printf("\n");
	printf("자신감 ");
	for (int i = 0; i < userSkillConfidence; i++) printf("■");
	for (int i = 0; i < 5 - userSkillConfidence; i++) printf("□");
	printf("\n");
	printf("재력   ");
	for (int i = 0; i < userSkillMoney; i++) printf("■");
	for (int i = 0; i < 5 - userSkillMoney; i++) printf("□");
	printf("\n");
	printf("스탯 포인트: %d", statPoint);
	printf("\n\n");
}

void statSetting(int *statPoint, int *userSkillBrain, int *userSkillConfidence, int *userSkillMoney, int reset) {
	char answer;

	if (reset == 1) {	//재설정하는거라면
		system("cls");
		statTable(*userSkillBrain, *userSkillConfidence, *userSkillMoney, *statPoint);
		printf("스탯 포인트가 추가 지급되었습니다.\n");
		Sleep(1000);
		printf("스탯을 재설정합니다.\n");
		Sleep(1000);
		*statPoint = *statPoint + *userSkillBrain + *userSkillConfidence + *userSkillMoney;
		*userSkillBrain = 0, * userSkillConfidence = 0, * userSkillMoney = 0;
		system("pause");
	}

	while (1) {		//스탯 확정하기 전까지 반복
		while (1) {	//가진 스탯포인트 안에서 입력할때까지 반복
			system("cls");
			statTable(*userSkillBrain, *userSkillConfidence, *userSkillMoney, *statPoint);
			printf("김상명의 스탯을 입력하세요. 지능, 자신감, 재력에 0~5의 스탯 포인트를 투자할 수 있습니다.\n\n");
			do {	//지능스탯입력
				printf("지능(0 ~ 5): ");
				scanf_s("%d", userSkillBrain);
				if (*userSkillBrain < 0 || *userSkillBrain > 5) printf("0부터 5 사이의 수를 입력해주세요.\n");
			} while (*userSkillBrain < 0 || 5 < *userSkillBrain);
			printf("\n");
			*statPoint -= *userSkillBrain;

			system("cls");
			statTable(*userSkillBrain, *userSkillConfidence, *userSkillMoney, *statPoint);
			printf("김상명의 스탯을 입력하세요. 지능, 자신감, 재력에 0~5의 스탯 포인트를 투자할 수 있습니다.\n\n");
			do {	//자신감스탯입력
				printf("자신감(0 ~ 5): ");
				scanf_s("%d", userSkillConfidence);
				if (*userSkillConfidence < 0 || *userSkillConfidence > 5) printf("0부터 5 사이의 수를 입력해주세요.\n");
			} while (*userSkillConfidence < 0 || 5 < *userSkillConfidence);
			printf("\n");
			*statPoint -= *userSkillConfidence;
			if (*statPoint < 0) {
				printf("스탯 포인트가 %d점 부족합니다. 다시 입력해주세요\n\n", *statPoint * (-1)); //스탯포인트가 부족할때
				system("pause");
				*statPoint = *statPoint + *userSkillBrain + *userSkillConfidence + *userSkillMoney;	//사용스탯 다시 지급
				*userSkillBrain = 0, * userSkillConfidence = 0, * userSkillMoney = 0;
				continue;
			}

			system("cls");
			statTable(*userSkillBrain, *userSkillConfidence, *userSkillMoney, *statPoint);
			printf("김상명의 스탯을 입력하세요. 지능, 자신감, 재력에 0~5의 스탯 포인트를 투자할 수 있습니다.\n\n");
			do {	//재력스탯입력
				printf("재력(0 ~ 5): ");
				scanf_s("%d", userSkillMoney);
				if (*userSkillMoney < 0 || *userSkillMoney > 5) printf("0부터 5 사이의 수를 입력해주세요.\n");
			} while (*userSkillMoney < 0 || 5 < *userSkillMoney);
			printf("\n");
			*statPoint -= *userSkillMoney;
			if (*statPoint < 0) {
				printf("스탯 포인트가 %d점 부족합니다. 다시 입력해주세요\n\n", *statPoint * (-1)); //스탯포인트가 부족할때
				system("pause");
				*statPoint = *statPoint + *userSkillBrain + *userSkillConfidence + *userSkillMoney;	//사용스탯 다시 지급
				*userSkillBrain = 0, * userSkillConfidence = 0, * userSkillMoney = 0;
			}
			else break;
		}
		system("cls");
		//스탯포인트 남거나 다썼을때 스탯표 출력
		statTable(*userSkillBrain, *userSkillConfidence, *userSkillMoney, *statPoint);
		do {
			scanf_s("%c", &answer, (unsigned int)sizeof(answer));
			printf("스탯 포인트 %d점이 남았습니다. 이대로 진행하시겠습니까? y/n\n", *statPoint); //진행확인
			scanf_s("%c", &answer, (unsigned int)sizeof(answer));
			if (answer != 'y' && answer != 'n') printf("다시 입력해주세요.\n");	//잘못입력
		} while (answer != 'y' && answer != 'n');	//y나 n 입력까지 반복
		if (answer == 'y') break;
		else if(answer == 'n') {
			*statPoint = *statPoint + *userSkillBrain + *userSkillConfidence + *userSkillMoney;	//사용스탯 다시 지급
			*userSkillBrain = 0, * userSkillConfidence = 0, * userSkillMoney = 0;
		}
		system("cls");
	}
}


void fightReady(int num, int userSkillBrain, int userSkillConfidence, int userSkillMoney) {	//전투설명
	char* name[4] = { "필수교양", "일반교양", "전공1", "전공2" };
	char* type[4] = { "대체과제(에세이)", "필기시험", "실기시험", "필기+실기" };
	int enemyFullHP[4] = { 50, 75, 125, 200 };	//적체력

	system("cls");
	printf("-------------------------------------------------------------------------------\n");	//스탯입력완료
	Sleep(1000);
	printf("시험기간동안 열심히 준비를 한 김상명.\n");
	Sleep(1000);
	printf("%d의 지능, %d의 자신감, %d의 재력이 준비되었다.\n", userSkillBrain, userSkillConfidence, userSkillMoney);
	Sleep(1000);
	art(num);
	printf("\n");
	printf("	    [%s]\n", name[num-1]);
	printf("	    종류: %s\n", type[num-1]);
	printf("	    HP: %d\n\n", enemyFullHP[num-1]);
	printf("-------------------------------------------------------------------------------\n");
	Sleep(1000);
	if (num == 1) printf("첫 번째 과목은 필수교양... 대체과제로 영어 에세이를 작성해야 한다.\n");
	else if (num == 2) printf("두 번째 과목은 일반교양... 필기시험을 봐야 한다.\n");
	else if (num == 3) printf("세 번째 과목은 전공... 실기시험을 봐야 한다.\n");
	else if (num == 4) printf("드디어 마지막 과목인 전공이다... 필기시험과 실기시험을 둘 다 봐야 한다.\n");
	Sleep(1000);
	printf("최대한 빠르게 해치워해버리자.\n");
	Sleep(1000);
	printf("전투를 ");
	system("pause");
}


void fightScreen(int num, int enemyHP, int userHP, int userMP, int userSkillBrain, int userSkillConfidence, int userSkillMoney, int turn) { //이름, 스탯 표시 업데이트
	system("cls");
	art(num);
	char* name[5] = { "에세이", "필기시험", "실기시험", "필기+실기", "필기+실기"};	//적이름
	int enemyFullHP[5] = { 50, 75, 125, 200, 200 };	//적체력
	if (num==4) printf("[%s] HP %d/%d		[김상명] 체력 %d/100   정신력 %d/50\n", name[num - 1], enemyHP+100, enemyFullHP[num - 1], userHP, userMP);	//보스1페일경우 체력 100에끝나지만 200으로보이게
	else printf("[%s] HP %d/%d		[김상명] 체력 %d/100   정신력 %d/50\n", name[num - 1], enemyHP, enemyFullHP[num - 1], userHP, userMP);
	printf("턴: %d				지능: %d 자신감: %d 재력: %d\n", turn, userSkillBrain, userSkillConfidence, userSkillMoney);
	if (num==1) printf("공격력: 10 ~ 15			공격력: 5 ~ 10\n");
	else if (num == 2) printf("공격력: 15 ~ 20			공격력: 5 ~ 10\n");
	else printf("공격력: 20 ~ 25			공격력: 15 ~ 20\n");
	printf("-------------------------------------------------------------------------------\n");
}


int fight(int num, int userSkillBrain, int userSkillConfidence, int userSkillMoney, int* turn, int *userHP, int *userMP, int *enemyHP) {	//전투
	int tempTurn = *turn, tempUserMP = *userMP;	//보스 페이즈 바뀔때 턴수, hp, mp 넘겨줌
	int tempUserHP = *userHP, tempEnemyHP = *enemyHP;
	int enemyATT = 10;
	*userHP = 100, *userMP = 50;
	int result = 0, choice, skip = 0;
	char answer;
	char* name[5] = { "에세이", "필기시험", "실기시험", "필기시험", "실기시험"};	//적이름
	*turn = 1;

	if (num == 1) {				//전투번호에따른 적스탯
		*enemyHP = 50, enemyATT = 10;//10-15
	}
	else if (num == 2) {
		*enemyHP = 75, enemyATT = 15;//15-20
	}
	else if (num == 3) {
		*enemyHP = 125, enemyATT = 20;//20-25 
	}
	else if (num == 4) {
		*enemyHP = 100, enemyATT = 20;//20-25 
	}
	else if (num == 5) {
		*turn = tempTurn, *userHP = tempUserHP, *userMP = tempUserMP, *enemyHP = tempEnemyHP + 100, enemyATT = 20; //1페에서 값 받음, enemyATT 20-25 
	}

	srand(time(NULL));
	int random = 5 + rand() % 6;	//5 + 0~5

	if (num == 5) {	//보스2페 시작메시지
		*turn += 1;
		fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);
		printf("실기시험 공격을 시작합니다.\n");
		Sleep(1000);
		*userMP = 50;
		fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);
		printf("정신력을 회복합니다.\n");
		Sleep(1000);
		system("pause");
		system("cls");
	}
	while (1) {		//계속 반복하기   //전투시작
		do {
			fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);
			printf("공격(1), 스킬(2), 포기(3)\n무엇을 하시겠습니까? ");
			scanf_s("%d", &choice);
		} while (choice > 3 || choice < 1);

		if (choice == 1) {		//공격선택
			printf("공격을 선택했습니다.\n");
			if (num == 1 || num == 2) random = 5 + rand() % 6;	//전투 1, 2에서 5-10
			else random = 10 + rand() % 6;	//전투 3, 4, 5에서 15-20
			*enemyHP -= random;	//적에게 데미지
			if (*enemyHP < 0) {
				if(num != 4) *enemyHP = 0;	//hp 0이하일시 0으로, 보스1페제외
			}
			Sleep(1500);
			fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);	//업데이트
			printf("%s에게 %d의 데미지를 가했습니다.\n", name[num-1], random);
			Sleep(1500);
			if (*enemyHP <= 0) {		//적이 죽었다면 이김
				result = 1;		//승리
				printf("%s이(가) 쓰러졌습니다.\n", name[num-1]);
				system("pause");
				break;
			}
			printf("적이 공격합니다.\n");
			random = enemyATT + rand() % 6;	//기본공격
			*userHP -= random;		//플레이어에게 데미지
			if (*userHP < 0) *userHP = 0;		//hp 0이하일시 0으로
			Sleep(1500);
			fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);	//업데이트
			printf("김상명은 %d의 데미지를 받았습니다.\n", random);
			Sleep(1500);
			if (*userHP <= 0) {		//플레이어가 죽었다면 짐
				result = 2;		//패배
				printf("김상명이 쓰러졌습니다.\n");
				system("pause");
				break;
			}
			system("pause");
		}
		else if (choice == 2) {	//스킬선택
			printf("스킬을 선택했습니다.\n");
			Sleep(1500);
			do {
				system("cls");
				fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);
				printf("벼락치기(1), 오류 보고(2), 카페인 섭취(3)\n스킬을 선택하면 설명이 뜹니다.\n무엇을 하시겠습니까? ");
				scanf_s("%d", &choice);
			} while (choice < 1 || choice > 3);
			if (choice == 1) {		//벼락치기
				printf("스킬: [벼락치기]\n");
				printf("마감 기한이 얼마 남지 않아 [지능] 스탯에 따라 %d의 데미지를 가합니다.\n", userSkillBrain * 5 + 15);
				if (num == 2 || num == 4) printf("적의 [필기시험] 타입에 따라 1.5배의 데미지가 적용됩니다.\n");	//필기시험에는 1.5배
				do {
					scanf_s("%c", &answer, (unsigned int)sizeof(answer));
					printf("정신력을 35 소모하여 스킬 [벼락치기]를 사용하겠습니까? y/n\n");
					scanf_s("%c", &answer, (unsigned int)sizeof(answer));
					if (answer != 'y' && answer != 'n') printf("다시 선택해주세요. ");
				} while (answer != 'y' && answer != 'n');
				
				if (answer == 'y') {		//사용선택
					if (*userMP >= 35) {		//mp있음
						printf("스킬 [벼락치기]를 사용했습니다.\n");
						if (num == 2 || num == 4) *enemyHP -= floor((userSkillBrain * 5 + 15) * 1.5);	//필기시험에는 1.5배
						else *enemyHP -= userSkillBrain * 5 + 15;	//적에게 데미지 10~35
						*userMP -= 35;		//정신력 40 소모
						if (*enemyHP < 0) {
							if (num != 4) *enemyHP = 0;	//hp 0이하일시 0으로, 보스1페제외
						}
						Sleep(1500);
						fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);	//업데이트
						if (num == 2 || num == 4) printf("%s에게 %.f의 데미지를 가했습니다.\n", name[num - 1], floor((userSkillBrain * 5 + 15) * 1.5));
						else printf("%s에게 %d의 데미지를 가했습니다.\n", name[num - 1], userSkillBrain * 5 + 15);
						Sleep(1500);
						if (*enemyHP <= 0) {		//적이 죽었다면 이김
							result = 1;		//승리
							printf("%s이(가) 쓰러졌습니다.\n", name[num - 1]);
							system("pause");
							break;
						}
						printf("적이 공격합니다.\n");
						random = enemyATT + rand() % 6;
						*userHP -= random;		//플레이어에게 데미지
						if (*userHP < 0) *userHP = 0;		//hp 0이하일시 0으로
						Sleep(1500);
						fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);	//업데이트
						printf("김상명은 %d의 데미지를 받았습니다.\n", random);
						Sleep(1500);
						if (*userHP <= 0) {		//플레이어가 죽었다면 짐
							result = 2;		//패배
							printf("김상명이 쓰러졌습니다.\n");
							system("pause");
							break;
						}
						system("pause");
					}
					else {	//mp부족
						printf("정신력이 부족합니다.\n전투를 ");
						system("pause");
						skip = 1;
					}
				}
				else {		//스킬사용취소
					printf("전투를 ");
					system("pause");
					skip = 1;
				}
			}
			else if (choice == 2) {		//오류보고
				printf("스킬: [오류 보고]\n");
				printf("시험의 오류를 찾아 교수님께 이야기합니다.\n");
				printf("10~15의 데미지를 주는 동시에 1턴간 공격 피해를 받지 않습니다.\n");
				if (num == 3 || num == 5) printf("적의 [실기시험] 타입에 따라 1.5배의 데미지가 적용됩니다.\n");	//실기시험에는 1.5배
				printf("[자신감]에 따라 %d의 정신력을 소모합니다.\n", (90 - (userSkillConfidence) * 10) / 2);		//정신력 20~45 소모
				do {
					scanf_s("%c", &answer, (unsigned int)sizeof(answer));
					printf("정신력을 %d 소모하여 스킬 [오류 보고]를 사용하시겠습니까? y/n\n", (90 - (userSkillConfidence) * 10) / 2);
					scanf_s("%c", &answer, (unsigned int)sizeof(answer));
					if (answer != 'y' && answer != 'n') printf("다시 선택해주세요. ");
				} while (answer != 'y' && answer != 'n');
				if (answer == 'y') {		//사용선택
					if (*userMP >= (90 - (userSkillConfidence) * 10) / 2) {		//mp있음
						printf("스킬 [오류 보고]를 사용했습니다.\n");
						Sleep(1500);
						printf("김상명이 공격합니다.\n");
						*userMP -= (90 - (userSkillConfidence) * 10) / 2;		//정신력 20~45 소모
						random = 10 + rand() % 6;	//10-15
						if (num == 3 || num == 5) *enemyHP -= floor(random * 1.5);	//실기시험에는 1.5배
						else *enemyHP -= random;	//적에게 데미지
						if (*enemyHP < 0) {
							if (num != 4) *enemyHP = 0;	//hp 0이하일시 0으로, 보스1페제외
						}
						Sleep(1500);
						fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);	//업데이트
						if (num == 3 || num == 5) printf("%s에게 %.f의 데미지를 가했습니다.\n", name[num - 1], floor(random*1.5));
						else printf("%s에게 %d의 데미지를 가했습니다.\n", name[num - 1], random);
						Sleep(1500);
						if (*enemyHP <= 0) {		//적이 죽었다면 이김
							result = 1;		//승리
							printf("%s이(가) 쓰러졌습니다.\n", name[num - 1]);
							system("pause");
							break;
						}
						fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);	//업데이트
						printf("적이 공격합니다.\n");
						Sleep(1500);
						printf("스킬 [오류 보고]로 인해 데미지를 얻지 않았습니다.\n");
						Sleep(1500);
						system("pause");
					}
					else {	//mp부족
						printf("정신력이 부족합니다.\n전투를 ");
						system("pause");
						skip = 1;
					}
				}
				else {		//스킬사용취소
					printf("전투를 ");
					system("pause");
					skip = 1;
				}
			}
			else if (choice == 3) {		//카페인섭취
				printf("스킬: [카페인 섭취]\n");
				printf("집중을 위해 커피를 마십니다.\n");
				printf("[재력]에 따라 %d 만큼의 체력을 회복합니다.\n", (userSkillMoney + 6) * 5);
				if (num == 1) printf("적의 [대체과제] 타입에 따라 1.5배의 효과가 적용됩니다.\n");	//대체과제에는 1.5배
				do {
					scanf_s("%c", &answer, (unsigned int)sizeof(answer));
					printf("정신력을 15 소모하여 스킬 [카페인 섭취]를 사용하시겠습니까? y/n\n");
					scanf_s("%c", &answer, (unsigned int)sizeof(answer));
					if (answer != 'y' && answer != 'n') printf("다시 선택해주세요. ");
				} while (answer != 'y' && answer != 'n');
				if (answer == 'y') {		//사용선택
					if (*userMP >= 15) {
						printf("스킬 [카페인 섭취]를 사용했습니다.\n");
						*userMP -= 15;
						if (num == 1) *userHP += floor(((userSkillMoney + 6) * 5) * 1.5);	//대체과제에는 1.5배
						else *userHP += (userSkillMoney + 6) * 5;		//체력 30~55 회복
						if (*userHP > 100) *userHP = 100;
						Sleep(1500);
						fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);	//업데이트
						if (num == 1) printf("%.f의 체력을 회복했습니다.\n", floor(((userSkillMoney + 6) * 5)*1.5));
						else printf("%d의 체력을 회복했습니다.\n", (userSkillMoney + 3) * 5);
						Sleep(1500);
						printf("적이 공격합니다.\n");
						random = enemyATT + rand() % 6;
						*userHP -= random;		//플레이어에게 데미지
						if (*userHP < 0) *userHP = 0;		//hp 0이하일시 0으로
						Sleep(1500);
						fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);	//업데이트
						printf("김상명은 %d의 데미지를 받았습니다.\n", random);
						Sleep(1500);
						if (*userHP <= 0) {		//플레이어가 죽었다면 짐
							result = 2;		//패배
							printf("김상명이 쓰러졌습니다.\n");
							system("pause");
							break;
						}
						system("pause");
					}
					else {	//mp부족
						printf("정신력이 부족합니다.\n전투를 ");
						system("pause");
						skip = 1;
					}
				}
				else {		//스킬사용취소
					printf("전투를 ");
					system("pause");
					skip = 1;
				}
			}
		}
		else if (choice == 3) {	//포기선택
			do {
				scanf_s("%c", &answer, (unsigned int)sizeof(answer));
				printf("정말 포기하시겠습니까? 현 과목에서 F를 받게 됩니다. y/n\n");
				scanf_s("%c", &answer, (unsigned int)sizeof(answer));
				if (answer != 'y' && answer != 'n') printf("다시 선택하세요. ");
			} while (answer != 'y' && answer != 'n');
			if (answer == 'y') break;
			else {
				printf("전투를 ");
				system("pause");
				skip = 1;
			}
		}
		if (skip != 1) {
			system("cls");
			*turn += 1;
			fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);	//업데이트
			printf("턴이 종료되었습니다.\n");	//턴종료
			if (*userMP < 50) {
				*userMP += 5;	//턴종료마다 정신력MP5추가
				if (*userMP > 50) *userMP = 50;	//50넘으면 50으로
				Sleep(1000);
				fightScreen(num, *enemyHP, *userHP, *userMP, userSkillBrain, userSkillConfidence, userSkillMoney, *turn);	//업데이트
				printf("정신력이 5 회복되었습니다.\n");
			}
			Sleep(1000);
			system("pause");
		}
		skip = 0;
	}

	return result;
}

void fightResult(int num, int result, int *statPoint, int *userSkillBrain, int *userSkillConfidence, int *userSkillMoney, int reset) {	//전투결과
	system("cls");
	char* fightNum[3] = { "첫", "두", "세" };
	char* name[3] = { "교양 대체과제", "교양 필기시험", "전공 실기시험" };
	if (result == 1) {		//이김
		printf("%s 번째 과목 %s을(를) 무사히 해치웠다.\n\n", fightNum[num-1], name[num-1]);
		*statPoint += 2;
		Sleep(1000);
		statTable(*userSkillBrain, *userSkillConfidence, *userSkillMoney, *statPoint);		//스탯표출력
		Sleep(1000);
		printf("스탯 포인트를 2 얻었다.\n");
	}
	else if (result == 2) {		//짐
		printf("%s 번째 과목 %s에게 패배했다.\n\n", fightNum[num - 1], name[num - 1]);
		*statPoint += 2;
		Sleep(1000);
		statTable(*userSkillBrain, *userSkillConfidence, *userSkillMoney, *statPoint);		//스탯표출력
		Sleep(1000);
		printf("패배했지만 스탯 포인트를 2 얻었다.\n");
	}
	else if (result == 0) {	//포기
		printf("%s 번째 과목 %s을(를) 포기했다.\n\n", fightNum[num - 1], name[num - 1]);
		*statPoint += 1;
		Sleep(1000);
		statTable(*userSkillBrain, *userSkillConfidence, *userSkillMoney, *statPoint);		//스탯표출력
		Sleep(1000);
		printf("포기했지만 스탯 포인트를 1 얻었다.\n");
	}
	Sleep(1000);
	printf("스탯 포인트를 사용해 다음 시험을 준비하자.\n");
	Sleep(1000);
	system("pause");
	statSetting(statPoint, userSkillBrain, userSkillConfidence, userSkillMoney, reset);	//스탯다시설정
}

void ending(float sum, int f) {
	if (f != 0) {	//f가 1개라도 있을경우 - 배드엔딩
		Sleep(2000);
		printf("\n다른 과목을 아무리 잘 보면 무엇하나.\n");
		Sleep(1000);
		printf("김상명은 F을 받은 과목에서 낙제했다.\n");
		Sleep(1000);
		printf("김상명은 통곡했다.\n");
		Sleep(1000);
		printf("[GAME OVER] - F를 받음");
		Sleep(1000);
	} 

	else if (sum >= 3.5) {	//평균 3.5이상 - 해피엔딩
		Sleep(2000);
		printf("\n목표를 이뤘다!\n");
		Sleep(1000);
		printf("원하는 성적을 얻어낸 김상명은 기쁨의 미소를 지었다.\n");
		Sleep(1000);
		printf("이제 게임을 하자!\n");
		Sleep(1000);
		printf("그는 행복하게 PC방으로 향했다.\n");
		Sleep(1000);
		printf("[HAPPY ENDING] - 평균 학점 3.5 이상");
		Sleep(1000);
	}

	else if (sum >= 3) {	//평균 3~3.5 - 노멀엔딩
		Sleep(2000);
		printf("\n목표를 이뤘다고 하기도, 아니라고 하기도 애매한 상태.\n");
		Sleep(1000);
		printf("김상명은 오묘한 기분을 느꼈다.\n");
		Sleep(1000);
		printf("어쨌거나 시험은 끝났으니 그는 게임에 접속했다.\n");
		Sleep(1000);
		printf("[NORMAL ENDING] - 평균 학점 3 ~ 3.5");
		Sleep(1000);
	}

	else {	//평균 3 이하 - 새드엔딩
		Sleep(2000);
		printf("\n내가 큰 걸 바랐던가.\n");
		Sleep(1000);
		printf("더도 말고 덜도 말고 B만을 바랐는데.\n");
		Sleep(1000);
		printf("시험은 잘 마쳤지만, 김상명은 슬픔에 빠졌다.\n");
		Sleep(1000);
		printf("[SAD ENDING] - 평균 학점 3 이하");
		Sleep(1000);
	}
}

int main()
{
	int userSkillBrain = 0, userSkillConfidence = 0, userSkillMoney = 0;	//스탯
	int statPoint = 0;	//스탯포인트
	int num = 1;	//전투번호
	int turn = 1;	//턴수
	int userMP = 50;	//정신력
	int userHP = 100, enemyHP =	100;	//체력
	int result = 0;	//1 = 승, 2 = 패, 0 = 포기
	int reset = 0;	//1이면 스탯 추가지급받았을때 재설정
	char grade[4][4] = { {'\0'}, {'\0'}, {'\0'}, {'\0'} };	//승패에 따른 등급


	system("title 김상명의 중간고사");
	art(0);	//제목
	system("pause");
	start();	//시작설명

	statPoint += 7;	//기본스탯지급
	statSetting(&statPoint, &userSkillBrain, &userSkillConfidence, &userSkillMoney, reset);	//스탯입력받기
	reset = 1;	//이후에는 스탯 재설정

	for (num = 1; num < 4; num++) {	//전투 1 ~ 3
		fightReady(num, userSkillBrain, userSkillConfidence, userSkillMoney);	//전투설명
		result = fight(num, userSkillBrain, userSkillConfidence, userSkillMoney, &turn, &userHP, &userMP, &enemyHP);	//전투 후 result 받음

		if (result == 1) {	//결과저장 승리
			if (num == 1 && turn < 4) grade[num-1][0] = 'A';	//전투1승리 + 3턴이내
			else if (num == 2 && turn < 6) grade[num-1][0] = 'A';	//전투2승리 + 5턴이내
			else if (num == 3 && turn < 11) grade[num-1][0] = 'A';	//전투3승리 + 10턴이내
			else grade[num-1][0] = 'B';	//전투승리 + 나머지
		}
		else if (result == 2) grade[num-1][0] = 'C';	//결과저장 패배
		else if (result == 0) grade[num-1][0] = 'F';	//결과저장 포기
		if (userHP >= 50 && result != 0) strcat_s(grade[num-1], sizeof(grade[num-1]), "+");	//남은 체력에따라 +
		else if (userHP < 50 && result != 0) strcat_s(grade[num-1], sizeof(grade[num-1]), "0");
		else strcat_s(grade[num-1], sizeof(grade[num-1]), " ");	//포기(f)일경우

		fightResult(num, result, &statPoint, &userSkillBrain, &userSkillConfidence, &userSkillMoney, reset);	//전투결과출력, 스탯재설정
	}


	num = 4;	//전투번호 4
	fightReady(num, userSkillBrain, userSkillConfidence, userSkillMoney);	//전투설명
	result = fight(num, userSkillBrain, userSkillConfidence, userSkillMoney, &turn, &userHP, &userMP, &enemyHP);	//전투4 후 result 받음

	if (result == 1) {	//1페 승리
		num = 5;	//전투번호 5(2페)
		result = fight(num, userSkillBrain, userSkillConfidence, userSkillMoney, &turn, &userHP, &userMP, &enemyHP);	//1페이길시 바로 2페로

		if (result == 1) {	//2페결과저장 승리
			if (turn < 13) grade[3][0] = 'A';	//승리 + 12턴이내
			else grade[3][0] = 'B';	//승리 + 나머지
		}
		else if (result == 2) grade[3][0] = 'C';	//결과저장 2페패배
		else if (result == 0) grade[3][0] = 'F';	//결과저장 2페포기
	}
	else if (result == 2) grade[3][0] = 'C';	//결과저장 1페패배
	else if (result == 0) grade[3][0] = 'F';	//결과저장 1페포기

	if (userHP >= 50 && result != 0) strcat_s(grade[3], sizeof(grade[3]), "+");	//남은 체력에따라 +
	else if (userHP < 50 && result != 0) strcat_s(grade[3], sizeof(grade[3]), "0");
	else strcat_s(grade[3], sizeof(grade[3]), " ");

	system("cls");
	Sleep(1000);
	printf("시험이 모두 끝났다.\n");
	Sleep(1000);
	printf("이제 성적을 확인하기만 하면 중간고사도 끝이다.\n");
	Sleep(1000);
	printf("떨리는 마음으로 웹사이트에 접속했다.\n");
	Sleep(1000);
	system("pause");

	system("cls");
	printf("              [ 성적표 ]\n");
	printf("----------------------------------------\n");
	printf("|   과목    |    종류    |    성적     |\n");
	printf("----------------------------------------\n");
	printf("|   교양1   | 대체과제   |     %s      |\n", grade[0]);
	printf("|   교양2   | 필기       |     %s      |\n", grade[1]);
	printf("|   전공1   | 실기       |     %s      |\n", grade[2]);
	printf("|   전공2   | 필기+실기  |     %s      |\n", grade[3]);
	printf("----------------------------------------\n");

	float sum = 0;
	int count = 0, f = 0;
	for (int i = 0; i < 4; i++) {	//학점계산
		if (grade[i][0] == 'A') {
			sum += 4;
			count++;
		}
		else if (grade[i][0] == 'B') {
			sum += 3;
			count++;
		}
		else if (grade[i][0] == 'C') {
			sum += 2;
			count++;
		}
		else if (grade[i][0] == 'F') f++;
		if (grade[i][1] == "+") sum += 0.5;
	}
	if (count != 0) sum /= count;	//평균학점
	
	ending(sum, f);	//엔딩출력

	return 0;
}