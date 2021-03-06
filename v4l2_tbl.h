
// Tables with the following columns:
// V4L2 #define, short string name, string description

#ifdef V4L2T_PIX_FMT
    // RGB formats
    V4L2T_PIX_FMT( V4L2_PIX_FMT_RGB332, RGB332, "8 RGB-3-3-2")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_RGB444, RGB444, "16 xxxxrrrr ggggbbbb")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_RGB555, RGB555, "16 RGB-5-5-5")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_RGB565, RGB565, "16 RGB-5-6-5")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_RGB555X, RGB555X, "16 RGB-5-5-5 BE")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_RGB565X, RGB565X, "16 RGB-5-6-5 BE")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_BGR666, BGR666, "18 BGR-6-6-6")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_BGR24, BGR24, "24 BGR-8-8-8")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_RGB24, RGB24, "24 RGB-8-8-8")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_BGR32, BGR32, "32 BGR-8-8-8-8")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_RGB32, RGB32, "32 RGB-8-8-8-8")

    // Grey formats
    V4L2T_PIX_FMT( V4L2_PIX_FMT_GREY, GREY, "8 Greyscale")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_Y4, Y4, "4 Greyscale")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_Y6, Y6, "6 Greyscale")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_Y10, Y10, "10 Greyscale")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_Y12, Y12, "12 Greyscale")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_Y16, Y16, "16 Greyscale")

    // Grey bit-packed formats
    V4L2T_PIX_FMT( V4L2_PIX_FMT_Y10BPACK, Y10BPACK, "10 Greyscale bit-packed")

    // Palette formats
    V4L2T_PIX_FMT( V4L2_PIX_FMT_PAL8, PAL8, "8 8-bit palette")

    // Chrominance formats
    V4L2T_PIX_FMT( V4L2_PIX_FMT_UV8, UV8, "8 UV 4:4")

    // Luminance+Chrominance formats
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YVU410, YVU410, "9 YVU 4:1:0")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YVU420, YVU420, "12 YVU 4:2:0")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YUYV, YUYV, "16 YUV 4:2:2")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YYUV, YYUV, "16 YUV 4:2:2")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YVYU, YVYU, "16 YVU 4:2:2")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_UYVY, UYVY, "16 YUV 4:2:2")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_VYUY, VYUY, "16 YUV 4:2:2")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YUV422P, YUV422P, "16 YVU422 planar")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YUV411P, YUV411P, "16 YVU411 planar")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_Y41P, Y41P, "12 YUV 4:1:1")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YUV444, YUV444, "16 xxxxyyyy uuuuvvvv")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YUV555, YUV555, "16 YUV-5-5-5")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YUV565, YUV565, "16 YUV-5-6-5")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YUV32, YUV32, "32 YUV-8-8-8-8")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YUV410, YUV410, "9 YUV 4:1:0")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YUV420, YUV420, "12 YUV 4:2:0")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_HI240, HI240, "8 8-bit color")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_HM12, HM12, "8 YUV 4:2:0 16x16 macroblocks")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_M420, M420, "12 YUV 4:2:0 2 lines y, 1 line uv interleaved")

    // two planes -- one Y, one Cr + Cb interleaved
    V4L2T_PIX_FMT( V4L2_PIX_FMT_NV12, NV12, "12 Y/CbCr 4:2:0")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_NV21, NV21, "12 Y/CrCb 4:2:0")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_NV16, NV16, "16 Y/CbCr 4:2:2")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_NV61, NV61, "16 Y/CrCb 4:2:2")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_NV24, NV24, "24 Y/CbCr 4:4:4")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_NV42, NV42, "24 Y/CrCb 4:4:4")

    // two non contiguous planes - one Y, one Cr + Cb interleaved
    V4L2T_PIX_FMT( V4L2_PIX_FMT_NV12M, NV12M, "12 Y/CbCr 4:2:0")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_NV21M, NV21M, "21 Y/CrCb 4:2:0")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_NV16M, NV16M, "16 Y/CbCr 4:2:2")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_NV61M, NV61M, "16 Y/CrCb 4:2:2")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_NV12MT, NV12MT, "12 Y/CbCr 4:2:0 64x32 macroblocks")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_NV12MT_16X16, NV12MT_16X16, "12 Y/CbCr 4:2:0 16x16 macroblocks")

    // three non contiguous planes - Y, Cb, Cr
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YUV420M, YUV420M, "12 YUV420 planar")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_YVU420M, YVU420M, "12 YVU420 planar")

    // Bayer formats - see http://www.siliconimaging.com/RGB%20Bayer.htm
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SBGGR8, SBGGR8, "8 BGBG.. GRGR..")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SGBRG8, SGBRG8, "8 GBGB.. RGRG..")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SGRBG8, SGRBG8, "8 GRGR.. BGBG..")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SRGGB8, SRGGB8, "8 RGRG.. GBGB..")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SBGGR10, SBGGR10, "10 BGBG.. GRGR..")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SGBRG10, SGBRG10, "10 GBGB.. RGRG..")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SGRBG10, SGRBG10, "10 GRGR.. BGBG..")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SRGGB10, SRGGB10, "10 RGRG.. GBGB..")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SBGGR12, SBGGR12, "12 BGBG.. GRGR..")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SGBRG12, SGBRG12, "12 GBGB.. RGRG..")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SGRBG12, SGRBG12, "12 GRGR.. BGBG..")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SRGGB12, SRGGB12, "12 RGRG.. GBGB..")

    // 10bit raw bayer a-law compressed to 8 bits
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SBGGR10ALAW8, SBGGR10ALAW8, "")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SGBRG10ALAW8, SGBRG10ALAW8, "")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SGRBG10ALAW8, SGRBG10ALAW8, "")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SRGGB10ALAW8, SRGGB10ALAW8, "")

    // 10bit raw bayer DPCM compressed to 8 bits
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SBGGR10DPCM8, SBGGR10DPCM8, "")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SGBRG10DPCM8, SGBRG10DPCM8, "")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SGRBG10DPCM8, SGRBG10DPCM8, "")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SRGGB10DPCM8, SRGGB10DPCM8, "")

    // 10bit raw bayer, expanded to 16 bits
    // xxxxrrrrrrrrrrxxxxgggggggggg xxxxggggggggggxxxxbbbbbbbbbb...
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SBGGR16, SBGGR16, "16  BGBG.. GRGR..")

    // compressed formats
    V4L2T_PIX_FMT( V4L2_PIX_FMT_MJPEG, MJPEG, "Motion-JPEG")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_JPEG, JPEG, "JFIF JPEG")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_DV, DV, "1394")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_MPEG, MPEG, "MPEG-1/2/4 Multiplexed")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_H264, H264, "H264 with start codes")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_H264_NO_SC, H264_NO_SC, "H264 without start codes")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_H264_MVC, H264_MVC, "H264 MVC")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_H263, H263, "H263")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_MPEG1, MPEG1, "MPEG-1 ES")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_MPEG2, MPEG2, "MPEG-2 ES")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_MPEG4, MPEG4, "MPEG-4 part 2 ES")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_XVID, XVID, "Xvid")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_VC1_ANNEX_G, VC1_ANNEX_G, "SMPTE 421M Annex G compliant stream")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_VC1_ANNEX_L, VC1_ANNEX_L, "SMPTE 421M Annex L compliant stream")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_VP8, VP8, "VP8")

    // Vendor-specific formats
    V4L2T_PIX_FMT( V4L2_PIX_FMT_CPIA1, CPIA1, "cpia1 YUV")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_WNVA, WNVA, "Winnov hw compress")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SN9C10X, SN9C10X, "SN9C10x compression")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SN9C20X_I420, SN9C20X_I420, "SN9C20x YUV 4:2:0")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_PWC1, PWC1, "pwc older webcam")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_PWC2, PWC2, "pwc newer webcam")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_ET61X251, ET61X251, "ET61X251 compression")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SPCA501, SPCA501, "YUYV per line")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SPCA505, SPCA505, "YYUV per line")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SPCA508, SPCA508, "YUVY per line")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SPCA561, SPCA561, "compressed GBRG bayer")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_PAC207, PAC207, "compressed BGGR bayer")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_MR97310A, MR97310A, "compressed BGGR bayer")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_JL2005BCD, JL2005BCD, "compressed RGGB bayer")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SN9C2028, SN9C2028, "compressed GBRG bayer")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SQ905C, SQ905C, "compressed RGGB bayer")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_PJPG, PJPG, "Pixart 73xx JPEG")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_OV511, OV511, "ov511 JPEG")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_OV518, OV518, "ov518 JPEG")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_STV0680, STV0680, "stv0680 bayer")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_TM6000, TM6000, "tm5600/tm60x0")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_CIT_YYVYUY, CIT_YYVYUY, "one line of Y then 1 line of VYUY")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_KONICA420, KONICA420, "YUV420 planar in blocks of 256 pixels")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_JPGL, JPGL, "JPEG-Lite")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_SE401, SE401, "se401 janggu compressed rgb")
    V4L2T_PIX_FMT( V4L2_PIX_FMT_S5C_UYVY_JPG, S5C_UYVY_JPG, "S5C73M3 interleaved UYVY/JPEG")
