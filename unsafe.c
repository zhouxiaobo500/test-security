#include <stdio.h>
#include <string.h>

// 这是一个极其经典的漏洞场景
void vulnerable_function(char *input) {
    // 定义了一个只有 10 字节的缓冲区
    char buffer[10];

    // 危险！strcpy 不会检查输入长度
    // 如果 input 超过 10 字节，就会覆盖栈内存，导致崩溃或远程代码执行
    strcpy(buffer, input);

    printf("Input copied: %s\n", buffer);
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        // 将命令行参数直接传给漏洞函数
        vulnerable_function(argv[1]);
    }
    return 0;
}
