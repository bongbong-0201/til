/*

int SimpleFunc(int a=10)
{
    return a + 1;
}

int SimpleFunc(void)
{
    return 10;
}

문제가 있는 이유:
첫 번째 함수는 입력이 없을때 디폴트로 10이 지정되는데, 두 번째 함수는 비어 있을때 실행되는 걸 적어두었다.
즉, 함수를 불러올때, SimpleFunc()이라고 호출하면 두 개의 함수가 호출이 가능한 문제가 생기므로 옳지 않은 문법이다.

*/