#endif

#ifdef V4L2T_CAP
    V4L2T_CAP( V4L2_CAP_VIDEO_CAPTURE, VIDEO_CAPTURE, "Is a video capture device")
    V4L2T_CAP( V4L2_CAP_VIDEO_OUTPUT, VIDEO_OUTPUT, "Is a video output device")
    V4L2T_CAP( V4L2_CAP_VIDEO_OVERLAY, VIDEO_OVERLAY, "Can do video overlay")
    V4L2T_CAP( V4L2_CAP_VBI_CAPTURE, VBI_CAPTURE, "Is a raw VBI capture device")
    V4L2T_CAP( V4L2_CAP_VBI_OUTPUT, VBI_OUTPUT, "Is a raw VBI output device")
    V4L2T_CAP( V4L2_CAP_SLICED_VBI_CAPTURE, SLICED_VBI_CAPTURE, "Is a sliced VBI capture device")
    V4L2T_CAP( V4L2_CAP_SLICED_VBI_OUTPUT, SLICED_VBI_OUTPUT, "Is a sliced VBI output device")
    V4L2T_CAP( V4L2_CAP_RDS_CAPTURE, RDS_CAPTURE, "RDS data capture")
    V4L2T_CAP( V4L2_CAP_VIDEO_OUTPUT_OVERLAY, VIDEO_OUTPUT_OVERLAY, "Can do video output overlay")
    V4L2T_CAP( V4L2_CAP_HW_FREQ_SEEK, HW_FREQ_SEEK, "Can do hardware frequency seek")
    V4L2T_CAP( V4L2_CAP_RDS_OUTPUT, RDS_OUTPUT, "Is an RDS encoder")
    V4L2T_CAP( V4L2_CAP_VIDEO_CAPTURE_MPLANE, VIDEO_CAPTURE_MPLANE, "video capture device that supports multiplanar formats")
    V4L2T_CAP( V4L2_CAP_VIDEO_OUTPUT_MPLANE, VIDEO_OUTPUT_MPLANE, "video output device that supports multiplanar formats")
    V4L2T_CAP( V4L2_CAP_VIDEO_M2M_MPLANE, VIDEO_M2M_MPLANE, "video mem-to-mem device that supports multiplanar formats")
    V4L2T_CAP( V4L2_CAP_VIDEO_M2M, VIDEO_M2M, "video mem-to-mem device")
    V4L2T_CAP( V4L2_CAP_TUNER, TUNER, "has a tuner")
    V4L2T_CAP( V4L2_CAP_AUDIO, AUDIO, "has audio support")
    V4L2T_CAP( V4L2_CAP_RADIO, RADIO, "is a radio device")
    V4L2T_CAP( V4L2_CAP_MODULATOR, MODULATOR, "has a modulator")
    V4L2T_CAP( V4L2_CAP_READWRITE, READWRITE, "read/write systemcalls")
    V4L2T_CAP( V4L2_CAP_ASYNCIO, ASYNCIO, "async I/O")
    V4L2T_CAP( V4L2_CAP_STREAMING, STREAMING, "streaming I/O ioctls")
    V4L2T_CAP( V4L2_CAP_DEVICE_CAPS, DEVICE_CAPS, "sets device capabilities field")
#endif
