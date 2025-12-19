#include <string.h>
#include <stdio.h>

void vulnerable_function(char *user_input) {
    char buffer[10];
    // Snyk 会在这里检测到 "Buffer Overflow" d
    // 原因：strcpy 没有检查 user_input 的长度是否超过了 buffer 的大小
    strcpy(buffer, user_input); 
}

int main() {
    char *input = "This string is definitely longer than 10 characters";
    vulnerable_function(input);
    return 0;
}