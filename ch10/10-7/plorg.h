#ifndef PLORG_H_
#define PLORG_H_

class plorg
{
private:
    char name[20];
    int ci;
public:
    plorg();
    plorg(char * name, int ci);
    void show();
    void setci(int ci_);
    ~plorg();
};
#endif
