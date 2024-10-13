#include <bits/stdc++.h>
#include "function.h"

using namespace std;

int main()
{
  VeTau vt[M];
  int size = 0;
  DocDuLieu_VeTau(vt, size);
  for (int i = 0; i < size - 1; i++)
  {
    vt[i].showInfo();
    cout << endl;
  }
  return 0;
};