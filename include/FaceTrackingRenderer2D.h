#pragma once

#include "FaceTrackingRenderer.h"


class FaceTrackingRenderer2D : public FaceTrackingRenderer
{
public:
	FaceTrackingRenderer2D(HWND window);
	virtual ~FaceTrackingRenderer2D();

	void DrawBitmap(PXCCapture::Sample* sample, bool ir);
	void CalcDistances();
	void Reset();
	void SetActivateEyeCenterCalculations(bool bValue) {bActivateEyeCenterCalculations = bValue;}

	double R_lipcornerupper2D;
	double L_lipcornerupper2D;
	double lipwidth2D;
	double lipheigth2D;
	double R_eyeopen2D;
	double L_eyeopen2D;
	double NormalizeUnit2D;

	double R_lipcornerupper3D;
	double L_lipcornerupper3D;
	double lipwidth3D;
	double lipheigth3D;
	double R_eyeopen3D;
	double L_eyeopen3D;
	double NormalizeUnit3D;

protected:
	static const int sizeData    = 100;
	static const int sizeSample  =  10;

private:
	void DrawDistances();
	void DrawGraphics(PXCFaceData* faceOutput);
	void DrawLandmark(PXCFaceData::Face* trackedFace);
	void DrawLocation(PXCFaceData::Face* trackedFace);
	void DrawPoseAndPulse(PXCFaceData::Face* trackedFace, const int faceId);
	void DrawExpressions(PXCFaceData::Face* trackedFace, const int faceId);		
	void DrawRecognition(PXCFaceData::Face* trackedFace, const int faceId);

	double CalculateDistance2D(PXCPointF32 p1, PXCPointF32 p2);
	double CalculateDistance3D(PXCPoint3DF32 p1, PXCPoint3DF32 p2);

	double currHeadWidthAvg;
	double currNoseBridgeAvg;
	double currEyesCenterAvg;
	double currEyesCenterSqrAvg;

	double arrEyesCenter[sizeData];
	double arrEyesCenterAveSample   [sizeSample];
	double arrEyesCenterSqrAveSample[sizeSample];

	double headWidthAvg;
	double noseBridgeAvg;
	double eyesCenterAvg;
	double eyesCenterSqrAvg;
	double eyesCenterSTD;

	int frameNum;
	int fn; //sample frame number (this starts from when frameNum == sizeData 

	bool bActivateEyeCenterCalculations;
};

