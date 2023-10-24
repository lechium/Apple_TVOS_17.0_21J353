//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, MISSING_TYPE, NSString;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGColorSpace;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CIBurstSupportVector {
    double _field1;
    double _field2[7];
};

struct CIPredictionModelImageFeatures {
    NSString *name;
    long long width;
    long long height;
    unsigned int format;
};

struct FastRegistration_Signatures {
    float *piRow;
    unsigned long long nPiRow;
    struct Projections_meanStdTable piRowTable;
    float *piCol;
    unsigned long long nPiCol;
    struct Projections_meanStdTable piColTable;
};

struct GridROI_t {
    int startX;
    int startY;
    int endX;
    int endY;
};

struct IPoint {
    long long _field1;
    long long _field2;
};

struct IRect {
    struct IPoint _field1;
    struct ISize _field2;
};

struct ISize {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct LineCostProxy;

struct MTLResourceID {
    unsigned long long _field1;
};

struct Projections_meanStdTable {
    float *sumTable;
    float *sumSqTable;
};

struct PseudoRand {
    unsigned int u;
    unsigned int v;
};

struct Rectangle {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct SharpnessGridElement_t {
    unsigned char _field1;
    unsigned char _field2;
    float _field3;
};

struct Solution {
    float rX;
    float rY;
    float rZ;
    float cost;
};

struct Texture {
    union {
        unsigned long long _field1;
        struct {
            unsigned int _field1;
            unsigned int _field2;
        } _field2;
        struct {
            void *_field1;
            void *_field2;
        } _field3;
    } _field1;
};

struct __SVMParameters {
    struct __SVMScaleOffset {
        float _field1;
        float _field2;
    } _field1[7];
    double _field2;
    double _field3;
    int _field4;
    int _field5;
    struct CIBurstSupportVector *_field6;
    struct CIBurstSupportVector *_field7;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct float3x3 {
    MISSING_TYPE *columns[3];
};

struct vec2 {
    CDUnion_48fbf68f _field1;
    CDUnion_48fbf68f _field2;
};

struct vec3 {
    union {
        CDStruct_12b04d25 _field1;
        CDStruct_12b04d25 _field2;
        CDStruct_a6b098fc _field3;
        CDStruct_a6b098fc _field4;
    } _field1;
};

struct vec4 {
    union {
        CDStruct_818bb265 _field1;
        CDStruct_818bb265 _field2;
        CDStruct_92ccd070 _field3;
        CDStruct_92ccd070 _field4;
        CDStruct_6324a431 _field5;
        CDStruct_6324a431 _field6;
    } _field1;
};

struct vector<CI::Perspective::Line, std::allocator<CI::Perspective::Line>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<CI::Perspective::Line *, std::allocator<CI::Perspective::Line>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<LineCostProxy, std::allocator<LineCostProxy>> {
    struct LineCostProxy *__begin_;
    struct LineCostProxy *__end_;
    struct __compressed_pair<LineCostProxy *, std::allocator<LineCostProxy>> {
        struct LineCostProxy *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6[3];
} CDStruct_31328b19;

typedef struct {
    _Bool _field1;
    int _field2;
    int _field3;
    float _field4;
    float _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    float _field10;
    float _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
} CDStruct_935079c3;

typedef struct {
    unsigned long long width;
    unsigned long long height;
    unsigned long long depth;
} CDStruct_da2e99ad;

typedef struct {
    MISSING_TYPE *_field1[3];
} CDStruct_d80e62f2;

typedef struct {
    float _field1[4];
    float _field2[4];
    float _field3[4];
    int _field4[4];
} CDStruct_04c5c26d;

typedef struct {
    char *baseAddress;
    int width;
    int height;
    int rowSamples;
    int rowBytes;
    int size;
    int samplesPerPixel;
    int bytesPerSample;
    float resolution;
} CDStruct_c3faddef;

typedef struct {
    double focalLength;
    double lineSearchRangeV;
    double lineSearchRangeH;
    double pitchLimit;
    double yawLimit;
    double rollLimit;
    CIImage *saliencyHeatmap;
} CDStruct_58ac58eb;

typedef struct {
    double i;
    double q;
} CDStruct_bfe67ca5;

typedef struct {
    double variance;
    int nNonZero;
} CDStruct_fc6961d5;

typedef struct {
    float skinval;
    float avgLuminance;
    float minLuminance;
    float maxLuminance;
    float darkPercent;
    float clipPercent;
} CDStruct_3882bc9d;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} CDStruct_818bb265;

typedef struct {
    float a;
    float b;
    float c;
} CDStruct_12b04d25;

typedef struct {
    int _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
} CDStruct_c952897d;

typedef struct {
    int _field1;
    int _field2;
    _Bool _field3;
    _Bool _field4;
    float _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
} CDStruct_3edab2bb;

typedef struct CDStruct_183601bc;

typedef struct {
    _Bool _field1;
    int _field2;
    int _field3;
    struct CGPoint *_field4;
} CDStruct_d01ad076;

typedef struct {
    char _field1[256];
    char _field2[32];
    CDStruct_c3faddef _field3;
    int _field4;
    int _field5;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
    } _field6;
    struct CGColorSpace *_field7;
    unsigned int _field8;
    int _field9;
    int _field10;
    _Bool _field11;
    float _field12;
} CDStruct_79f2618e;

typedef struct {
    int _field1;
    CDStruct_c952897d _field2[20];
} CDStruct_b443dc70;

typedef struct {
    int _field1;
    struct {
        int _field1;
        int _field2;
        int _field3;
        int _field4;
        float _field5;
    } _field2[20];
} CDStruct_ccbddcce;

typedef struct {
    int _field1;
    struct {
        float _field1;
        int _field2;
        int _field3;
        float _field4;
        float _field5;
        float _field6;
        int _field7;
        int _field8;
        float _field9;
    } _field2[4];
} CDStruct_08ff8b76;

typedef struct {
    int _field1;
    int _field2;
    CDStruct_183601bc *_field3;
    int _field4;
    int _field5;
    int _field6;
} CDStruct_892ad059;

typedef struct {
    int width;
    int height;
    float scaleFactor;
    CDStruct_183601bc *grid;
    int nPoints;
    int maxPoints;
    CDStruct_183601bc *points;
    int nextNetNumber;
    int nThreads;
    int maxThreads;
    CDStruct_183601bc *threads;
    int nShapes;
    int maxShapes;
    CDStruct_183601bc *shapes;
} CDStruct_ea27cb70;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    float _field4;
    float _field5;
    int _field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
    int _field10;
    int _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    CDStruct_818bb265 _field16;
    CDStruct_818bb265 _field17;
    float _field18;
    int _field19;
    int _field20;
} CDStruct_ed92ceb9;

typedef struct {
    int origHitX;
    int origHitY;
    int snapHitX;
    int snapHitY;
    int bitmaskSeedX;
    int bitmaskSeedY;
    int bitmaskThreshold;
    int cornealReflectionSeedX;
    int cornealReflectionSeedY;
    int cornealReflectionThreshold;
    _Bool align;
    CDStruct_6ca1d5c6 mTemplate;
    CDStruct_6ca1d5c6 existingTemplate;
    int averageSkinMapY;
    int characterizeCase;
    int finalEyeCase;
    float IOD;
    struct {
        void *bitmapproc_context;
        CDUnknownFunctionPointerType bproc;
        int orientation;
        float SNR;
        _Bool N90;
        int redBitmaskArea;
        float imageCenterX;
        float imageCenterY;
        float halfDiagonalSize;
    } O;
    CDStruct_5973fb4f CR;
} CDStruct_1c31e7e7;

typedef struct {
    CDStruct_818bb265 _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
} CDStruct_73443751;

typedef struct {
    CDStruct_5973fb4f FR;
    struct CGPoint leftEye;
    struct CGPoint rightEye;
    CDStruct_5973fb4f LR;
    CDStruct_5973fb4f RR;
    float leftDistMatrix[4];
    float rightDistMatrix[4];
    struct CGPoint LPoly[8];
    struct CGPoint RPoly[8];
    float IOD;
} CDStruct_7286a259;

typedef struct {
    struct CGPoint _field1;
    int _field2;
    float _field3;
} CDStruct_e958be04;

typedef struct {
    float xf;
    float yf;
    float xfi;
    float yfi;
    float ify;
    int ioffx;
    int ioffy;
    int downsampleType;
    float downsampleOversizeX;
    float downsampleOversizeY;
    int gradientChannel;
    int edgeFindingChannel;
    float minMagnitude;
    float regressionRadius;
    float capture;
    float alignmentTolerance;
    float connectThreshold;
    _Bool forceFail;
    struct CGRect inputImageExtent;
    int orientation;
    int cameraType;
    int faceIndex;
    int side;
    float scale;
    float IOD;
    struct CGAffineTransform transform;
    int height;
} CDStruct_242bf05f;

typedef struct {
    int tag;
    struct CGPoint pt2;
    int eyeCase;
    int forceCase;
    int npixels;
    int bignpixels;
    CDStruct_c3faddef fullNew;
    CDStruct_5973fb4f YR;
    CDStruct_6ca1d5c6 psTemplate;
    _Bool pupilShadeAlignment;
    CDStruct_6ca1d5c6 matchingTemplate;
    int faceIndex;
    _Bool left;
    float IOD;
    CDStruct_1c31e7e7 data;
    struct {
        struct CGPoint centroid;
        int area;
        float ovalness;
        float contrast;
        float mincontrast;
        int nborder;
        CDStruct_5973fb4f IR;
        float aspectRatio;
        _Bool touchingEdge;
        int localmax;
        int localmaxrow;
        int localmaxcol;
        int localfloor;
        float rgmean;
        float rgstd;
        float ymean;
        float ystd;
    } BI;
} CDStruct_8d997f87;

typedef struct {
    struct vec2 _field1;
    struct vec2 _field2;
} CDStruct_92ccd070;

typedef struct {
    struct vec2 _field1;
} CDStruct_a6b098fc;

typedef struct {
    struct vec3 _field1;
} CDStruct_6324a431;

// Ambiguous groups
typedef struct {
    MISSING_TYPE *a__b;
} CDStruct_ec37f00f;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
} CDStruct_a734b2e2;

typedef struct {
    int lo;
    int med;
    int hi;
    int average;
} CDStruct_6ca1d5c6;

typedef struct {
    int minrow;
    int maxrow;
    int mincol;
    int maxcol;
} CDStruct_5973fb4f;

#pragma mark Typedef'd Unions

typedef union {
    float _field1;
    float _field2;
} CDUnion_48fbf68f;

