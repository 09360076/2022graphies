#include<opencv/highgui.h>
int main(){
    IplImage * img = cvLoadImage("1.png"); //Ū��
    cvShowImage("week09", img); //�q��
    cvWaitKey(0); //�����N���~��
}
