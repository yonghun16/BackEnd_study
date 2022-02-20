/* 자기 참조 구조체로 list 만들기 */

#include <stdio.h>

struct list
{
    int num;                // 데이터를 저장하는 멤버
    struct list *next;      // 구조체 자신을 가리키는 포인터 멤버
};

int main(void)
{
    struct list a = {10, 0}, b = {20, 0}, c = {30, 0};
}
