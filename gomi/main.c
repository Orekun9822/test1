#pragma warning(disable: 4996)

#include <stdio.h>
#include <string.h>


int main(void)
{
    //length=�������̒���
    //a=�ŏ������Ɏg�����Ǝv���Ē�`�������ǎg���Ȃ������߂�������
    //b=���ʕ\���Ɏg���B
    //c=b�̒l���i�[�B����ɂ�菉�߂���ł��Ȃ��Ă����悤�ɂȂ��Ă���
    int length, a,b,c;
    char code[100000];
    
    //b�̒l��0�ȊO�ɂ���Ƃ܂Ƃ��ɓ��삵�Ȃ��Ȃ�B
    b = 0;

    //�����o��
    printf("�R�[�h����͂��Ă�:");
    //�R�[�h��code�Ɋi�[
    scanf("%s", code);


    //�R�[�h�̕�������lengh�ɓ����
    length = strlen(code);

    //length�̒l��8�Ŋ���؂�Ȃ��ꍇ�A�i�����jJ Gecko U�Ŏg���Ȃ��̂ŏ������Ȃ�
    if (0 != length % 8)
    {
        printf("���������������ĂȂ��ł���O�O\n");
    }
    else
    {
        //�����œ��͂��ꂽ�R�[�h�̒���������������
        for (int i = 0; i <= length/16-1 ; i++)
        {
            //������ӎ����ł��悭�킩���ĂȂ��ł����߂�
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
    
    printf("�����I������炵���ł��B�����L�[����͂���Ə������\n");
    //���ꏑ���Ȃ��Ƃ����ɏ������Ⴄ
    getch();
    return 0;
}