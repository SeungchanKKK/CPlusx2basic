#include "struct.h"
//헤더 파일을 여러 파일에 포함시킬때, 단 한번만 포함시킨다
int main() {
    MyStruct PandaCoding = {
        "Panda",
        26,
    };

    display(PandaCoding);
    return 0;
}

