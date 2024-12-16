# You have to define DEVELOP variable as a path to your development 
# directory in your .bashrc (or .zshrc if you use zsh) file

# Environment variables CC and CXX have to be defined in your .bashrc
# (or .zshrc if you're using zsh) file as well.
# Usually path to compiler looks like "/usr/bin/gcc" or "/usr/bin/clang".
# However, it might differ if you've installed it in other directory.

/usr/bin/cmake --no-warn-unused-cli \
    -DCMAKE_BUILD_TYPE:STRING=Debug \
    -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE \
    -DCMAKE_C_COMPILER:FILEPATH=$CC \
    -DCMAKE_CXX_COMPILER:FILEPATH=$CXX \
    -S/home/dino/dev/cpp/str_can_change \
    -B/home/dino/dev/cpp/str_can_change/build \
    -G Ninja
