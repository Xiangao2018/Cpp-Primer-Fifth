const int v2 = 0; // 顶层
int v1 = v2; 
int *p1 = &v1, &r1 = v1;
const int *p2  = &v2 ;// 底层
const int * const p3 = &vi // 顶层 底层
const int &r2 = v2; // 底层

