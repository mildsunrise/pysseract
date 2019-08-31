#pragma once
#include <leptonica/allheaders.h>
#include <tesseract/baseapi.h>
#include <vector>

std::vector<std::string> availableLanguages();
const char* defaultDataPath();

class Pysseract {
   public:
    Pysseract(const char* datapath, const char* language);
    Pysseract();
    void Clear();

    const int GetPageSegMode();
    const char* GetDataPath();
    const char* GetUTF8Text();
    const char* GetUNLVText();
    const char* GetHOCRText(const int pagenum);
    const char* GetTSVText(const int pagenum);
    const char* GetAltoText(const int pagenum);
    const char* GetLSTMBoxText(const int pagenum);
    const char* GetBoxText(const int pagenum);
    const char* GetWordStrBoxText(const int pagenum);
    const char* GetOsdText(const int pagenum);
    void SetPageSegMode(const int mode);
    void SetSourceResolution(const int ppi);
    void SetImageFromPath(const char* imgpath);
    void SetImageFromBytes(const std::string& bytes);

   private:
    tesseract::TessBaseAPI api;
};