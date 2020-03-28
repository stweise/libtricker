# libtricker

Hooks or interposes a function in a shared library or executable using LD_PRELOAD.

        % mkdir build
        % cd build
        % cmake ..
        -- The C compiler identification is GNU 9.2.1
        -- The CXX compiler identification is GNU 9.2.1
        -- Check for working C compiler: /usr/lib64/ccache/cc
        -- Check for working C compiler: /usr/lib64/ccache/cc -- works
        -- Detecting C compiler ABI info
        -- Detecting C compiler ABI info - done
        -- Detecting C compile features
        -- Detecting C compile features - done
        -- Check for working CXX compiler: /usr/lib64/ccache/c++
        -- Check for working CXX compiler: /usr/lib64/ccache/c++ -- works
        -- Detecting CXX compiler ABI info
        -- Detecting CXX compiler ABI info - done
        -- Detecting CXX compile features
        -- Detecting CXX compile features - done
        -- Configuring done
        -- Generating done
        -- Build files have been written to: /xxxxxxx/xxxxx/libtricker/build
        % make
        Scanning dependencies of target tricker
        [ 16%] Building C object CMakeFiles/tricker.dir/libtricker.c.o
        [ 33%] Linking C shared library libtricker.so
        [ 33%] Built target tricker
        Scanning dependencies of target demo
        [ 50%] Building C object CMakeFiles/demo.dir/libdemo.c.o
        [ 66%] Linking C shared library libdemo.so
        [ 66%] Built target demo
        Scanning dependencies of target main.x
        [ 83%] Building C object CMakeFiles/main.x.dir/main.c.o
        [100%] Linking C executable main.x
        [100%] Built target main.x
        % ../todo.sh
        [HOOK] coolfunction: a:5 b:7
        [coolfunction] Value of a: 42
        [coolfunction] Value of b: 7
        The result of coolfunction is: 49
        
        [HOOK] coolfunction: a:6 b:7
        [coolfunction] Value of a: 42
        [coolfunction] Value of b: 7
        The result of coolfunction is: 49
        
        [HOOK] coolfunction: a:7 b:7
        [coolfunction] Value of a: 42
        [coolfunction] Value of b: 7
        The result of coolfunction is: 49
        
        [HOOK] coolfunction: a:8 b:7
        [coolfunction] Value of a: 42
        [coolfunction] Value of b: 7
        The result of coolfunction is: 49
        
        [HOOK] coolfunction: a:9 b:7
        [coolfunction] Value of a: 42
        [coolfunction] Value of b: 7
        The result of coolfunction is: 49

