#include <stdio.h>
// 假设我们要调用 zlib 库
#include <zlib.h> 

int main() {
    // 仅仅是调用一下库函数，证明我们用到了它
    printf("ZLIB VERSION: %s\n", zlibVersion());
    return 0;
}