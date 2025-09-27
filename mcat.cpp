// mcat (mini cat)
// idk why i wrote ts
// made by jrdpteam
#include <cstdio>
#include <cstring>
#include <cerrno>
#include <string>

int main(int argc, char **argv){
    const int BUF=4096;
    char buf[BUF];
    auto do_file=[&](const std::string &name){
        FILE *f = name=="-" ? stdin : std::fopen(name.c_str(),"rb");
        if(!f){ std::fprintf(stderr,"mcat: %s: %s\n", name.c_str(), std::strerror(errno)); return; }
        size_t r;
        while((r=fread(buf,1,BUF,f))>0) fwrite(buf,1,r,stdout);
        if(f!=stdin) fclose(f);
    };
    if(argc==1){ do_file("-"); return 0; }
    for(int i=1;i<argc;++i) do_file(argv[i]);
    return 0;
}
