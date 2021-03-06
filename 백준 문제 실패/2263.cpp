//http://melonicedlatte.com/algorithm/2018/02/04/145104.html
//https://www.youtube.com/watch?v=wGmJatvjANY
//https://www.youtube.com/watch?v=kftYiqN5_HI
// 여기가 설명이 잘 되어 있다.
// 내일 다시 풀어보자...
// 재귀적 호출에서 어떤 느낌인지 알겠지만...
// 31번 줄, 36번 줄이 이해가 안된다...

#include <iostream>

using namespace std;

const int MAX = 100000 + 1;

int inOrder[MAX], postOrder[MAX];

int idx[MAX];

void preOrder(int inBegin, int inEnd, int postBegin, int postEnd)

{

    //모순

    if (inBegin > inEnd || postBegin > postEnd)

        return;

    int root = postOrder[postEnd];

    cout << root << " ";

    //왼쪽

    preOrder(inBegin, idx[root] - 1, postBegin, postBegin + (idx[root] - inBegin) - 1);

    //오른쪽

    preOrder(idx[root] + 1, inEnd, postBegin + (idx[root] - inBegin), postEnd - 1);
}

int main(void)

{

    ios_base::sync_with_stdio(0);

    cin.tie(0);

    int N;

    cin >> N;

    for (int i = 0; i < N; i++)

        cin >> inOrder[i];

    for (int i = 0; i < N; i++)

        cin >> postOrder[i];

    for (int i = 0; i < N; i++)

        idx[inOrder[i]] = i;

    preOrder(0, N - 1, 0, N - 1);

    cout << "\n";

    return 0;
}
