#pragma once
#include <string>

class ClassDesignB {
public:
	ClassDesignB(std::string fileName, std::string imageType, std::string dateCreated,
		double size, std::string authorName, int imgHight, int imgWidth,
		int apertureSize, int exposureTime, int isoValue, bool flashEnabled);

	// Getter funcitons for all variables
	std::string getFileName();
	std::string getImageType();
	std::string getDateCreated();
	double getSize();
	std::string getAuthorName();
	int getImageDimensions();
	int getImageHeight();
	int getImageWidth();
	int getApertureSize();
	int getExposureTime();
	int getISOValue();
	bool getFlashEnabled();

	// Setter functions for all applicable variables
	void setFileName(std::string fileName);
	void setImageType(std::string imageType);
	void setDateCreated(std::string dateCreated);
	void setSize(double size);
	void setAuthorName(std::string authorName);
	void setImageDimensions(int imgHeight, int imgWidth);
	void setImageHeight(int imgHeight);
	void setImageWidth(int imgWidth);
	void setApertureSize(int apertureSize);
	void setExposureTime(int exposureTime);
	void setISOValue(int isoValue);
	void setFlashEnabled(bool flashEnabled);

private:
	std::string fileName;
	std::string imageType;
	std::string dateCreated;
	double size;
	std::string authorName;
	int imgHeight;
	int imgWidth;
	int apertureSize;
	int exposureTime;
	int isoValue;
	bool flashEnabled;
};

// Print function to provide all image data in the correct format
void printImageData(ClassDesignB designB);

