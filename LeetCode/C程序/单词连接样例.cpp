#include <string.h>  
#include <iostream>  
#include <algorithm>  
#include <math.h>  
#include <cstdio>  
using namespace std;  
const int MAX = 2000;  
  
struct Edge{  
    int s, e;  
    char c[50];  
}edge[MAX];  
int re[MAX], in[MAX], out[MAX], vis[MAX], n;  
  
bool cmp(const Edge a, const Edge b)  
{  
    return strcmp(a.c, b.c) < 0;  
}  
  
int judge() //���ֻ�������������Ȳ����ڳ��ȣ��ұ���������һ�������ǡ�ñ���ȴ�һ����Ϊ��㣩
			//��һ�������ǡ�ñȳ���Сһ����Ϊ�յ㣩  
{  
    int ans = 0, c1 = 0, c2 = 0;  
    for(int i = 0; i < 26; i++){  
        if(abs(in[i]-out[i]) > 1) return -1;//����ŷ��ͼ  
        else if(in[i] - out[i] == 1) c1++;  
        else if(in[i] - out[i] == -1) {c2++; ans = i;}  
    }  
    if(c1 > 1 || c2 > 1)  return -1;//����ŷ��ͼ  
    if(c2 == 0){  
        for(int i = 0; i < 26; i++)  
            if(out[i])  return i;  
    }  
    else return ans;  
}  
  
int dfs(int u, int cnt)//u��ʾĿǰҪ�ҵ�ĳһ���ߵĳ����㣬cnt��ʾ�����ߵ����յı��  
{  
    if(cnt == n)  return 1;//���������cnt==n��˵����û�й�����ͨͼ��Ҳ����û�й���ŷ��ͼ  
    for(int i = 0; i < n; i++){  
        if(u != edge[i].s || vis[i])  continue;//uΪ�������Ӧ�ı��ں��棬������  
        vis[i] = 1;  
        re[cnt] = i;  
        if(dfs(edge[i].e, cnt+1))  return 1;  
        vis[i] = 0;//���ݣ���Ϊ��������ͼ�����Ի��ݺ���Ҫ  
    }  
    return 0;//�޷�����ŷ��ͼ  
}  
  
int main()  
{  
    int T;  
    scanf("%d", &T);  
    while(T--){  
        memset(in, 0, sizeof(in));  
        memset(out, 0, sizeof(out));  
        scanf("%d", &n);  
        for(int i = 0; i < n; i++){  
            scanf("%s", edge[i].c);  
            int len = strlen(edge[i].c);  
            edge[i].s = edge[i].c[0] - 'a';  
            edge[i].e = edge[i].c[len-1] - 'a';  
            out[edge[i].s]++;  
            in[edge[i].e]++;  
        }  
        int ok = judge();//�ҵ����  
        if(ok == -1){  
            printf("***\n");  
            continue;  
        }  
        sort(edge, edge+n, cmp);  
        memset(vis, 0, sizeof(vis));  
        if(!dfs(ok, 0)){  
            printf("***\n");  
            continue;  
        }  
        printf("%s", edge[re[0]].c);  
        for(int i = 1; i < n; i++)  
            printf(".%s", edge[re[i]].c);  
        printf("\n");  
    }  
    return 0;  
}  
