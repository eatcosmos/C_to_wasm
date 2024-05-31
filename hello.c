#include <stdio.h> //为什么webassembly里面可以直接包含stdio.h?
int main(int argc, char **argv) {
  printf("Hello, World!\n"); //相当于把网页当做控制台了，用于重定位printf的输出对象
  return 0;
}
// source $HOME/OneDrive/Code/apps/emsdk/emsdk_env.sh
// ~/Code/C_to_wasm
// emcc hello.c -s WASM=1 -o hello.html
// emcc hello.c -o hello.html # 这个就可以了

// python3 -m http.server 8000

// apt install python2.7
// update-alternatives --install /root/miniconda3/bin/python python /usr/bin/python2.7 1
// update-alternatives --install /root/miniconda3/bin/python python /root/miniconda3/bin/python3.8 2
// update-alternatives --config python
// update-alternatives --remove-all python