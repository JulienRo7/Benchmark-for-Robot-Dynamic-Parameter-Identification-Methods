CC="/usr/bin/gcc"
                CXX="g++"
                CFLAGS="-fexceptions -fPIC -fno-omit-frame-pointer -pthread -D_GNU_SOURCE -DMATLAB_MEX_FILE "
                CXXFLAGS="-fexceptions -fPIC -fno-omit-frame-pointer -pthread -std=c++11 -D_GNU_SOURCE -DMATLAB_MEX_FILE "
                COPTIMFLAGS="-O2 -fwrapv -DNDEBUG"
                CXXOPTIMFLAGS="-O2 -fwrapv -DNDEBUG"
                CDEBUGFLAGS="-g"
                CXXDEBUGFLAGS="-g"
                LD="/usr/bin/gcc"
                LDXX="g++"
                LDFLAGS="-pthread -Wl,--no-undefined -Wl,-rpath-link,/opt/MATLAB/R2018a/bin/glnxa64 -shared  -L"/opt/MATLAB/R2018a/bin/glnxa64" -lmx -lmex -lmat -lm -lstdc++ -Wl,--version-script,"/opt/MATLAB/R2018a/extern/lib/glnxa64/mexFunction.map""
                LDDEBUGFLAGS="-g"
