#pragma warning(disable: 4996)

#include <stdio.h>
#include <string.h>


int main(void)
{
    //length=文字数の長さ
    //a=最初何かに使おうと思って定義したけど使われなかった悲しい何か
    //b=結果表示に使う。
    //c=bの値を格納。これにより初めから打たなくていいようになっている
    int length, a,b,c;
    char code[100000];
    
    //bの値を0以外にするとまともに動作しなくなる。
    b = 0;

    //文字出力
    printf("コードを入力してね:");
    //コードをcodeに格納
    scanf("%s", code);


    //コードの文字数をlenghに入れる
    length = strlen(code);

    //lengthの値が8で割り切れない場合、（多分）J Gecko Uで使えないので処理しない
    if (0 != length % 8)
    {
        printf("多分文字数合ってないですよ＾＾\n");
    }
    else
    {
        //ここで入力されたコードの長さだけ処理する
        for (int i = 0; i <= length/16-1 ; i++)
        {
            //ここら辺自分でもよくわかってないですごめん
            c = b;
            for (b; b <= c + 7; b++)
            {
                printf("%c", code[b]);
            }
            c = b;
            printf(" ");
            for (b; b <= c + 7; b++)
            {
                printf("%c", code[b]);
            }
            printf("\n");
        }
    }
    
    printf("無事終わったらしいです。何かキーを入力すると消えるよ\n");
    //これ書かないとすぐに消えちゃう
    getch();
    return 0;
}