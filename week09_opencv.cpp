#include<opencv/highgui.h>
int main(){
    IplImage * img = cvLoadImage("1.png"); //讀圖
    cvShowImage("week09", img); //秀圖
    cvWaitKey(0); //等任意鍵繼續
}
