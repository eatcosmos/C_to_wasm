#include <stdio.h>
#include <emscripten/emscripten.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}

#ifdef __cplusplus
#define EXTERN extern "C"
#else
#define EXTERN
#endif

// EMSCRIPTEN_KEEPALIVE 是Emscripten特有的宏，用于指示编译器不要对这个函数进行Dead Code Elimination（消除未使用的代码），确保即使在优化时此函数也能保留在生成的WebAssembly或JavaScript输出中，以便从JavaScript调用。
EXTERN EMSCRIPTEN_KEEPALIVE void myFunction(int argc, char **argv) {
    printf("MyFunction Called\n");
}
// emcc -o index.html hello3.c --shell-file html_template/shell_minimal.html -s NO_EXIT_RUNTIME=1 -s "EXPORTED_RUNTIME_METHODS=['ccall']"
// git add . && git commit -m "add hello3.c" && git push