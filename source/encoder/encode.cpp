#include "ICSP_Codec_Encoder.h"


extern char filename[256];

int main(int argc, char *argv[])
{
	int nframes = atoi(argv[1]);
	char *imgfname = argv[2];
	int QPDC = atoi(argv[3]);
	int QPAC = atoi(argv[4]);
	int intraPeriod = atoi(argv[5]);

	_splitpath(imgfname, NULL, NULL, filename, NULL);
	
	IcspCodec icspCodec;
	icspCodec.init(nframes, imgfname, 352, 288, QPDC, QPAC);
	icspCodec.encoding(intraPeriod);
	
	return 0; 
}
//akiyo_cif(352X288)_300f.yuv
//foreman_cif(352X288)_300f.yuv
//football_cif(352X288)_90f.yuv