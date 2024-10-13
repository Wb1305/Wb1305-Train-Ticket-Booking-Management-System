#include <bits/stdc++.h>
#include "function.h"

using namespace std;

int main()
{
  int size_hk = 0;
  HanhKhach hk[M];
  // DocDuLieu_HanhKhach(hk, size_hk); // ghi du lieu ra man hinh
  DocDuLieu_HanhKhach(hk, size_hk);
  for (int i = 0; i < size_hk - 1; i++)
  {
    hk[i].showInfo();
    cout << endl;
  }
  return 0;
};