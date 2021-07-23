#include <iostream.h>
#include <conio.h>
main ()
{
 int matris [20][20];
 unsigned int ss=20;

 matris [0][0]=1;
 matris [0][1]=1;
 matris [1][1]=1;

 for (int satir=2 ; satir < ss ; satir++)

 {
	 matris[0][satir]=1;
	 for (int sutun=1; sutun < satir ; sutun++)
		matris[sutun][satir]=matris[sutun-1][satir-1]+matris[sutun][satir-1];
		matris [satir][satir]=1;
 }

  for (int satir=0 ; satir < ss ; satir++)

 {
	 matris[0][satir]=1;
	 for (int sutun=0; sutun <= satir ; sutun++)
		cout<<matris[sutun][satir]<<",";
		cout<<endl;
 }

getch();
}

