// 2023.4.3,1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

// 반복문
// for, while
// for : 특정 횟수를 반복하도록 만드는 특징
// while : 특정 조건이 성립되는동안 무한으로 반복하는 특징

int main()
{

    srand(time(NULL));
    rand();

    int nP, nC;
    bool isContinue = true;

    int nPW = 0, nCW = 0;

    while (isContinue)
    {
        cout << "1.가위 2.바위 3.보 : ";
        cin >> nP;

        nC = rand() % 3 + 1;

        if (nP == 1)
        {
            cout << "플레이어 - 가위 vs ";
            if (nC == 1)
            { 
                cout << "가위 - 컴퓨터 : 무승부" << endl;
            }
            else if (nC == 2)
            {
                cout << "바위 - 컴퓨터 : 컴퓨터 승" << endl;
                nCW++;
            }
            else
            {
                cout << "보 - 컴퓨터 : 플레이어 승" << endl;
                nPW++;
            }
        }
        else if (nP == 2)
        {
            cout << "플레이어 - 바위 vs ";
            if (nC == 1)
            {
                cout << "가위 - 컴퓨터 : 플레이어 승" << endl;
                nPW++;
            }
            else if (nC == 2)
            {
                cout << "바위 - 컴퓨터 : 무승부" << endl;
            }
            else
            {
                cout << "보 - 컴퓨터 : 컴퓨터 승" << endl;
                nCW++;
            }
        }
        else
        {
            cout << "플레이어 - 보 vs ";
            if (nC == 1)
            {
                cout << "가위 - 컴퓨터 : 컴퓨터 승" << endl;
                nCW++;
            }
            else if (nC == 2)
            {
                cout << "바위 - 컴퓨터 : 플레이어 승" << endl;
                nPW++;
            }
            else
            {
                cout << "보 - 컴퓨터 : 무승부" << endl;
            }
        }

        if (nPW == 2)
        {
            cout << "플레이어 최종 승리!";
            isContinue = false;
            //break; - if문에 영향을 안주고, while문에 영향을 줌
        }
        else if (nCW == 2)
        {
            cout << "컴퓨터 최종 승리!";
            isContinue = false;
        }
    }

    /*
    int nA, nB;
    bool isContinue;

    for (int i = 0; i < 5; i++) // 0,1,2,3,4 총 5번 반복
    {
        // 1. 변수 선언 및 초기화
        // 2. 조건 검사 (조건이 맞지 않으면 for문을 빠져나간다.)
        // 3. 알고리즘 실행
        // 4. 증강값 적용
        // 5. 2~4 반복

        cout << " : ";
        cin >> nA;
        cout << " : ";
        cin >> nB;

        cout << "덧셈 결과 : " << nA + nB << endl;
    }

    while (true) // true -> 무한 반복
    {
        cout << " : ";
        cin >> nA;
        cout << " : ";
        cin >> nB;

        cout << "덧셈 결과 : " << nA + nB << endl;
        cout << "0. 종료, 1. 계속 : ";
        cin >> isContinue;

        if (isContinue == false) break; // 반복문을 강제로 빠져나가게하는 명령어
        // 아니면 while 안에 true 를 isContinue로 해주면 if문을 안써도 됨
    }
    */

    system("pause");

    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
