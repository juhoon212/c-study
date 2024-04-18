#include <dlfcn.h>
#include <iostream>

int main() {
    void* handle = dlopen("./libdynamic.so", RTLD_LAZY); // RTLD_LAZY란 레이지 바인딩을 해준다는 뜻.
    if (!handle) {
        std::cout << "No library" << std::endl;
        return 1;
    }

    void (*fooPtr)();
    fooPtr = (void(*)())dlsym(handle, "_Z3foov");
    const char* dlysm_error = dlerror();
    if (dlysm_error) {
        std::cout << "No symbol" << std::endl;
        return 1;
    }

    (*fooPtr)();
    dlclose(handle);
    return 0;
}